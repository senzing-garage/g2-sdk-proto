# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: g2config.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import builder as _builder
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x0eg2config.proto\x12\x08g2config\"?\n\x14\x41\x64\x64\x44\x61taSourceRequest\x12\x14\n\x0c\x63onfigHandle\x18\x01 \x01(\x03\x12\x11\n\tinputJson\x18\x02 \x01(\t\"\'\n\x15\x41\x64\x64\x44\x61taSourceResponse\x12\x0e\n\x06result\x18\x01 \x01(\t\"\x1b\n\x19\x43learLastExceptionRequest\"\x1c\n\x1a\x43learLastExceptionResponse\"$\n\x0c\x43loseRequest\x12\x14\n\x0c\x63onfigHandle\x18\x01 \x01(\x03\"\x0f\n\rCloseResponse\"\x0f\n\rCreateRequest\" \n\x0e\x43reateResponse\x12\x0e\n\x06result\x18\x01 \x01(\x03\"B\n\x17\x44\x65leteDataSourceRequest\x12\x14\n\x0c\x63onfigHandle\x18\x01 \x01(\x03\x12\x11\n\tinputJson\x18\x02 \x01(\t\"\x1a\n\x18\x44\x65leteDataSourceResponse\"\x10\n\x0e\x44\x65stroyRequest\"\x11\n\x0f\x44\x65stroyResponse\"\x19\n\x17GetLastExceptionRequest\"*\n\x18GetLastExceptionResponse\x12\x0e\n\x06result\x18\x01 \x01(\t\"\x1d\n\x1bGetLastExceptionCodeRequest\".\n\x1cGetLastExceptionCodeResponse\x12\x0e\n\x06result\x18\x01 \x01(\x05\"L\n\x0bInitRequest\x12\x12\n\nmoduleName\x18\x01 \x01(\t\x12\x11\n\tiniParams\x18\x02 \x01(\t\x12\x16\n\x0everboseLogging\x18\x03 \x01(\x05\"\x0e\n\x0cInitResponse\".\n\x16ListDataSourcesRequest\x12\x14\n\x0c\x63onfigHandle\x18\x01 \x01(\x03\")\n\x17ListDataSourcesResponse\x12\x0e\n\x06result\x18\x01 \x01(\t\"!\n\x0bLoadRequest\x12\x12\n\njsonConfig\x18\x01 \x01(\t\"\x1e\n\x0cLoadResponse\x12\x0e\n\x06result\x18\x01 \x01(\x03\"#\n\x0bSaveRequest\x12\x14\n\x0c\x63onfigHandle\x18\x01 \x01(\t\"\x1e\n\x0cSaveResponse\x12\x0e\n\x06result\x18\x01 \x01(\t2\xa6\x07\n\x08G2Config\x12R\n\rAddDataSource\x12\x1e.g2config.AddDataSourceRequest\x1a\x1f.g2config.AddDataSourceResponse\"\x00\x12\x61\n\x12\x43learLastException\x12#.g2config.ClearLastExceptionRequest\x1a$.g2config.ClearLastExceptionResponse\"\x00\x12:\n\x05\x43lose\x12\x16.g2config.CloseRequest\x1a\x17.g2config.CloseResponse\"\x00\x12=\n\x06\x43reate\x12\x17.g2config.CreateRequest\x1a\x18.g2config.CreateResponse\"\x00\x12[\n\x10\x44\x65leteDataSource\x12!.g2config.DeleteDataSourceRequest\x1a\".g2config.DeleteDataSourceResponse\"\x00\x12@\n\x07\x44\x65stroy\x12\x18.g2config.DestroyRequest\x1a\x19.g2config.DestroyResponse\"\x00\x12[\n\x10GetLastException\x12!.g2config.GetLastExceptionRequest\x1a\".g2config.GetLastExceptionResponse\"\x00\x12g\n\x14GetLastExceptionCode\x12%.g2config.GetLastExceptionCodeRequest\x1a&.g2config.GetLastExceptionCodeResponse\"\x00\x12\x37\n\x04Init\x12\x15.g2config.InitRequest\x1a\x16.g2config.InitResponse\"\x00\x12X\n\x0fListDataSources\x12 .g2config.ListDataSourcesRequest\x1a!.g2config.ListDataSourcesResponse\"\x00\x12\x37\n\x04Load\x12\x15.g2config.LoadRequest\x1a\x16.g2config.LoadResponse\"\x00\x12\x37\n\x04Save\x12\x15.g2config.SaveRequest\x1a\x16.g2config.SaveResponse\"\x00\x42\x62\n#com.senzing.g2.engine.grpc.G2ConfigB\rG2ConfigProtoP\x01Z*github.com/senzing/g2-sdk-go-grpc/g2configb\x06proto3')

