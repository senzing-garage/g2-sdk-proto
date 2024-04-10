# Generated by the gRPC Python protocol compiler plugin. DO NOT EDIT!
"""Client and server classes corresponding to protobuf-defined services."""
import grpc

import szconfig_pb2 as szconfig__pb2


class SzConfigStub(object):
    """Missing associated documentation comment in .proto file."""

    def __init__(self, channel):
        """Constructor.

        Args:
            channel: A grpc.Channel.
        """
        self.AddDataSource = channel.unary_unary(
                '/szconfig.SzConfig/AddDataSource',
                request_serializer=szconfig__pb2.AddDataSourceRequest.SerializeToString,
                response_deserializer=szconfig__pb2.AddDataSourceResponse.FromString,
                )
        self.CloseConfig = channel.unary_unary(
                '/szconfig.SzConfig/CloseConfig',
                request_serializer=szconfig__pb2.CloseConfigRequest.SerializeToString,
                response_deserializer=szconfig__pb2.CloseConfigResponse.FromString,
                )
        self.CreateConfig = channel.unary_unary(
                '/szconfig.SzConfig/CreateConfig',
                request_serializer=szconfig__pb2.CreateConfigRequest.SerializeToString,
                response_deserializer=szconfig__pb2.CreateConfigResponse.FromString,
                )
        self.DeleteDataSource = channel.unary_unary(
                '/szconfig.SzConfig/DeleteDataSource',
                request_serializer=szconfig__pb2.DeleteDataSourceRequest.SerializeToString,
                response_deserializer=szconfig__pb2.DeleteDataSourceResponse.FromString,
                )
        self.GetDataSources = channel.unary_unary(
                '/szconfig.SzConfig/GetDataSources',
                request_serializer=szconfig__pb2.GetDataSourcesRequest.SerializeToString,
                response_deserializer=szconfig__pb2.GetDataSourcesResponse.FromString,
                )
        self.ImportConfig = channel.unary_unary(
                '/szconfig.SzConfig/ImportConfig',
                request_serializer=szconfig__pb2.ImportConfigRequest.SerializeToString,
                response_deserializer=szconfig__pb2.ImportConfigResponse.FromString,
                )
        self.ExportConfig = channel.unary_unary(
                '/szconfig.SzConfig/ExportConfig',
                request_serializer=szconfig__pb2.ExportConfigRequest.SerializeToString,
                response_deserializer=szconfig__pb2.ExportConfigResponse.FromString,
                )


class SzConfigServicer(object):
    """Missing associated documentation comment in .proto file."""

    def AddDataSource(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')

    def CloseConfig(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')

    def CreateConfig(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')

    def DeleteDataSource(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')

    def GetDataSources(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')

    def ImportConfig(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')

    def ExportConfig(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')


def add_SzConfigServicer_to_server(servicer, server):
    rpc_method_handlers = {
            'AddDataSource': grpc.unary_unary_rpc_method_handler(
                    servicer.AddDataSource,
                    request_deserializer=szconfig__pb2.AddDataSourceRequest.FromString,
                    response_serializer=szconfig__pb2.AddDataSourceResponse.SerializeToString,
            ),
            'CloseConfig': grpc.unary_unary_rpc_method_handler(
                    servicer.CloseConfig,
                    request_deserializer=szconfig__pb2.CloseConfigRequest.FromString,
                    response_serializer=szconfig__pb2.CloseConfigResponse.SerializeToString,
            ),
            'CreateConfig': grpc.unary_unary_rpc_method_handler(
                    servicer.CreateConfig,
                    request_deserializer=szconfig__pb2.CreateConfigRequest.FromString,
                    response_serializer=szconfig__pb2.CreateConfigResponse.SerializeToString,
            ),
            'DeleteDataSource': grpc.unary_unary_rpc_method_handler(
                    servicer.DeleteDataSource,
                    request_deserializer=szconfig__pb2.DeleteDataSourceRequest.FromString,
                    response_serializer=szconfig__pb2.DeleteDataSourceResponse.SerializeToString,
            ),
            'GetDataSources': grpc.unary_unary_rpc_method_handler(
                    servicer.GetDataSources,
                    request_deserializer=szconfig__pb2.GetDataSourcesRequest.FromString,
                    response_serializer=szconfig__pb2.GetDataSourcesResponse.SerializeToString,
            ),
            'ImportConfig': grpc.unary_unary_rpc_method_handler(
                    servicer.ImportConfig,
                    request_deserializer=szconfig__pb2.ImportConfigRequest.FromString,
                    response_serializer=szconfig__pb2.ImportConfigResponse.SerializeToString,
            ),
            'ExportConfig': grpc.unary_unary_rpc_method_handler(
                    servicer.ExportConfig,
                    request_deserializer=szconfig__pb2.ExportConfigRequest.FromString,
                    response_serializer=szconfig__pb2.ExportConfigResponse.SerializeToString,
            ),
    }
    generic_handler = grpc.method_handlers_generic_handler(
            'szconfig.SzConfig', rpc_method_handlers)
    server.add_generic_rpc_handlers((generic_handler,))


 # This class is part of an EXPERIMENTAL API.
class SzConfig(object):
    """Missing associated documentation comment in .proto file."""

    @staticmethod
    def AddDataSource(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/szconfig.SzConfig/AddDataSource',
            szconfig__pb2.AddDataSourceRequest.SerializeToString,
            szconfig__pb2.AddDataSourceResponse.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)

    @staticmethod
    def CloseConfig(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/szconfig.SzConfig/CloseConfig',
            szconfig__pb2.CloseConfigRequest.SerializeToString,
            szconfig__pb2.CloseConfigResponse.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)

    @staticmethod
    def CreateConfig(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/szconfig.SzConfig/CreateConfig',
            szconfig__pb2.CreateConfigRequest.SerializeToString,
            szconfig__pb2.CreateConfigResponse.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)

    @staticmethod
    def DeleteDataSource(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/szconfig.SzConfig/DeleteDataSource',
            szconfig__pb2.DeleteDataSourceRequest.SerializeToString,
            szconfig__pb2.DeleteDataSourceResponse.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)

    @staticmethod
    def GetDataSources(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/szconfig.SzConfig/GetDataSources',
            szconfig__pb2.GetDataSourcesRequest.SerializeToString,
            szconfig__pb2.GetDataSourcesResponse.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)

    @staticmethod
    def ImportConfig(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/szconfig.SzConfig/ImportConfig',
            szconfig__pb2.ImportConfigRequest.SerializeToString,
            szconfig__pb2.ImportConfigResponse.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)

    @staticmethod
    def ExportConfig(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/szconfig.SzConfig/ExportConfig',
            szconfig__pb2.ExportConfigRequest.SerializeToString,
            szconfig__pb2.ExportConfigResponse.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)