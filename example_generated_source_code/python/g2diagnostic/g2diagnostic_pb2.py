# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: g2diagnostic.proto
# Protobuf Python Version: 4.25.0
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
from google.protobuf.internal import builder as _builder
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x12g2diagnostic.proto\x12\x0cg2diagnostic\"*\n\x12\x43heckDBPerfRequest\x12\x14\n\x0csecondsToRun\x18\x01 \x01(\x05\"%\n\x13\x43heckDBPerfResponse\x12\x0e\n\x06result\x18\x01 \x01(\t\"\x10\n\x0e\x44\x65stroyRequest\"\x11\n\x0f\x44\x65stroyResponse\"L\n\x0bInitRequest\x12\x12\n\nmoduleName\x18\x01 \x01(\t\x12\x11\n\tiniParams\x18\x02 \x01(\t\x12\x16\n\x0everboseLogging\x18\x03 \x01(\x03\"\x0e\n\x0cInitResponse\"n\n\x17InitWithConfigIDRequest\x12\x12\n\nmoduleName\x18\x01 \x01(\t\x12\x11\n\tiniParams\x18\x02 \x01(\t\x12\x14\n\x0cinitConfigID\x18\x03 \x01(\x03\x12\x16\n\x0everboseLogging\x18\x04 \x01(\x03\"\x1a\n\x18InitWithConfigIDResponse\"%\n\rReinitRequest\x12\x14\n\x0cinitConfigID\x18\x01 \x01(\x03\"\x10\n\x0eReinitResponse2\x9b\x03\n\x0cG2Diagnostic\x12T\n\x0b\x43heckDBPerf\x12 .g2diagnostic.CheckDBPerfRequest\x1a!.g2diagnostic.CheckDBPerfResponse\"\x00\x12H\n\x07\x44\x65stroy\x12\x1c.g2diagnostic.DestroyRequest\x1a\x1d.g2diagnostic.DestroyResponse\"\x00\x12?\n\x04Init\x12\x19.g2diagnostic.InitRequest\x1a\x1a.g2diagnostic.InitResponse\"\x00\x12\x63\n\x10InitWithConfigID\x12%.g2diagnostic.InitWithConfigIDRequest\x1a&.g2diagnostic.InitWithConfigIDResponse\"\x00\x12\x45\n\x06Reinit\x12\x1b.g2diagnostic.ReinitRequest\x1a\x1c.g2diagnostic.ReinitResponse\"\x00\x42u\n\'com.senzing.g2.engine.grpc.G2DiagnosticB\x11G2DiagnosticProtoP\x01Z5github.com/senzing-garage/g2-sdk-go-grpc/g2diagnosticb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'g2diagnostic_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:
  _globals['DESCRIPTOR']._options = None
  _globals['DESCRIPTOR']._serialized_options = b'\n\'com.senzing.g2.engine.grpc.G2DiagnosticB\021G2DiagnosticProtoP\001Z5github.com/senzing-garage/g2-sdk-go-grpc/g2diagnostic'
  _globals['_CHECKDBPERFREQUEST']._serialized_start=36
  _globals['_CHECKDBPERFREQUEST']._serialized_end=78
  _globals['_CHECKDBPERFRESPONSE']._serialized_start=80
  _globals['_CHECKDBPERFRESPONSE']._serialized_end=117
  _globals['_DESTROYREQUEST']._serialized_start=119
  _globals['_DESTROYREQUEST']._serialized_end=135
  _globals['_DESTROYRESPONSE']._serialized_start=137
  _globals['_DESTROYRESPONSE']._serialized_end=154
  _globals['_INITREQUEST']._serialized_start=156
  _globals['_INITREQUEST']._serialized_end=232
  _globals['_INITRESPONSE']._serialized_start=234
  _globals['_INITRESPONSE']._serialized_end=248
  _globals['_INITWITHCONFIGIDREQUEST']._serialized_start=250
  _globals['_INITWITHCONFIGIDREQUEST']._serialized_end=360
  _globals['_INITWITHCONFIGIDRESPONSE']._serialized_start=362
  _globals['_INITWITHCONFIGIDRESPONSE']._serialized_end=388
  _globals['_REINITREQUEST']._serialized_start=390
  _globals['_REINITREQUEST']._serialized_end=427
  _globals['_REINITRESPONSE']._serialized_start=429
  _globals['_REINITRESPONSE']._serialized_end=445
  _globals['_G2DIAGNOSTIC']._serialized_start=448
  _globals['_G2DIAGNOSTIC']._serialized_end=859
# @@protoc_insertion_point(module_scope)