_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, globals())
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'g2config_pb2', globals())
if _descriptor._USE_C_DESCRIPTORS == False:

  DESCRIPTOR._options = None
  DESCRIPTOR._serialized_options = b'\n#com.senzing.g2.engine.grpc.G2ConfigB\rG2ConfigProtoP\001Z*github.com/senzing/g2-sdk-go-grpc/g2config'
  _ADDDATASOURCEREQUEST._serialized_start=28
  _ADDDATASOURCEREQUEST._serialized_end=91
  _ADDDATASOURCERESPONSE._serialized_start=93
  _ADDDATASOURCERESPONSE._serialized_end=132
  _CLEARLASTEXCEPTIONREQUEST._serialized_start=134
  _CLEARLASTEXCEPTIONREQUEST._serialized_end=161
  _CLEARLASTEXCEPTIONRESPONSE._serialized_start=163
  _CLEARLASTEXCEPTIONRESPONSE._serialized_end=191
  _CLOSEREQUEST._serialized_start=193
  _CLOSEREQUEST._serialized_end=229
  _CLOSERESPONSE._serialized_start=231
  _CLOSERESPONSE._serialized_end=246
  _CREATEREQUEST._serialized_start=248
  _CREATEREQUEST._serialized_end=263
  _CREATERESPONSE._serialized_start=265
  _CREATERESPONSE._serialized_end=297
  _DELETEDATASOURCEREQUEST._serialized_start=299
  _DELETEDATASOURCEREQUEST._serialized_end=365
  _DELETEDATASOURCERESPONSE._serialized_start=367
  _DELETEDATASOURCERESPONSE._serialized_end=393
  _DESTROYREQUEST._serialized_start=395
  _DESTROYREQUEST._serialized_end=411
  _DESTROYRESPONSE._serialized_start=413
  _DESTROYRESPONSE._serialized_end=430
  _GETLASTEXCEPTIONREQUEST._serialized_start=432
  _GETLASTEXCEPTIONREQUEST._serialized_end=457
  _GETLASTEXCEPTIONRESPONSE._serialized_start=459
  _GETLASTEXCEPTIONRESPONSE._serialized_end=501
  _GETLASTEXCEPTIONCODEREQUEST._serialized_start=503
  _GETLASTEXCEPTIONCODEREQUEST._serialized_end=532
  _GETLASTEXCEPTIONCODERESPONSE._serialized_start=534
  _GETLASTEXCEPTIONCODERESPONSE._serialized_end=580
  _INITREQUEST._serialized_start=582
  _INITREQUEST._serialized_end=658
  _INITRESPONSE._serialized_start=660
  _INITRESPONSE._serialized_end=674
  _LISTDATASOURCESREQUEST._serialized_start=676
  _LISTDATASOURCESREQUEST._serialized_end=722
  _LISTDATASOURCESRESPONSE._serialized_start=724
  _LISTDATASOURCESRESPONSE._serialized_end=765
  _LOADREQUEST._serialized_start=767
  _LOADREQUEST._serialized_end=800
  _LOADRESPONSE._serialized_start=802
  _LOADRESPONSE._serialized_end=832
  _SAVEREQUEST._serialized_start=834
  _SAVEREQUEST._serialized_end=869
  _SAVERESPONSE._serialized_start=871
  _SAVERESPONSE._serialized_end=901
  _G2CONFIG._serialized_start=904
  _G2CONFIG._serialized_end=1838
# @@protoc_insertion_point(module_scope)
