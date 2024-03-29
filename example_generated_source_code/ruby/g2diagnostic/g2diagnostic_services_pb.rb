# Generated by the protocol buffer compiler.  DO NOT EDIT!
# Source: g2diagnostic.proto for package 'g2diagnostic'

require 'grpc'
require 'g2diagnostic_pb'

module G2diagnostic
  module G2Diagnostic
    class Service

      include ::GRPC::GenericService

      self.marshal_class_method = :encode
      self.unmarshal_class_method = :decode
      self.service_name = 'g2diagnostic.G2Diagnostic'

      rpc :CheckDBPerf, ::G2diagnostic::CheckDBPerfRequest, ::G2diagnostic::CheckDBPerfResponse
      rpc :Destroy, ::G2diagnostic::DestroyRequest, ::G2diagnostic::DestroyResponse
      rpc :Init, ::G2diagnostic::InitRequest, ::G2diagnostic::InitResponse
      rpc :InitWithConfigID, ::G2diagnostic::InitWithConfigIDRequest, ::G2diagnostic::InitWithConfigIDResponse
      rpc :PurgeRepository, ::G2diagnostic::PurgeRepositoryRequest, ::G2diagnostic::PurgeRepositoryResponse
      rpc :Reinit, ::G2diagnostic::ReinitRequest, ::G2diagnostic::ReinitResponse
    end

    Stub = Service.rpc_stub_class
  end
end
