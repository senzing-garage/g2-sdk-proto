<?php
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: g2diagnostic.proto

namespace GPBMetadata;

class G2Diagnostic
{
    public static $is_initialized = false;

    public static function initOnce() {
        $pool = \Google\Protobuf\Internal\DescriptorPool::getGeneratedPool();

        if (static::$is_initialized == true) {
          return;
        }
        $pool->internalAddGeneratedFile(
            '
�
g2diagnostic.protog2diagnostic"*
CheckDBPerfRequest
secondsToRun ("%
CheckDBPerfResponse
result (	"
DestroyRequest"
DestroyResponse"
GetAvailableMemoryRequest",
GetAvailableMemoryResponse
result ("
GetDBInfoRequest"#
GetDBInfoResponse
result (	"
GetLogicalCoresRequest")
GetLogicalCoresResponse
result ("
GetPhysicalCoresRequest"*
GetPhysicalCoresResponse
result ("
GetTotalSystemMemoryRequest".
GetTotalSystemMemoryResponse
result ("L
InitRequest

moduleName (	
	iniParams (	
verboseLogging ("
InitResponse"n
InitWithConfigIDRequest

moduleName (	
	iniParams (	
initConfigID (
verboseLogging ("
InitWithConfigIDResponse"%
ReinitRequest
initConfigID ("
ReinitResponse"3
StreamEntityListBySizeRequest

entitySize ("0
StreamEntityListBySizeResponse
result (	2�
G2DiagnosticT
CheckDBPerf .g2diagnostic.CheckDBPerfRequest!.g2diagnostic.CheckDBPerfResponse" H
Destroy.g2diagnostic.DestroyRequest.g2diagnostic.DestroyResponse" i
GetAvailableMemory\'.g2diagnostic.GetAvailableMemoryRequest(.g2diagnostic.GetAvailableMemoryResponse" N
	GetDBInfo.g2diagnostic.GetDBInfoRequest.g2diagnostic.GetDBInfoResponse" `
GetLogicalCores$.g2diagnostic.GetLogicalCoresRequest%.g2diagnostic.GetLogicalCoresResponse" c
GetPhysicalCores%.g2diagnostic.GetPhysicalCoresRequest&.g2diagnostic.GetPhysicalCoresResponse" o
GetTotalSystemMemory).g2diagnostic.GetTotalSystemMemoryRequest*.g2diagnostic.GetTotalSystemMemoryResponse" ?
Init.g2diagnostic.InitRequest.g2diagnostic.InitResponse" c
InitWithConfigID%.g2diagnostic.InitWithConfigIDRequest&.g2diagnostic.InitWithConfigIDResponse" E
Reinit.g2diagnostic.ReinitRequest.g2diagnostic.ReinitResponse" w
StreamEntityListBySize+.g2diagnostic.StreamEntityListBySizeRequest,.g2diagnostic.StreamEntityListBySizeResponse" 0Bu
\'com.senzing.g2.engine.grpc.G2DiagnosticBG2DiagnosticProtoPZ5github.com/senzing-garage/g2-sdk-go-grpc/g2diagnosticbproto3'
        , true);

        static::$is_initialized = true;
    }
}

