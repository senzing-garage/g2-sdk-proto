<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: g2engine.proto

namespace GPBMetadata;

class G2Engine
{
    public static $is_initialized = false;

    public static function initOnce() {
        $pool = \Google\Protobuf\Internal\DescriptorPool::getGeneratedPool();

        if (static::$is_initialized == true) {
          return;
        }
        $pool->internalAddGeneratedFile(
            '
�~
g2engine.protog2engine"^
AddRecordRequest
dataSourceCode (	
recordID (	
jsonData (	
loadID (	"
AddRecordResponse"u
AddRecordWithInfoRequest
dataSourceCode (	
recordID (	
jsonData (	
loadID (	
flags ("+
AddRecordWithInfoResponse
result (	",
CloseExportRequest
responseHandle ("
CloseExportResponse"
CountRedoRecordsRequest"*
CountRedoRecordsResponse
result ("O
DeleteRecordRequest
dataSourceCode (	
recordID (	
loadID (	"
DeleteRecordResponse"f
DeleteRecordWithInfoRequest
dataSourceCode (	
recordID (	
loadID (	
flags (".
DeleteRecordWithInfoResponse
result (	"
DestroyRequest"
DestroyResponse"
ExportConfigRequest"&
ExportConfigResponse
result (	" 
ExportConfigAndConfigIDRequest"C
ExportConfigAndConfigIDResponse
config (	
configID ("D
ExportCSVEntityReportRequest
csvColumnList (	
flags ("/
ExportCSVEntityReportResponse
result (".
ExportJSONEntityReportRequest
flags ("0
ExportJSONEntityReportResponse
result ("*
FetchNextRequest
responseHandle ("#
FetchNextResponse
result (	"K
(FindInterestingEntitiesByEntityIDRequest
entityID (
flags (";
)FindInterestingEntitiesByEntityIDResponse
result (	"c
(FindInterestingEntitiesByRecordIDRequest
dataSourceCode (	
recordID (	
flags (";
)FindInterestingEntitiesByRecordIDResponse
result (	"r
FindNetworkByEntityIDRequest

entityList (	
	maxDegree (
buildOutDegree (
maxEntities ("/
FindNetworkByEntityIDResponse
result (	"�
FindNetworkByEntityID_V2Request

entityList (	
	maxDegree (
buildOutDegree (
maxEntities (
flags ("2
 FindNetworkByEntityID_V2Response
result (	"r
FindNetworkByRecordIDRequest

recordList (	
	maxDegree (
buildOutDegree (
maxEntities ("/
FindNetworkByRecordIDResponse
result (	"�
FindNetworkByRecordID_V2Request

recordList (	
	maxDegree (
buildOutDegree (
maxEntities (
flags ("2
 FindNetworkByRecordID_V2Response
result (	"T
FindPathByEntityIDRequest
	entityID1 (
	entityID2 (
	maxDegree (",
FindPathByEntityIDResponse
result (	"f
FindPathByEntityID_V2Request
	entityID1 (
	entityID2 (
	maxDegree (
flags ("/
FindPathByEntityID_V2Response
result (	"�
FindPathByRecordIDRequest
dataSourceCode1 (	
	recordID1 (	
dataSourceCode2 (	
	recordID2 (	
	maxDegree (",
FindPathByRecordIDResponse
result (	"�
FindPathByRecordID_V2Request
dataSourceCode1 (	
	recordID1 (	
dataSourceCode2 (	
	recordID2 (	
	maxDegree (
flags ("/
FindPathByRecordID_V2Response
result (	"w
"FindPathExcludingByEntityIDRequest
	entityID1 (
	entityID2 (
	maxDegree (
excludedEntities (	"5
#FindPathExcludingByEntityIDResponse
result (	"�
%FindPathExcludingByEntityID_V2Request
	entityID1 (
	entityID2 (
	maxDegree (
excludedEntities (	
flags ("8
&FindPathExcludingByEntityID_V2Response
result (	"�
"FindPathExcludingByRecordIDRequest
dataSourceCode1 (	
	recordID1 (	
dataSourceCode2 (	
	recordID2 (	
	maxDegree (
excludedRecords (	"5
#FindPathExcludingByRecordIDResponse
result (	"�
%FindPathExcludingByRecordID_V2Request
dataSourceCode1 (	
	recordID1 (	
dataSourceCode2 (	
	recordID2 (	
	maxDegree (
excludedRecords (	
flags ("8
&FindPathExcludingByRecordID_V2Response
result (	"�
(FindPathIncludingSourceByEntityIDRequest
	entityID1 (
	entityID2 (
	maxDegree (
excludedEntities (	
requiredDsrcs (	";
)FindPathIncludingSourceByEntityIDResponse
result (	"�
+FindPathIncludingSourceByEntityID_V2Request
	entityID1 (
	entityID2 (
	maxDegree (
excludedEntities (	
requiredDsrcs (	
flags (">
,FindPathIncludingSourceByEntityID_V2Response
result (	"�
(FindPathIncludingSourceByRecordIDRequest
dataSourceCode1 (	
	recordID1 (	
dataSourceCode2 (	
	recordID2 (	
	maxDegree (
excludedRecords (	
requiredDsrcs (	";
)FindPathIncludingSourceByRecordIDResponse
result (	"�
+FindPathIncludingSourceByRecordID_V2Request
dataSourceCode1 (	
	recordID1 (	
dataSourceCode2 (	
	recordID2 (	
	maxDegree (
excludedRecords (	
requiredDsrcs (	
flags (">
,FindPathIncludingSourceByRecordID_V2Response
result (	"
GetActiveConfigIDRequest"+
GetActiveConfigIDResponse
result (".
GetEntityByEntityIDRequest
entityID ("-
GetEntityByEntityIDResponse
result (	"@
GetEntityByEntityID_V2Request
entityID (
flags ("0
GetEntityByEntityID_V2Response
result (	"F
GetEntityByRecordIDRequest
dataSourceCode (	
recordID (	"-
GetEntityByRecordIDResponse
result (	"X
GetEntityByRecordID_V2Request
dataSourceCode (	
recordID (	
flags ("0
GetEntityByRecordID_V2Response
result (	"<
GetRecordRequest
dataSourceCode (	
recordID (	"#
GetRecordResponse
result (	"N
GetRecord_V2Request
dataSourceCode (	
recordID (	
flags ("&
GetRecord_V2Response
result (	"
GetRedoRecordRequest"\'
GetRedoRecordResponse
result (	"&
$GetRepositoryLastModifiedTimeRequest"7
%GetRepositoryLastModifiedTimeResponse
result ("7
!GetVirtualEntityByRecordIDRequest

recordList (	"4
"GetVirtualEntityByRecordIDResponse
result (	"I
$GetVirtualEntityByRecordID_V2Request

recordList (	
flags ("7
%GetVirtualEntityByRecordID_V2Response
result (	".
HowEntityByEntityIDRequest
entityID ("-
HowEntityByEntityIDResponse
result (	"@
HowEntityByEntityID_V2Request
entityID (
flags ("0
HowEntityByEntityID_V2Response
result (	"L
InitRequest

moduleName (	
	iniParams (	
verboseLogging ("
InitResponse"n
InitWithConfigIDRequest

moduleName (	
	iniParams (	
initConfigID (
verboseLogging ("
InitWithConfigIDResponse"
PrimeEngineRequest"
PrimeEngineResponse" 
ProcessRequest
record (	"
ProcessResponse"7
ProcessWithInfoRequest
record (	
flags (")
ProcessWithInfoResponse
result (	"
PurgeRepositoryRequest"
PurgeRepositoryResponse":
ReevaluateEntityRequest
entityID (
flags ("
ReevaluateEntityResponse"B
ReevaluateEntityWithInfoRequest
entityID (
flags ("2
 ReevaluateEntityWithInfoResponse
result (	"R
ReevaluateRecordRequest
dataSourceCode (	
recordID (	
flags ("
ReevaluateRecordResponse"Z
ReevaluateRecordWithInfoRequest
dataSourceCode (	
recordID (	
flags ("2
 ReevaluateRecordWithInfoResponse
result (	"%
ReinitRequest
initConfigID ("
ReinitResponse"b
ReplaceRecordRequest
dataSourceCode (	
recordID (	
jsonData (	
loadID (	"
ReplaceRecordResponse"y
ReplaceRecordWithInfoRequest
dataSourceCode (	
recordID (	
jsonData (	
loadID (	
flags ("/
ReplaceRecordWithInfoResponse
result (	"-
SearchByAttributesRequest
jsonData (	",
SearchByAttributesResponse
result (	"?
SearchByAttributes_V2Request
jsonData (	
flags ("/
SearchByAttributes_V2Response
result (	"
StatsRequest"
StatsResponse
result (	"J
"StreamExportCSVEntityReportRequest
csvColumnList (	
flags ("5
#StreamExportCSVEntityReportResponse
result (	"4
#StreamExportJSONEntityReportRequest
flags ("6
$StreamExportJSONEntityReportResponse
result (	":
WhyEntitiesRequest
	entityID1 (
	entityID2 ("%
WhyEntitiesResponse
result (	"L
WhyEntities_V2Request
	entityID1 (
	entityID2 (
flags ("(
WhyEntities_V2Response
result (	".
WhyEntityByEntityIDRequest
entityID ("-
WhyEntityByEntityIDResponse
result (	"@
WhyEntityByEntityID_V2Request
entityID (
flags ("0
WhyEntityByEntityID_V2Response
result (	"F
WhyEntityByRecordIDRequest
dataSourceCode (	
recordID (	"-
WhyEntityByRecordIDResponse
result (	"X
WhyEntityByRecordID_V2Request
dataSourceCode (	
recordID (	
flags ("0
WhyEntityByRecordID_V2Response
result (	"k
WhyRecordsRequest
dataSourceCode1 (	
	recordID1 (	
dataSourceCode2 (	
	recordID2 (	"$
WhyRecordsResponse
result (	"}
WhyRecords_V2Request
dataSourceCode1 (	
	recordID1 (	
dataSourceCode2 (	
	recordID2 (	
flags ("\'
WhyRecords_V2Response
result (	2�7
G2EngineF
	AddRecord.g2engine.AddRecordRequest.g2engine.AddRecordResponse" ^
AddRecordWithInfo".g2engine.AddRecordWithInfoRequest#.g2engine.AddRecordWithInfoResponse" L
CloseExport.g2engine.CloseExportRequest.g2engine.CloseExportResponse" [
CountRedoRecords!.g2engine.CountRedoRecordsRequest".g2engine.CountRedoRecordsResponse" O
DeleteRecord.g2engine.DeleteRecordRequest.g2engine.DeleteRecordResponse" g
DeleteRecordWithInfo%.g2engine.DeleteRecordWithInfoRequest&.g2engine.DeleteRecordWithInfoResponse" @
Destroy.g2engine.DestroyRequest.g2engine.DestroyResponse" O
ExportConfig.g2engine.ExportConfigRequest.g2engine.ExportConfigResponse" p
ExportConfigAndConfigID(.g2engine.ExportConfigAndConfigIDRequest).g2engine.ExportConfigAndConfigIDResponse" j
ExportCSVEntityReport&.g2engine.ExportCSVEntityReportRequest\'.g2engine.ExportCSVEntityReportResponse" m
ExportJSONEntityReport\'.g2engine.ExportJSONEntityReportRequest(.g2engine.ExportJSONEntityReportResponse" F
	FetchNext.g2engine.FetchNextRequest.g2engine.FetchNextResponse" �
!FindInterestingEntitiesByEntityID2.g2engine.FindInterestingEntitiesByEntityIDRequest3.g2engine.FindInterestingEntitiesByEntityIDResponse" �
!FindInterestingEntitiesByRecordID2.g2engine.FindInterestingEntitiesByRecordIDRequest3.g2engine.FindInterestingEntitiesByRecordIDResponse" j
FindNetworkByEntityID&.g2engine.FindNetworkByEntityIDRequest\'.g2engine.FindNetworkByEntityIDResponse" s
FindNetworkByEntityID_V2).g2engine.FindNetworkByEntityID_V2Request*.g2engine.FindNetworkByEntityID_V2Response" j
FindNetworkByRecordID&.g2engine.FindNetworkByRecordIDRequest\'.g2engine.FindNetworkByRecordIDResponse" s
FindNetworkByRecordID_V2).g2engine.FindNetworkByRecordID_V2Request*.g2engine.FindNetworkByRecordID_V2Response" a
FindPathByEntityID#.g2engine.FindPathByEntityIDRequest$.g2engine.FindPathByEntityIDResponse" j
FindPathByEntityID_V2&.g2engine.FindPathByEntityID_V2Request\'.g2engine.FindPathByEntityID_V2Response" a
FindPathByRecordID#.g2engine.FindPathByRecordIDRequest$.g2engine.FindPathByRecordIDResponse" j
FindPathByRecordID_V2&.g2engine.FindPathByRecordID_V2Request\'.g2engine.FindPathByRecordID_V2Response" |
FindPathExcludingByEntityID,.g2engine.FindPathExcludingByEntityIDRequest-.g2engine.FindPathExcludingByEntityIDResponse" �
FindPathExcludingByEntityID_V2/.g2engine.FindPathExcludingByEntityID_V2Request0.g2engine.FindPathExcludingByEntityID_V2Response" |
FindPathExcludingByRecordID,.g2engine.FindPathExcludingByRecordIDRequest-.g2engine.FindPathExcludingByRecordIDResponse" �
FindPathExcludingByRecordID_V2/.g2engine.FindPathExcludingByRecordID_V2Request0.g2engine.FindPathExcludingByRecordID_V2Response" �
!FindPathIncludingSourceByEntityID2.g2engine.FindPathIncludingSourceByEntityIDRequest3.g2engine.FindPathIncludingSourceByEntityIDResponse" �
$FindPathIncludingSourceByEntityID_V25.g2engine.FindPathIncludingSourceByEntityID_V2Request6.g2engine.FindPathIncludingSourceByEntityID_V2Response" �
!FindPathIncludingSourceByRecordID2.g2engine.FindPathIncludingSourceByRecordIDRequest3.g2engine.FindPathIncludingSourceByRecordIDResponse" �
$FindPathIncludingSourceByRecordID_V25.g2engine.FindPathIncludingSourceByRecordID_V2Request6.g2engine.FindPathIncludingSourceByRecordID_V2Response" ^
GetActiveConfigID".g2engine.GetActiveConfigIDRequest#.g2engine.GetActiveConfigIDResponse" d
GetEntityByEntityID$.g2engine.GetEntityByEntityIDRequest%.g2engine.GetEntityByEntityIDResponse" m
GetEntityByEntityID_V2\'.g2engine.GetEntityByEntityID_V2Request(.g2engine.GetEntityByEntityID_V2Response" d
GetEntityByRecordID$.g2engine.GetEntityByRecordIDRequest%.g2engine.GetEntityByRecordIDResponse" m
GetEntityByRecordID_V2\'.g2engine.GetEntityByRecordID_V2Request(.g2engine.GetEntityByRecordID_V2Response" F
	GetRecord.g2engine.GetRecordRequest.g2engine.GetRecordResponse" O
GetRecord_V2.g2engine.GetRecord_V2Request.g2engine.GetRecord_V2Response" R
GetRedoRecord.g2engine.GetRedoRecordRequest.g2engine.GetRedoRecordResponse" �
GetRepositoryLastModifiedTime..g2engine.GetRepositoryLastModifiedTimeRequest/.g2engine.GetRepositoryLastModifiedTimeResponse" y
GetVirtualEntityByRecordID+.g2engine.GetVirtualEntityByRecordIDRequest,.g2engine.GetVirtualEntityByRecordIDResponse" �
GetVirtualEntityByRecordID_V2..g2engine.GetVirtualEntityByRecordID_V2Request/.g2engine.GetVirtualEntityByRecordID_V2Response" d
HowEntityByEntityID$.g2engine.HowEntityByEntityIDRequest%.g2engine.HowEntityByEntityIDResponse" m
HowEntityByEntityID_V2\'.g2engine.HowEntityByEntityID_V2Request(.g2engine.HowEntityByEntityID_V2Response" 7
Init.g2engine.InitRequest.g2engine.InitResponse" [
InitWithConfigID!.g2engine.InitWithConfigIDRequest".g2engine.InitWithConfigIDResponse" L
PrimeEngine.g2engine.PrimeEngineRequest.g2engine.PrimeEngineResponse" @
Process.g2engine.ProcessRequest.g2engine.ProcessResponse" X
ProcessWithInfo .g2engine.ProcessWithInfoRequest!.g2engine.ProcessWithInfoResponse" X
PurgeRepository .g2engine.PurgeRepositoryRequest!.g2engine.PurgeRepositoryResponse" [
ReevaluateEntity!.g2engine.ReevaluateEntityRequest".g2engine.ReevaluateEntityResponse" s
ReevaluateEntityWithInfo).g2engine.ReevaluateEntityWithInfoRequest*.g2engine.ReevaluateEntityWithInfoResponse" [
ReevaluateRecord!.g2engine.ReevaluateRecordRequest".g2engine.ReevaluateRecordResponse" s
ReevaluateRecordWithInfo).g2engine.ReevaluateRecordWithInfoRequest*.g2engine.ReevaluateRecordWithInfoResponse" =
Reinit.g2engine.ReinitRequest.g2engine.ReinitResponse" R
ReplaceRecord.g2engine.ReplaceRecordRequest.g2engine.ReplaceRecordResponse" j
ReplaceRecordWithInfo&.g2engine.ReplaceRecordWithInfoRequest\'.g2engine.ReplaceRecordWithInfoResponse" a
SearchByAttributes#.g2engine.SearchByAttributesRequest$.g2engine.SearchByAttributesResponse" j
SearchByAttributes_V2&.g2engine.SearchByAttributes_V2Request\'.g2engine.SearchByAttributes_V2Response" :
Stats.g2engine.StatsRequest.g2engine.StatsResponse" ~
StreamExportCSVEntityReport,.g2engine.StreamExportCSVEntityReportRequest-.g2engine.StreamExportCSVEntityReportResponse" 0�
StreamExportJSONEntityReport-.g2engine.StreamExportJSONEntityReportRequest..g2engine.StreamExportJSONEntityReportResponse" 0L
WhyEntities.g2engine.WhyEntitiesRequest.g2engine.WhyEntitiesResponse" U
WhyEntities_V2.g2engine.WhyEntities_V2Request .g2engine.WhyEntities_V2Response" d
WhyEntityByEntityID$.g2engine.WhyEntityByEntityIDRequest%.g2engine.WhyEntityByEntityIDResponse" m
WhyEntityByEntityID_V2\'.g2engine.WhyEntityByEntityID_V2Request(.g2engine.WhyEntityByEntityID_V2Response" d
WhyEntityByRecordID$.g2engine.WhyEntityByRecordIDRequest%.g2engine.WhyEntityByRecordIDResponse" m
WhyEntityByRecordID_V2\'.g2engine.WhyEntityByRecordID_V2Request(.g2engine.WhyEntityByRecordID_V2Response" I

WhyRecords.g2engine.WhyRecordsRequest.g2engine.WhyRecordsResponse" R
WhyRecords_V2.g2engine.WhyRecords_V2Request.g2engine.WhyRecords_V2Response" Bb
#com.senzing.g2.engine.grpc.G2EngineBG2EngineProtoPZ*github.com/senzing/g2-sdk-go-grpc/g2enginebproto3'
        , true);

        static::$is_initialized = true;
    }
}

