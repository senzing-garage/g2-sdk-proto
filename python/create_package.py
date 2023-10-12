import tempfile
import pathlib
import subprocess
import os
import code
import shutil


proto_files = [
    'g2configmgr.proto',
    'g2config.proto',
    'g2diagnostic.proto',
    'g2engine.proto',
    'g2hasher.proto',
    'g2product.proto',
    'g2ssadm.proto'
]

package_name = 'senzing_grpc_protobuf'

start_dir = os.getcwd()
dist_dir = os.path.join(start_dir, 'dist')
working_dir = tempfile.TemporaryDirectory()

toml_path = os.path.join(start_dir, 'pyproject.toml')
if not os.path.exists(toml_path):
    raise Exception(F'pyproject.toml is required at {toml_path}')

license_path = os.path.join(start_dir, 'LICENSE')
if not os.path.exists(license_path):
    raise Exception(F'LICENSE is required at {license_path}')

readme_path = os.path.join(start_dir, 'README.md')
if not os.path.exists(readme_path):
    raise Exception(F'README.md is required at {readme_path}')

#if dist dir already exists, error out
if os.path.exists(dist_dir):
    raise Exception(F'dist dir aleady exists.  must be removed before build {dist_dir}')

tmp_dist_dir = os.path.join(working_dir.name, 'dist')

#create the dirctory structure
src_dir = os.path.join(working_dir.name, 'src')
os.mkdir(src_dir)
code_dir = os.path.join(src_dir, package_name)
os.mkdir(code_dir)
proto_dir = os.path.join(src_dir, 'proto')
os.mkdir(proto_dir)
proto_file_dir = os.path.join(proto_dir, package_name)
os.mkdir(proto_file_dir)

#add the __init__.py
pathlib.Path(os.path.join(code_dir, '__init__.py')).touch()

#generate the protobuf python from proto files
print('generating python source files...')
for proto_file in proto_files:
    #copy the proto file to appropriate destinateion
    src_file = os.path.abspath(F'{start_dir}/../{proto_file}')
    dst_file = F'{proto_file_dir}/{proto_file}'
    if not os.path.exists(src_file):
        raise Exception(F'source file not found {src_file}')

    shutil.copy(src_file, proto_file_dir)

    #generate the python
    proto_file_path = F'{package_name}/{proto_file}'
    command = [
        'python3',
        '-m',
        'grpc_tools.protoc',
        F'--proto_path={proto_dir}',
        F'--grpc_python_out={src_dir}',
        F'--python_out={src_dir}',
        proto_file_path
    ]
    exe_output = subprocess.run(command, capture_output=True)
    if exe_output.returncode:
        raise Exception(F'error generating protobuf: {"".join(command)} {exe_output}')

#copy pyproject.toml, README.md and LICENSE in place
shutil.copy(toml_path, working_dir.name)
shutil.copy(license_path, working_dir.name)
shutil.copy(readme_path, working_dir.name)

#build package
print('building package...')
os.chdir(working_dir.name)
build_command = [
    'python3',
    '-m',
    'build'
]
exe_output = subprocess.run(build_command, capture_output=True)
if exe_output.returncode:
    raise Exception(F'error building package: {"".join(build_command)} {exe_output}')
os.chdir(start_dir)

#copy the dist directory
shutil.move(tmp_dist_dir, dist_dir)

print(F'success! package can be found here: {dist_dir}')




