# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: g2product.proto
# Protobuf Python Version: 4.25.0
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
from google.protobuf.internal import builder as _builder
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x0fg2product.proto\x12\tg2product\"\x10\n\x0e\x44\x65stroyRequest\"\x11\n\x0f\x44\x65stroyResponse\"L\n\x0bInitRequest\x12\x12\n\nmoduleName\x18\x01 \x01(\t\x12\x11\n\tiniParams\x18\x02 \x01(\t\x12\x16\n\x0everboseLogging\x18\x03 \x01(\x03\"\x0e\n\x0cInitResponse\"\x10\n\x0eLicenseRequest\"!\n\x0fLicenseResponse\x12\x0e\n\x06result\x18\x01 \x01(\t\"\x10\n\x0eVersionRequest\"!\n\x0fVersionResponse\x12\x0e\n\x06result\x18\x01 \x01(\t2\x92\x02\n\tG2Product\x12\x42\n\x07\x44\x65stroy\x12\x19.g2product.DestroyRequest\x1a\x1a.g2product.DestroyResponse\"\x00\x12\x39\n\x04Init\x12\x16.g2product.InitRequest\x1a\x17.g2product.InitResponse\"\x00\x12\x42\n\x07License\x12\x19.g2product.LicenseRequest\x1a\x1a.g2product.LicenseResponse\"\x00\x12\x42\n\x07Version\x12\x19.g2product.VersionRequest\x1a\x1a.g2product.VersionResponse\"\x00\x42l\n$com.senzing.g2.engine.grpc.G2ProductB\x0eG2ProductProtoP\x01Z2github.com/senzing-garage/g2-sdk-go-grpc/g2productb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'g2product_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:
  _globals['DESCRIPTOR']._options = None
  _globals['DESCRIPTOR']._serialized_options = b'\n$com.senzing.g2.engine.grpc.G2ProductB\016G2ProductProtoP\001Z2github.com/senzing-garage/g2-sdk-go-grpc/g2product'
  _globals['_DESTROYREQUEST']._serialized_start=30
  _globals['_DESTROYREQUEST']._serialized_end=46
  _globals['_DESTROYRESPONSE']._serialized_start=48
  _globals['_DESTROYRESPONSE']._serialized_end=65
  _globals['_INITREQUEST']._serialized_start=67
  _globals['_INITREQUEST']._serialized_end=143
  _globals['_INITRESPONSE']._serialized_start=145
  _globals['_INITRESPONSE']._serialized_end=159
  _globals['_LICENSEREQUEST']._serialized_start=161
  _globals['_LICENSEREQUEST']._serialized_end=177
  _globals['_LICENSERESPONSE']._serialized_start=179
  _globals['_LICENSERESPONSE']._serialized_end=212
  _globals['_VERSIONREQUEST']._serialized_start=214
  _globals['_VERSIONREQUEST']._serialized_end=230
  _globals['_VERSIONRESPONSE']._serialized_start=232
  _globals['_VERSIONRESPONSE']._serialized_end=265
  _globals['_G2PRODUCT']._serialized_start=268
  _globals['_G2PRODUCT']._serialized_end=542
# @@protoc_insertion_point(module_scope)
