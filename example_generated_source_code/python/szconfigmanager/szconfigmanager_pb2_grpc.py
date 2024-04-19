# Generated by the gRPC Python protocol compiler plugin. DO NOT EDIT!
"""Client and server classes corresponding to protobuf-defined services."""
import grpc

import szconfigmanager_pb2 as szconfigmanager__pb2


class SzConfigManagerStub(object):
    """Missing associated documentation comment in .proto file."""

    def __init__(self, channel):
        """Constructor.

        Args:
            channel: A grpc.Channel.
        """
        self.AddConfig = channel.unary_unary(
                '/szconfigmanager.SzConfigManager/AddConfig',
                request_serializer=szconfigmanager__pb2.AddConfigRequest.SerializeToString,
                response_deserializer=szconfigmanager__pb2.AddConfigResponse.FromString,
                )
        self.GetConfig = channel.unary_unary(
                '/szconfigmanager.SzConfigManager/GetConfig',
                request_serializer=szconfigmanager__pb2.GetConfigRequest.SerializeToString,
                response_deserializer=szconfigmanager__pb2.GetConfigResponse.FromString,
                )
        self.GetConfigList = channel.unary_unary(
                '/szconfigmanager.SzConfigManager/GetConfigList',
                request_serializer=szconfigmanager__pb2.GetConfigListRequest.SerializeToString,
                response_deserializer=szconfigmanager__pb2.GetConfigListResponse.FromString,
                )
        self.GetDefaultConfigId = channel.unary_unary(
                '/szconfigmanager.SzConfigManager/GetDefaultConfigId',
                request_serializer=szconfigmanager__pb2.GetDefaultConfigIdRequest.SerializeToString,
                response_deserializer=szconfigmanager__pb2.GetDefaultConfigIdResponse.FromString,
                )
        self.ReplaceDefaultConfigId = channel.unary_unary(
                '/szconfigmanager.SzConfigManager/ReplaceDefaultConfigId',
                request_serializer=szconfigmanager__pb2.ReplaceDefaultConfigIdRequest.SerializeToString,
                response_deserializer=szconfigmanager__pb2.ReplaceDefaultConfigIdResponse.FromString,
                )
        self.SetDefaultConfigId = channel.unary_unary(
                '/szconfigmanager.SzConfigManager/SetDefaultConfigId',
                request_serializer=szconfigmanager__pb2.SetDefaultConfigIdRequest.SerializeToString,
                response_deserializer=szconfigmanager__pb2.SetDefaultConfigIdResponse.FromString,
                )


class SzConfigManagerServicer(object):
    """Missing associated documentation comment in .proto file."""

    def AddConfig(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')

    def GetConfig(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')

    def GetConfigList(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')

    def GetDefaultConfigId(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')

    def ReplaceDefaultConfigId(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')

    def SetDefaultConfigId(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')


def add_SzConfigManagerServicer_to_server(servicer, server):
    rpc_method_handlers = {
            'AddConfig': grpc.unary_unary_rpc_method_handler(
                    servicer.AddConfig,
                    request_deserializer=szconfigmanager__pb2.AddConfigRequest.FromString,
                    response_serializer=szconfigmanager__pb2.AddConfigResponse.SerializeToString,
            ),
            'GetConfig': grpc.unary_unary_rpc_method_handler(
                    servicer.GetConfig,
                    request_deserializer=szconfigmanager__pb2.GetConfigRequest.FromString,
                    response_serializer=szconfigmanager__pb2.GetConfigResponse.SerializeToString,
            ),
            'GetConfigList': grpc.unary_unary_rpc_method_handler(
                    servicer.GetConfigList,
                    request_deserializer=szconfigmanager__pb2.GetConfigListRequest.FromString,
                    response_serializer=szconfigmanager__pb2.GetConfigListResponse.SerializeToString,
            ),
            'GetDefaultConfigId': grpc.unary_unary_rpc_method_handler(
                    servicer.GetDefaultConfigId,
                    request_deserializer=szconfigmanager__pb2.GetDefaultConfigIdRequest.FromString,
                    response_serializer=szconfigmanager__pb2.GetDefaultConfigIdResponse.SerializeToString,
            ),
            'ReplaceDefaultConfigId': grpc.unary_unary_rpc_method_handler(
                    servicer.ReplaceDefaultConfigId,
                    request_deserializer=szconfigmanager__pb2.ReplaceDefaultConfigIdRequest.FromString,
                    response_serializer=szconfigmanager__pb2.ReplaceDefaultConfigIdResponse.SerializeToString,
            ),
            'SetDefaultConfigId': grpc.unary_unary_rpc_method_handler(
                    servicer.SetDefaultConfigId,
                    request_deserializer=szconfigmanager__pb2.SetDefaultConfigIdRequest.FromString,
                    response_serializer=szconfigmanager__pb2.SetDefaultConfigIdResponse.SerializeToString,
            ),
    }
    generic_handler = grpc.method_handlers_generic_handler(
            'szconfigmanager.SzConfigManager', rpc_method_handlers)
    server.add_generic_rpc_handlers((generic_handler,))


 # This class is part of an EXPERIMENTAL API.
class SzConfigManager(object):
    """Missing associated documentation comment in .proto file."""

    @staticmethod
    def AddConfig(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/szconfigmanager.SzConfigManager/AddConfig',
            szconfigmanager__pb2.AddConfigRequest.SerializeToString,
            szconfigmanager__pb2.AddConfigResponse.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)

    @staticmethod
    def GetConfig(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/szconfigmanager.SzConfigManager/GetConfig',
            szconfigmanager__pb2.GetConfigRequest.SerializeToString,
            szconfigmanager__pb2.GetConfigResponse.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)

    @staticmethod
    def GetConfigList(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/szconfigmanager.SzConfigManager/GetConfigList',
            szconfigmanager__pb2.GetConfigListRequest.SerializeToString,
            szconfigmanager__pb2.GetConfigListResponse.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)

    @staticmethod
    def GetDefaultConfigId(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/szconfigmanager.SzConfigManager/GetDefaultConfigId',
            szconfigmanager__pb2.GetDefaultConfigIdRequest.SerializeToString,
            szconfigmanager__pb2.GetDefaultConfigIdResponse.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)

    @staticmethod
    def ReplaceDefaultConfigId(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/szconfigmanager.SzConfigManager/ReplaceDefaultConfigId',
            szconfigmanager__pb2.ReplaceDefaultConfigIdRequest.SerializeToString,
            szconfigmanager__pb2.ReplaceDefaultConfigIdResponse.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)

    @staticmethod
    def SetDefaultConfigId(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/szconfigmanager.SzConfigManager/SetDefaultConfigId',
            szconfigmanager__pb2.SetDefaultConfigIdRequest.SerializeToString,
            szconfigmanager__pb2.SetDefaultConfigIdResponse.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)
