# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: szengine.proto
# Protobuf Python Version: 4.25.0
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
from google.protobuf.internal import builder as _builder
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n\x0eszengine.proto\x12\x08szengine\"e\n\x10\x41\x64\x64RecordRequest\x12\x16\n\x0e\x64\x61taSourceCode\x18\x01 \x01(\t\x12\x10\n\x08recordId\x18\x02 \x01(\t\x12\x18\n\x10recordDefinition\x18\x03 \x01(\t\x12\r\n\x05\x66lags\x18\x04 \x01(\x03\"#\n\x11\x41\x64\x64RecordResponse\x12\x0e\n\x06result\x18\x01 \x01(\t\",\n\x12\x43loseExportRequest\x12\x16\n\x0eresponseHandle\x18\x01 \x01(\x03\"\x15\n\x13\x43loseExportResponse\"\x19\n\x17\x43ountRedoRecordsRequest\"*\n\x18\x43ountRedoRecordsResponse\x12\x0e\n\x06result\x18\x01 \x01(\x03\"N\n\x13\x44\x65leteRecordRequest\x12\x16\n\x0e\x64\x61taSourceCode\x18\x01 \x01(\t\x12\x10\n\x08recordId\x18\x02 \x01(\t\x12\r\n\x05\x66lags\x18\x03 \x01(\x03\"&\n\x14\x44\x65leteRecordResponse\x12\x0e\n\x06result\x18\x01 \x01(\t\"D\n\x1c\x45xportCsvEntityReportRequest\x12\x15\n\rcsvColumnList\x18\x01 \x01(\t\x12\r\n\x05\x66lags\x18\x02 \x01(\x03\"/\n\x1d\x45xportCsvEntityReportResponse\x12\x0e\n\x06result\x18\x01 \x01(\x03\".\n\x1d\x45xportJsonEntityReportRequest\x12\r\n\x05\x66lags\x18\x01 \x01(\x03\"0\n\x1e\x45xportJsonEntityReportResponse\x12\x0e\n\x06result\x18\x01 \x01(\x03\"*\n\x10\x46\x65tchNextRequest\x12\x16\n\x0eresponseHandle\x18\x01 \x01(\x03\"#\n\x11\x46\x65tchNextResponse\x12\x0e\n\x06result\x18\x01 \x01(\t\"\x82\x01\n\x1c\x46indNetworkByEntityIdRequest\x12\x12\n\nentityList\x18\x01 \x01(\t\x12\x12\n\nmaxDegrees\x18\x02 \x01(\x03\x12\x16\n\x0e\x62uildOutDegree\x18\x03 \x01(\x03\x12\x13\n\x0bmaxEntities\x18\x04 \x01(\x03\x12\r\n\x05\x66lags\x18\x05 \x01(\x03\"/\n\x1d\x46indNetworkByEntityIdResponse\x12\x0e\n\x06result\x18\x01 \x01(\t\"\x82\x01\n\x1c\x46indNetworkByRecordIdRequest\x12\x12\n\nrecordList\x18\x01 \x01(\t\x12\x12\n\nmaxDegrees\x18\x02 \x01(\x03\x12\x16\n\x0e\x62uildOutDegree\x18\x03 \x01(\x03\x12\x13\n\x0bmaxEntities\x18\x04 \x01(\x03\x12\r\n\x05\x66lags\x18\x05 \x01(\x03\"/\n\x1d\x46indNetworkByRecordIdResponse\x12\x0e\n\x06result\x18\x01 \x01(\t\"\x9b\x01\n\x19\x46indPathByEntityIdRequest\x12\x15\n\rstartEntityId\x18\x01 \x01(\x03\x12\x13\n\x0b\x65ndEntityId\x18\x02 \x01(\x03\x12\x12\n\nmaxDegrees\x18\x03 \x01(\x03\x12\x12\n\nexclusions\x18\x04 \x01(\t\x12\x1b\n\x13requiredDataSources\x18\x05 \x01(\t\x12\r\n\x05\x66lags\x18\x06 \x01(\x03\",\n\x1a\x46indPathByEntityIdResponse\x12\x0e\n\x06result\x18\x01 \x01(\t\"\xd3\x01\n\x19\x46indPathByRecordIdRequest\x12\x1b\n\x13startDataSourceCode\x18\x01 \x01(\t\x12\x15\n\rstartRecordId\x18\x02 \x01(\t\x12\x19\n\x11\x65ndDataSourceCode\x18\x03 \x01(\t\x12\x13\n\x0b\x65ndRecordId\x18\x04 \x01(\t\x12\x12\n\nmaxDegrees\x18\x05 \x01(\x03\x12\x12\n\nexclusions\x18\x06 \x01(\t\x12\x1b\n\x13requiredDataSources\x18\x07 \x01(\t\x12\r\n\x05\x66lags\x18\x08 \x01(\x03\",\n\x1a\x46indPathByRecordIdResponse\x12\x0e\n\x06result\x18\x01 \x01(\t\"\x1a\n\x18GetActiveConfigIdRequest\"+\n\x19GetActiveConfigIdResponse\x12\x0e\n\x06result\x18\x01 \x01(\x03\"=\n\x1aGetEntityByEntityIdRequest\x12\x10\n\x08\x65ntityId\x18\x01 \x01(\x03\x12\r\n\x05\x66lags\x18\x02 \x01(\x03\"-\n\x1bGetEntityByEntityIdResponse\x12\x0e\n\x06result\x18\x01 \x01(\t\"U\n\x1aGetEntityByRecordIdRequest\x12\x16\n\x0e\x64\x61taSourceCode\x18\x01 \x01(\t\x12\x10\n\x08recordId\x18\x02 \x01(\t\x12\r\n\x05\x66lags\x18\x03 \x01(\x03\"-\n\x1bGetEntityByRecordIdResponse\x12\x0e\n\x06result\x18\x01 \x01(\t\"K\n\x10GetRecordRequest\x12\x16\n\x0e\x64\x61taSourceCode\x18\x01 \x01(\t\x12\x10\n\x08recordId\x18\x02 \x01(\t\x12\r\n\x05\x66lags\x18\x03 \x01(\x03\"#\n\x11GetRecordResponse\x12\x0e\n\x06result\x18\x01 \x01(\t\"\x16\n\x14GetRedoRecordRequest\"\'\n\x15GetRedoRecordResponse\x12\x0e\n\x06result\x18\x01 \x01(\t\"&\n$GetRepositoryLastModifiedTimeRequest\"7\n%GetRepositoryLastModifiedTimeResponse\x12\x0e\n\x06result\x18\x01 \x01(\x03\"F\n!GetVirtualEntityByRecordIdRequest\x12\x12\n\nrecordList\x18\x01 \x01(\t\x12\r\n\x05\x66lags\x18\x02 \x01(\x03\"4\n\"GetVirtualEntityByRecordIdResponse\x12\x0e\n\x06result\x18\x01 \x01(\t\"=\n\x1aHowEntityByEntityIdRequest\x12\x10\n\x08\x65ntityId\x18\x01 \x01(\x03\x12\r\n\x05\x66lags\x18\x02 \x01(\x03\"-\n\x1bHowEntityByEntityIdResponse\x12\x0e\n\x06result\x18\x01 \x01(\t\"\x14\n\x12PrimeEngineRequest\"\x15\n\x13PrimeEngineResponse\"=\n\x18ProcessRedoRecordRequest\x12\x12\n\nredoRecord\x18\x01 \x01(\t\x12\r\n\x05\x66lags\x18\x02 \x01(\x03\"+\n\x19ProcessRedoRecordResponse\x12\x0e\n\x06result\x18\x01 \x01(\t\":\n\x17ReevaluateEntityRequest\x12\x10\n\x08\x65ntityId\x18\x01 \x01(\x03\x12\r\n\x05\x66lags\x18\x02 \x01(\x03\"*\n\x18ReevaluateEntityResponse\x12\x0e\n\x06result\x18\x01 \x01(\t\"R\n\x17ReevaluateRecordRequest\x12\x16\n\x0e\x64\x61taSourceCode\x18\x01 \x01(\t\x12\x10\n\x08recordId\x18\x02 \x01(\t\x12\r\n\x05\x66lags\x18\x03 \x01(\x03\"*\n\x18ReevaluateRecordResponse\x12\x0e\n\x06result\x18\x01 \x01(\t\"i\n\x14ReplaceRecordRequest\x12\x16\n\x0e\x64\x61taSourceCode\x18\x01 \x01(\t\x12\x10\n\x08recordId\x18\x02 \x01(\t\x12\x18\n\x10recordDefinition\x18\x03 \x01(\t\x12\r\n\x05\x66lags\x18\x04 \x01(\x03\"\'\n\x15ReplaceRecordResponse\x12\x0e\n\x06result\x18\x01 \x01(\t\"U\n\x19SearchByAttributesRequest\x12\x12\n\nattributes\x18\x01 \x01(\t\x12\x15\n\rsearchProfile\x18\x02 \x01(\t\x12\r\n\x05\x66lags\x18\x03 \x01(\x03\",\n\x1aSearchByAttributesResponse\x12\x0e\n\x06result\x18\x01 \x01(\t\"\x11\n\x0fGetStatsRequest\"\"\n\x10GetStatsResponse\x12\x0e\n\x06result\x18\x01 \x01(\t\"J\n\"StreamExportCsvEntityReportRequest\x12\x15\n\rcsvColumnList\x18\x01 \x01(\t\x12\r\n\x05\x66lags\x18\x02 \x01(\x03\"5\n#StreamExportCsvEntityReportResponse\x12\x0e\n\x06result\x18\x01 \x01(\t\"4\n#StreamExportJsonEntityReportRequest\x12\r\n\x05\x66lags\x18\x01 \x01(\x03\"6\n$StreamExportJsonEntityReportResponse\x12\x0e\n\x06result\x18\x01 \x01(\t\"I\n\x12WhyEntitiesRequest\x12\x11\n\tentityId1\x18\x01 \x01(\x03\x12\x11\n\tentityId2\x18\x02 \x01(\x03\x12\r\n\x05\x66lags\x18\x03 \x01(\x03\"%\n\x13WhyEntitiesResponse\x12\x0e\n\x06result\x18\x01 \x01(\t\"S\n\x18WhyRecordInEntityRequest\x12\x16\n\x0e\x64\x61taSourceCode\x18\x01 \x01(\t\x12\x10\n\x08recordId\x18\x02 \x01(\t\x12\r\n\x05\x66lags\x18\x03 \x01(\x03\"+\n\x19WhyRecordInEntityResponse\x12\x0e\n\x06result\x18\x01 \x01(\t\"z\n\x11WhyRecordsRequest\x12\x17\n\x0f\x64\x61taSourceCode1\x18\x01 \x01(\t\x12\x11\n\trecordId1\x18\x02 \x01(\t\x12\x17\n\x0f\x64\x61taSourceCode2\x18\x03 \x01(\t\x12\x11\n\trecordId2\x18\x04 \x01(\t\x12\r\n\x05\x66lags\x18\x05 \x01(\x03\"$\n\x12WhyRecordsResponse\x12\x0e\n\x06result\x18\x01 \x01(\t2\x9e\x17\n\x08SzEngine\x12\x46\n\tAddRecord\x12\x1a.szengine.AddRecordRequest\x1a\x1b.szengine.AddRecordResponse\"\x00\x12L\n\x0b\x43loseExport\x12\x1c.szengine.CloseExportRequest\x1a\x1d.szengine.CloseExportResponse\"\x00\x12[\n\x10\x43ountRedoRecords\x12!.szengine.CountRedoRecordsRequest\x1a\".szengine.CountRedoRecordsResponse\"\x00\x12O\n\x0c\x44\x65leteRecord\x12\x1d.szengine.DeleteRecordRequest\x1a\x1e.szengine.DeleteRecordResponse\"\x00\x12j\n\x15\x45xportCsvEntityReport\x12&.szengine.ExportCsvEntityReportRequest\x1a\'.szengine.ExportCsvEntityReportResponse\"\x00\x12m\n\x16\x45xportJsonEntityReport\x12\'.szengine.ExportJsonEntityReportRequest\x1a(.szengine.ExportJsonEntityReportResponse\"\x00\x12\x46\n\tFetchNext\x12\x1a.szengine.FetchNextRequest\x1a\x1b.szengine.FetchNextResponse\"\x00\x12j\n\x15\x46indNetworkByEntityId\x12&.szengine.FindNetworkByEntityIdRequest\x1a\'.szengine.FindNetworkByEntityIdResponse\"\x00\x12j\n\x15\x46indNetworkByRecordId\x12&.szengine.FindNetworkByRecordIdRequest\x1a\'.szengine.FindNetworkByRecordIdResponse\"\x00\x12\x61\n\x12\x46indPathByEntityId\x12#.szengine.FindPathByEntityIdRequest\x1a$.szengine.FindPathByEntityIdResponse\"\x00\x12\x61\n\x12\x46indPathByRecordId\x12#.szengine.FindPathByRecordIdRequest\x1a$.szengine.FindPathByRecordIdResponse\"\x00\x12^\n\x11GetActiveConfigId\x12\".szengine.GetActiveConfigIdRequest\x1a#.szengine.GetActiveConfigIdResponse\"\x00\x12\x64\n\x13GetEntityByEntityId\x12$.szengine.GetEntityByEntityIdRequest\x1a%.szengine.GetEntityByEntityIdResponse\"\x00\x12\x64\n\x13GetEntityByRecordId\x12$.szengine.GetEntityByRecordIdRequest\x1a%.szengine.GetEntityByRecordIdResponse\"\x00\x12\x46\n\tGetRecord\x12\x1a.szengine.GetRecordRequest\x1a\x1b.szengine.GetRecordResponse\"\x00\x12R\n\rGetRedoRecord\x12\x1e.szengine.GetRedoRecordRequest\x1a\x1f.szengine.GetRedoRecordResponse\"\x00\x12\x82\x01\n\x1dGetRepositoryLastModifiedTime\x12..szengine.GetRepositoryLastModifiedTimeRequest\x1a/.szengine.GetRepositoryLastModifiedTimeResponse\"\x00\x12\x43\n\x08GetStats\x12\x19.szengine.GetStatsRequest\x1a\x1a.szengine.GetStatsResponse\"\x00\x12y\n\x1aGetVirtualEntityByRecordId\x12+.szengine.GetVirtualEntityByRecordIdRequest\x1a,.szengine.GetVirtualEntityByRecordIdResponse\"\x00\x12\x64\n\x13HowEntityByEntityId\x12$.szengine.HowEntityByEntityIdRequest\x1a%.szengine.HowEntityByEntityIdResponse\"\x00\x12L\n\x0bPrimeEngine\x12\x1c.szengine.PrimeEngineRequest\x1a\x1d.szengine.PrimeEngineResponse\"\x00\x12^\n\x11ProcessRedoRecord\x12\".szengine.ProcessRedoRecordRequest\x1a#.szengine.ProcessRedoRecordResponse\"\x00\x12[\n\x10ReevaluateEntity\x12!.szengine.ReevaluateEntityRequest\x1a\".szengine.ReevaluateEntityResponse\"\x00\x12[\n\x10ReevaluateRecord\x12!.szengine.ReevaluateRecordRequest\x1a\".szengine.ReevaluateRecordResponse\"\x00\x12R\n\rReplaceRecord\x12\x1e.szengine.ReplaceRecordRequest\x1a\x1f.szengine.ReplaceRecordResponse\"\x00\x12\x61\n\x12SearchByAttributes\x12#.szengine.SearchByAttributesRequest\x1a$.szengine.SearchByAttributesResponse\"\x00\x12~\n\x1bStreamExportCsvEntityReport\x12,.szengine.StreamExportCsvEntityReportRequest\x1a-.szengine.StreamExportCsvEntityReportResponse\"\x00\x30\x01\x12\x81\x01\n\x1cStreamExportJsonEntityReport\x12-.szengine.StreamExportJsonEntityReportRequest\x1a..szengine.StreamExportJsonEntityReportResponse\"\x00\x30\x01\x12L\n\x0bWhyEntities\x12\x1c.szengine.WhyEntitiesRequest\x1a\x1d.szengine.WhyEntitiesResponse\"\x00\x12^\n\x11WhyRecordInEntity\x12\".szengine.WhyRecordInEntityRequest\x1a#.szengine.WhyRecordInEntityResponse\"\x00\x12I\n\nWhyRecords\x12\x1b.szengine.WhyRecordsRequest\x1a\x1c.szengine.WhyRecordsResponse\"\x00\x42g\n#com.senzing.sz.engine.grpc.SzEngineB\rSzEngineProtoZ1github.com/senzing-garage/sz-sdk-go-grpc/szengineb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'szengine_pb2', _globals)
if _descriptor._USE_C_DESCRIPTORS == False:
  _globals['DESCRIPTOR']._options = None
  _globals['DESCRIPTOR']._serialized_options = b'\n#com.senzing.sz.engine.grpc.SzEngineB\rSzEngineProtoZ1github.com/senzing-garage/sz-sdk-go-grpc/szengine'
  _globals['_ADDRECORDREQUEST']._serialized_start=28
  _globals['_ADDRECORDREQUEST']._serialized_end=129
  _globals['_ADDRECORDRESPONSE']._serialized_start=131
  _globals['_ADDRECORDRESPONSE']._serialized_end=166
  _globals['_CLOSEEXPORTREQUEST']._serialized_start=168
  _globals['_CLOSEEXPORTREQUEST']._serialized_end=212
  _globals['_CLOSEEXPORTRESPONSE']._serialized_start=214
  _globals['_CLOSEEXPORTRESPONSE']._serialized_end=235
  _globals['_COUNTREDORECORDSREQUEST']._serialized_start=237
  _globals['_COUNTREDORECORDSREQUEST']._serialized_end=262
  _globals['_COUNTREDORECORDSRESPONSE']._serialized_start=264
  _globals['_COUNTREDORECORDSRESPONSE']._serialized_end=306
  _globals['_DELETERECORDREQUEST']._serialized_start=308
  _globals['_DELETERECORDREQUEST']._serialized_end=386
  _globals['_DELETERECORDRESPONSE']._serialized_start=388
  _globals['_DELETERECORDRESPONSE']._serialized_end=426
  _globals['_EXPORTCSVENTITYREPORTREQUEST']._serialized_start=428
  _globals['_EXPORTCSVENTITYREPORTREQUEST']._serialized_end=496
  _globals['_EXPORTCSVENTITYREPORTRESPONSE']._serialized_start=498
  _globals['_EXPORTCSVENTITYREPORTRESPONSE']._serialized_end=545
  _globals['_EXPORTJSONENTITYREPORTREQUEST']._serialized_start=547
  _globals['_EXPORTJSONENTITYREPORTREQUEST']._serialized_end=593
  _globals['_EXPORTJSONENTITYREPORTRESPONSE']._serialized_start=595
  _globals['_EXPORTJSONENTITYREPORTRESPONSE']._serialized_end=643
  _globals['_FETCHNEXTREQUEST']._serialized_start=645
  _globals['_FETCHNEXTREQUEST']._serialized_end=687
  _globals['_FETCHNEXTRESPONSE']._serialized_start=689
  _globals['_FETCHNEXTRESPONSE']._serialized_end=724
  _globals['_FINDNETWORKBYENTITYIDREQUEST']._serialized_start=727
  _globals['_FINDNETWORKBYENTITYIDREQUEST']._serialized_end=857
  _globals['_FINDNETWORKBYENTITYIDRESPONSE']._serialized_start=859
  _globals['_FINDNETWORKBYENTITYIDRESPONSE']._serialized_end=906
  _globals['_FINDNETWORKBYRECORDIDREQUEST']._serialized_start=909
  _globals['_FINDNETWORKBYRECORDIDREQUEST']._serialized_end=1039
  _globals['_FINDNETWORKBYRECORDIDRESPONSE']._serialized_start=1041
  _globals['_FINDNETWORKBYRECORDIDRESPONSE']._serialized_end=1088
  _globals['_FINDPATHBYENTITYIDREQUEST']._serialized_start=1091
  _globals['_FINDPATHBYENTITYIDREQUEST']._serialized_end=1246
  _globals['_FINDPATHBYENTITYIDRESPONSE']._serialized_start=1248
  _globals['_FINDPATHBYENTITYIDRESPONSE']._serialized_end=1292
  _globals['_FINDPATHBYRECORDIDREQUEST']._serialized_start=1295
  _globals['_FINDPATHBYRECORDIDREQUEST']._serialized_end=1506
  _globals['_FINDPATHBYRECORDIDRESPONSE']._serialized_start=1508
  _globals['_FINDPATHBYRECORDIDRESPONSE']._serialized_end=1552
  _globals['_GETACTIVECONFIGIDREQUEST']._serialized_start=1554
  _globals['_GETACTIVECONFIGIDREQUEST']._serialized_end=1580
  _globals['_GETACTIVECONFIGIDRESPONSE']._serialized_start=1582
  _globals['_GETACTIVECONFIGIDRESPONSE']._serialized_end=1625
  _globals['_GETENTITYBYENTITYIDREQUEST']._serialized_start=1627
  _globals['_GETENTITYBYENTITYIDREQUEST']._serialized_end=1688
  _globals['_GETENTITYBYENTITYIDRESPONSE']._serialized_start=1690
  _globals['_GETENTITYBYENTITYIDRESPONSE']._serialized_end=1735
  _globals['_GETENTITYBYRECORDIDREQUEST']._serialized_start=1737
  _globals['_GETENTITYBYRECORDIDREQUEST']._serialized_end=1822
  _globals['_GETENTITYBYRECORDIDRESPONSE']._serialized_start=1824
  _globals['_GETENTITYBYRECORDIDRESPONSE']._serialized_end=1869
  _globals['_GETRECORDREQUEST']._serialized_start=1871
  _globals['_GETRECORDREQUEST']._serialized_end=1946
  _globals['_GETRECORDRESPONSE']._serialized_start=1948
  _globals['_GETRECORDRESPONSE']._serialized_end=1983
  _globals['_GETREDORECORDREQUEST']._serialized_start=1985
  _globals['_GETREDORECORDREQUEST']._serialized_end=2007
  _globals['_GETREDORECORDRESPONSE']._serialized_start=2009
  _globals['_GETREDORECORDRESPONSE']._serialized_end=2048
  _globals['_GETREPOSITORYLASTMODIFIEDTIMEREQUEST']._serialized_start=2050
  _globals['_GETREPOSITORYLASTMODIFIEDTIMEREQUEST']._serialized_end=2088
  _globals['_GETREPOSITORYLASTMODIFIEDTIMERESPONSE']._serialized_start=2090
  _globals['_GETREPOSITORYLASTMODIFIEDTIMERESPONSE']._serialized_end=2145
  _globals['_GETVIRTUALENTITYBYRECORDIDREQUEST']._serialized_start=2147
  _globals['_GETVIRTUALENTITYBYRECORDIDREQUEST']._serialized_end=2217
  _globals['_GETVIRTUALENTITYBYRECORDIDRESPONSE']._serialized_start=2219
  _globals['_GETVIRTUALENTITYBYRECORDIDRESPONSE']._serialized_end=2271
  _globals['_HOWENTITYBYENTITYIDREQUEST']._serialized_start=2273
  _globals['_HOWENTITYBYENTITYIDREQUEST']._serialized_end=2334
  _globals['_HOWENTITYBYENTITYIDRESPONSE']._serialized_start=2336
  _globals['_HOWENTITYBYENTITYIDRESPONSE']._serialized_end=2381
  _globals['_PRIMEENGINEREQUEST']._serialized_start=2383
  _globals['_PRIMEENGINEREQUEST']._serialized_end=2403
  _globals['_PRIMEENGINERESPONSE']._serialized_start=2405
  _globals['_PRIMEENGINERESPONSE']._serialized_end=2426
  _globals['_PROCESSREDORECORDREQUEST']._serialized_start=2428
  _globals['_PROCESSREDORECORDREQUEST']._serialized_end=2489
  _globals['_PROCESSREDORECORDRESPONSE']._serialized_start=2491
  _globals['_PROCESSREDORECORDRESPONSE']._serialized_end=2534
  _globals['_REEVALUATEENTITYREQUEST']._serialized_start=2536
  _globals['_REEVALUATEENTITYREQUEST']._serialized_end=2594
  _globals['_REEVALUATEENTITYRESPONSE']._serialized_start=2596
  _globals['_REEVALUATEENTITYRESPONSE']._serialized_end=2638
  _globals['_REEVALUATERECORDREQUEST']._serialized_start=2640
  _globals['_REEVALUATERECORDREQUEST']._serialized_end=2722
  _globals['_REEVALUATERECORDRESPONSE']._serialized_start=2724
  _globals['_REEVALUATERECORDRESPONSE']._serialized_end=2766
  _globals['_REPLACERECORDREQUEST']._serialized_start=2768
  _globals['_REPLACERECORDREQUEST']._serialized_end=2873
  _globals['_REPLACERECORDRESPONSE']._serialized_start=2875
  _globals['_REPLACERECORDRESPONSE']._serialized_end=2914
  _globals['_SEARCHBYATTRIBUTESREQUEST']._serialized_start=2916
  _globals['_SEARCHBYATTRIBUTESREQUEST']._serialized_end=3001
  _globals['_SEARCHBYATTRIBUTESRESPONSE']._serialized_start=3003
  _globals['_SEARCHBYATTRIBUTESRESPONSE']._serialized_end=3047
  _globals['_GETSTATSREQUEST']._serialized_start=3049
  _globals['_GETSTATSREQUEST']._serialized_end=3066
  _globals['_GETSTATSRESPONSE']._serialized_start=3068
  _globals['_GETSTATSRESPONSE']._serialized_end=3102
  _globals['_STREAMEXPORTCSVENTITYREPORTREQUEST']._serialized_start=3104
  _globals['_STREAMEXPORTCSVENTITYREPORTREQUEST']._serialized_end=3178
  _globals['_STREAMEXPORTCSVENTITYREPORTRESPONSE']._serialized_start=3180
  _globals['_STREAMEXPORTCSVENTITYREPORTRESPONSE']._serialized_end=3233
  _globals['_STREAMEXPORTJSONENTITYREPORTREQUEST']._serialized_start=3235
  _globals['_STREAMEXPORTJSONENTITYREPORTREQUEST']._serialized_end=3287
  _globals['_STREAMEXPORTJSONENTITYREPORTRESPONSE']._serialized_start=3289
  _globals['_STREAMEXPORTJSONENTITYREPORTRESPONSE']._serialized_end=3343
  _globals['_WHYENTITIESREQUEST']._serialized_start=3345
  _globals['_WHYENTITIESREQUEST']._serialized_end=3418
  _globals['_WHYENTITIESRESPONSE']._serialized_start=3420
  _globals['_WHYENTITIESRESPONSE']._serialized_end=3457
  _globals['_WHYRECORDINENTITYREQUEST']._serialized_start=3459
  _globals['_WHYRECORDINENTITYREQUEST']._serialized_end=3542
  _globals['_WHYRECORDINENTITYRESPONSE']._serialized_start=3544
  _globals['_WHYRECORDINENTITYRESPONSE']._serialized_end=3587
  _globals['_WHYRECORDSREQUEST']._serialized_start=3589
  _globals['_WHYRECORDSREQUEST']._serialized_end=3711
  _globals['_WHYRECORDSRESPONSE']._serialized_start=3713
  _globals['_WHYRECORDSRESPONSE']._serialized_end=3749
  _globals['_SZENGINE']._serialized_start=3752
  _globals['_SZENGINE']._serialized_end=6726
# @@protoc_insertion_point(module_scope)
