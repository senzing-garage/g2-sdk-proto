# Generated by the gRPC Python protocol compiler plugin. DO NOT EDIT!
"""Client and server classes corresponding to protobuf-defined services."""
import grpc

import g2ssadm_pb2 as g2ssadm__pb2


class G2SsadmStub(object):
    """Missing associated documentation comment in .proto file."""

    def __init__(self, channel):
        """Constructor.

        Args:
            channel: A grpc.Channel.
        """
        self.CreateSaltInStore = channel.unary_unary(
                '/g2ssadm.G2Ssadm/CreateSaltInStore',
                request_serializer=g2ssadm__pb2.CreateSaltInStoreRequest.SerializeToString,
                response_deserializer=g2ssadm__pb2.CreateSaltInStoreResponse.FromString,
                )
        self.Destroy = channel.unary_unary(
                '/g2ssadm.G2Ssadm/Destroy',
                request_serializer=g2ssadm__pb2.DestroyRequest.SerializeToString,
                response_deserializer=g2ssadm__pb2.DestroyResponse.FromString,
                )
        self.Init = channel.unary_unary(
                '/g2ssadm.G2Ssadm/Init',
                request_serializer=g2ssadm__pb2.InitRequest.SerializeToString,
                response_deserializer=g2ssadm__pb2.InitResponse.FromString,
                )
        self.InitializeNewToken = channel.unary_unary(
                '/g2ssadm.G2Ssadm/InitializeNewToken',
                request_serializer=g2ssadm__pb2.InitializeNewTokenRequest.SerializeToString,
                response_deserializer=g2ssadm__pb2.InitializeNewTokenResponse.FromString,
                )
        self.List = channel.unary_unary(
                '/g2ssadm.G2Ssadm/List',
                request_serializer=g2ssadm__pb2.ListRequest.SerializeToString,
                response_deserializer=g2ssadm__pb2.ListResponse.FromString,
                )
        self.Put = channel.unary_unary(
                '/g2ssadm.G2Ssadm/Put',
                request_serializer=g2ssadm__pb2.PutRequest.SerializeToString,
                response_deserializer=g2ssadm__pb2.PutResponse.FromString,
                )
        self.ReinitializeToken = channel.unary_unary(
                '/g2ssadm.G2Ssadm/ReinitializeToken',
                request_serializer=g2ssadm__pb2.ReinitializeTokenRequest.SerializeToString,
                response_deserializer=g2ssadm__pb2.ReinitializeTokenResponse.FromString,
                )
        self.SetupStore = channel.unary_unary(
                '/g2ssadm.G2Ssadm/SetupStore',
                request_serializer=g2ssadm__pb2.SetupStoreRequest.SerializeToString,
                response_deserializer=g2ssadm__pb2.SetupStoreResponse.FromString,
                )


class G2SsadmServicer(object):
    """Missing associated documentation comment in .proto file."""

    def CreateSaltInStore(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')

    def Destroy(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')

    def Init(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')

    def InitializeNewToken(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')

    def List(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')

    def Put(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')

    def ReinitializeToken(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')

    def SetupStore(self, request, context):
        """Missing associated documentation comment in .proto file."""
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')


def add_G2SsadmServicer_to_server(servicer, server):
    rpc_method_handlers = {
            'CreateSaltInStore': grpc.unary_unary_rpc_method_handler(
                    servicer.CreateSaltInStore,
                    request_deserializer=g2ssadm__pb2.CreateSaltInStoreRequest.FromString,
                    response_serializer=g2ssadm__pb2.CreateSaltInStoreResponse.SerializeToString,
            ),
            'Destroy': grpc.unary_unary_rpc_method_handler(
                    servicer.Destroy,
                    request_deserializer=g2ssadm__pb2.DestroyRequest.FromString,
                    response_serializer=g2ssadm__pb2.DestroyResponse.SerializeToString,
            ),
            'Init': grpc.unary_unary_rpc_method_handler(
                    servicer.Init,
                    request_deserializer=g2ssadm__pb2.InitRequest.FromString,
                    response_serializer=g2ssadm__pb2.InitResponse.SerializeToString,
            ),
            'InitializeNewToken': grpc.unary_unary_rpc_method_handler(
                    servicer.InitializeNewToken,
                    request_deserializer=g2ssadm__pb2.InitializeNewTokenRequest.FromString,
                    response_serializer=g2ssadm__pb2.InitializeNewTokenResponse.SerializeToString,
            ),
            'List': grpc.unary_unary_rpc_method_handler(
                    servicer.List,
                    request_deserializer=g2ssadm__pb2.ListRequest.FromString,
                    response_serializer=g2ssadm__pb2.ListResponse.SerializeToString,
            ),
            'Put': grpc.unary_unary_rpc_method_handler(
                    servicer.Put,
                    request_deserializer=g2ssadm__pb2.PutRequest.FromString,
                    response_serializer=g2ssadm__pb2.PutResponse.SerializeToString,
            ),
            'ReinitializeToken': grpc.unary_unary_rpc_method_handler(
                    servicer.ReinitializeToken,
                    request_deserializer=g2ssadm__pb2.ReinitializeTokenRequest.FromString,
                    response_serializer=g2ssadm__pb2.ReinitializeTokenResponse.SerializeToString,
            ),
            'SetupStore': grpc.unary_unary_rpc_method_handler(
                    servicer.SetupStore,
                    request_deserializer=g2ssadm__pb2.SetupStoreRequest.FromString,
                    response_serializer=g2ssadm__pb2.SetupStoreResponse.SerializeToString,
            ),
    }
    generic_handler = grpc.method_handlers_generic_handler(
            'g2ssadm.G2Ssadm', rpc_method_handlers)
    server.add_generic_rpc_handlers((generic_handler,))


 # This class is part of an EXPERIMENTAL API.
class G2Ssadm(object):
    """Missing associated documentation comment in .proto file."""

    @staticmethod
    def CreateSaltInStore(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/g2ssadm.G2Ssadm/CreateSaltInStore',
            g2ssadm__pb2.CreateSaltInStoreRequest.SerializeToString,
            g2ssadm__pb2.CreateSaltInStoreResponse.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)

    @staticmethod
    def Destroy(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/g2ssadm.G2Ssadm/Destroy',
            g2ssadm__pb2.DestroyRequest.SerializeToString,
            g2ssadm__pb2.DestroyResponse.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)

    @staticmethod
    def Init(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/g2ssadm.G2Ssadm/Init',
            g2ssadm__pb2.InitRequest.SerializeToString,
            g2ssadm__pb2.InitResponse.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)

    @staticmethod
    def InitializeNewToken(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/g2ssadm.G2Ssadm/InitializeNewToken',
            g2ssadm__pb2.InitializeNewTokenRequest.SerializeToString,
            g2ssadm__pb2.InitializeNewTokenResponse.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)

    @staticmethod
    def List(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/g2ssadm.G2Ssadm/List',
            g2ssadm__pb2.ListRequest.SerializeToString,
            g2ssadm__pb2.ListResponse.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)

    @staticmethod
    def Put(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/g2ssadm.G2Ssadm/Put',
            g2ssadm__pb2.PutRequest.SerializeToString,
            g2ssadm__pb2.PutResponse.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)

    @staticmethod
    def ReinitializeToken(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/g2ssadm.G2Ssadm/ReinitializeToken',
            g2ssadm__pb2.ReinitializeTokenRequest.SerializeToString,
            g2ssadm__pb2.ReinitializeTokenResponse.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)

    @staticmethod
    def SetupStore(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/g2ssadm.G2Ssadm/SetupStore',
            g2ssadm__pb2.SetupStoreRequest.SerializeToString,
            g2ssadm__pb2.SetupStoreResponse.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)