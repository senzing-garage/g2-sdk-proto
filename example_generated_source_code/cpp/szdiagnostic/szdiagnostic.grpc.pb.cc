// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: szdiagnostic.proto

#include "szdiagnostic.pb.h"
#include "szdiagnostic.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace szdiagnostic {

static const char* SzDiagnostic_method_names[] = {
  "/szdiagnostic.SzDiagnostic/CheckDatastorePerformance",
  "/szdiagnostic.SzDiagnostic/GetDatastoreInfo",
  "/szdiagnostic.SzDiagnostic/GetFeature",
  "/szdiagnostic.SzDiagnostic/PurgeRepository",
  "/szdiagnostic.SzDiagnostic/Reinitialize",
};

std::unique_ptr< SzDiagnostic::Stub> SzDiagnostic::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< SzDiagnostic::Stub> stub(new SzDiagnostic::Stub(channel, options));
  return stub;
}

SzDiagnostic::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_CheckDatastorePerformance_(SzDiagnostic_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetDatastoreInfo_(SzDiagnostic_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetFeature_(SzDiagnostic_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_PurgeRepository_(SzDiagnostic_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Reinitialize_(SzDiagnostic_method_names[4], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status SzDiagnostic::Stub::CheckDatastorePerformance(::grpc::ClientContext* context, const ::szdiagnostic::CheckDatastorePerformanceRequest& request, ::szdiagnostic::CheckDatastorePerformanceResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::szdiagnostic::CheckDatastorePerformanceRequest, ::szdiagnostic::CheckDatastorePerformanceResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_CheckDatastorePerformance_, context, request, response);
}

void SzDiagnostic::Stub::async::CheckDatastorePerformance(::grpc::ClientContext* context, const ::szdiagnostic::CheckDatastorePerformanceRequest* request, ::szdiagnostic::CheckDatastorePerformanceResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::szdiagnostic::CheckDatastorePerformanceRequest, ::szdiagnostic::CheckDatastorePerformanceResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CheckDatastorePerformance_, context, request, response, std::move(f));
}

void SzDiagnostic::Stub::async::CheckDatastorePerformance(::grpc::ClientContext* context, const ::szdiagnostic::CheckDatastorePerformanceRequest* request, ::szdiagnostic::CheckDatastorePerformanceResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_CheckDatastorePerformance_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::szdiagnostic::CheckDatastorePerformanceResponse>* SzDiagnostic::Stub::PrepareAsyncCheckDatastorePerformanceRaw(::grpc::ClientContext* context, const ::szdiagnostic::CheckDatastorePerformanceRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::szdiagnostic::CheckDatastorePerformanceResponse, ::szdiagnostic::CheckDatastorePerformanceRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_CheckDatastorePerformance_, context, request);
}

::grpc::ClientAsyncResponseReader< ::szdiagnostic::CheckDatastorePerformanceResponse>* SzDiagnostic::Stub::AsyncCheckDatastorePerformanceRaw(::grpc::ClientContext* context, const ::szdiagnostic::CheckDatastorePerformanceRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncCheckDatastorePerformanceRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status SzDiagnostic::Stub::GetDatastoreInfo(::grpc::ClientContext* context, const ::szdiagnostic::GetDatastoreInfoRequest& request, ::szdiagnostic::GetDatastoreInfoResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::szdiagnostic::GetDatastoreInfoRequest, ::szdiagnostic::GetDatastoreInfoResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetDatastoreInfo_, context, request, response);
}

void SzDiagnostic::Stub::async::GetDatastoreInfo(::grpc::ClientContext* context, const ::szdiagnostic::GetDatastoreInfoRequest* request, ::szdiagnostic::GetDatastoreInfoResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::szdiagnostic::GetDatastoreInfoRequest, ::szdiagnostic::GetDatastoreInfoResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetDatastoreInfo_, context, request, response, std::move(f));
}

void SzDiagnostic::Stub::async::GetDatastoreInfo(::grpc::ClientContext* context, const ::szdiagnostic::GetDatastoreInfoRequest* request, ::szdiagnostic::GetDatastoreInfoResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetDatastoreInfo_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::szdiagnostic::GetDatastoreInfoResponse>* SzDiagnostic::Stub::PrepareAsyncGetDatastoreInfoRaw(::grpc::ClientContext* context, const ::szdiagnostic::GetDatastoreInfoRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::szdiagnostic::GetDatastoreInfoResponse, ::szdiagnostic::GetDatastoreInfoRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetDatastoreInfo_, context, request);
}

::grpc::ClientAsyncResponseReader< ::szdiagnostic::GetDatastoreInfoResponse>* SzDiagnostic::Stub::AsyncGetDatastoreInfoRaw(::grpc::ClientContext* context, const ::szdiagnostic::GetDatastoreInfoRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetDatastoreInfoRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status SzDiagnostic::Stub::GetFeature(::grpc::ClientContext* context, const ::szdiagnostic::GetFeatureRequest& request, ::szdiagnostic::GetFeatureResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::szdiagnostic::GetFeatureRequest, ::szdiagnostic::GetFeatureResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetFeature_, context, request, response);
}

void SzDiagnostic::Stub::async::GetFeature(::grpc::ClientContext* context, const ::szdiagnostic::GetFeatureRequest* request, ::szdiagnostic::GetFeatureResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::szdiagnostic::GetFeatureRequest, ::szdiagnostic::GetFeatureResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetFeature_, context, request, response, std::move(f));
}

void SzDiagnostic::Stub::async::GetFeature(::grpc::ClientContext* context, const ::szdiagnostic::GetFeatureRequest* request, ::szdiagnostic::GetFeatureResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetFeature_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::szdiagnostic::GetFeatureResponse>* SzDiagnostic::Stub::PrepareAsyncGetFeatureRaw(::grpc::ClientContext* context, const ::szdiagnostic::GetFeatureRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::szdiagnostic::GetFeatureResponse, ::szdiagnostic::GetFeatureRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetFeature_, context, request);
}

::grpc::ClientAsyncResponseReader< ::szdiagnostic::GetFeatureResponse>* SzDiagnostic::Stub::AsyncGetFeatureRaw(::grpc::ClientContext* context, const ::szdiagnostic::GetFeatureRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetFeatureRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status SzDiagnostic::Stub::PurgeRepository(::grpc::ClientContext* context, const ::szdiagnostic::PurgeRepositoryRequest& request, ::szdiagnostic::PurgeRepositoryResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::szdiagnostic::PurgeRepositoryRequest, ::szdiagnostic::PurgeRepositoryResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_PurgeRepository_, context, request, response);
}

void SzDiagnostic::Stub::async::PurgeRepository(::grpc::ClientContext* context, const ::szdiagnostic::PurgeRepositoryRequest* request, ::szdiagnostic::PurgeRepositoryResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::szdiagnostic::PurgeRepositoryRequest, ::szdiagnostic::PurgeRepositoryResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_PurgeRepository_, context, request, response, std::move(f));
}

void SzDiagnostic::Stub::async::PurgeRepository(::grpc::ClientContext* context, const ::szdiagnostic::PurgeRepositoryRequest* request, ::szdiagnostic::PurgeRepositoryResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_PurgeRepository_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::szdiagnostic::PurgeRepositoryResponse>* SzDiagnostic::Stub::PrepareAsyncPurgeRepositoryRaw(::grpc::ClientContext* context, const ::szdiagnostic::PurgeRepositoryRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::szdiagnostic::PurgeRepositoryResponse, ::szdiagnostic::PurgeRepositoryRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_PurgeRepository_, context, request);
}

::grpc::ClientAsyncResponseReader< ::szdiagnostic::PurgeRepositoryResponse>* SzDiagnostic::Stub::AsyncPurgeRepositoryRaw(::grpc::ClientContext* context, const ::szdiagnostic::PurgeRepositoryRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncPurgeRepositoryRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status SzDiagnostic::Stub::Reinitialize(::grpc::ClientContext* context, const ::szdiagnostic::ReinitializeRequest& request, ::szdiagnostic::ReinitializeResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::szdiagnostic::ReinitializeRequest, ::szdiagnostic::ReinitializeResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Reinitialize_, context, request, response);
}

void SzDiagnostic::Stub::async::Reinitialize(::grpc::ClientContext* context, const ::szdiagnostic::ReinitializeRequest* request, ::szdiagnostic::ReinitializeResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::szdiagnostic::ReinitializeRequest, ::szdiagnostic::ReinitializeResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Reinitialize_, context, request, response, std::move(f));
}

void SzDiagnostic::Stub::async::Reinitialize(::grpc::ClientContext* context, const ::szdiagnostic::ReinitializeRequest* request, ::szdiagnostic::ReinitializeResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Reinitialize_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::szdiagnostic::ReinitializeResponse>* SzDiagnostic::Stub::PrepareAsyncReinitializeRaw(::grpc::ClientContext* context, const ::szdiagnostic::ReinitializeRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::szdiagnostic::ReinitializeResponse, ::szdiagnostic::ReinitializeRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Reinitialize_, context, request);
}

::grpc::ClientAsyncResponseReader< ::szdiagnostic::ReinitializeResponse>* SzDiagnostic::Stub::AsyncReinitializeRaw(::grpc::ClientContext* context, const ::szdiagnostic::ReinitializeRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncReinitializeRaw(context, request, cq);
  result->StartCall();
  return result;
}

SzDiagnostic::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SzDiagnostic_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SzDiagnostic::Service, ::szdiagnostic::CheckDatastorePerformanceRequest, ::szdiagnostic::CheckDatastorePerformanceResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](SzDiagnostic::Service* service,
             ::grpc::ServerContext* ctx,
             const ::szdiagnostic::CheckDatastorePerformanceRequest* req,
             ::szdiagnostic::CheckDatastorePerformanceResponse* resp) {
               return service->CheckDatastorePerformance(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SzDiagnostic_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SzDiagnostic::Service, ::szdiagnostic::GetDatastoreInfoRequest, ::szdiagnostic::GetDatastoreInfoResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](SzDiagnostic::Service* service,
             ::grpc::ServerContext* ctx,
             const ::szdiagnostic::GetDatastoreInfoRequest* req,
             ::szdiagnostic::GetDatastoreInfoResponse* resp) {
               return service->GetDatastoreInfo(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SzDiagnostic_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SzDiagnostic::Service, ::szdiagnostic::GetFeatureRequest, ::szdiagnostic::GetFeatureResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](SzDiagnostic::Service* service,
             ::grpc::ServerContext* ctx,
             const ::szdiagnostic::GetFeatureRequest* req,
             ::szdiagnostic::GetFeatureResponse* resp) {
               return service->GetFeature(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SzDiagnostic_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SzDiagnostic::Service, ::szdiagnostic::PurgeRepositoryRequest, ::szdiagnostic::PurgeRepositoryResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](SzDiagnostic::Service* service,
             ::grpc::ServerContext* ctx,
             const ::szdiagnostic::PurgeRepositoryRequest* req,
             ::szdiagnostic::PurgeRepositoryResponse* resp) {
               return service->PurgeRepository(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SzDiagnostic_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SzDiagnostic::Service, ::szdiagnostic::ReinitializeRequest, ::szdiagnostic::ReinitializeResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](SzDiagnostic::Service* service,
             ::grpc::ServerContext* ctx,
             const ::szdiagnostic::ReinitializeRequest* req,
             ::szdiagnostic::ReinitializeResponse* resp) {
               return service->Reinitialize(ctx, req, resp);
             }, this)));
}

SzDiagnostic::Service::~Service() {
}

::grpc::Status SzDiagnostic::Service::CheckDatastorePerformance(::grpc::ServerContext* context, const ::szdiagnostic::CheckDatastorePerformanceRequest* request, ::szdiagnostic::CheckDatastorePerformanceResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SzDiagnostic::Service::GetDatastoreInfo(::grpc::ServerContext* context, const ::szdiagnostic::GetDatastoreInfoRequest* request, ::szdiagnostic::GetDatastoreInfoResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SzDiagnostic::Service::GetFeature(::grpc::ServerContext* context, const ::szdiagnostic::GetFeatureRequest* request, ::szdiagnostic::GetFeatureResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SzDiagnostic::Service::PurgeRepository(::grpc::ServerContext* context, const ::szdiagnostic::PurgeRepositoryRequest* request, ::szdiagnostic::PurgeRepositoryResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SzDiagnostic::Service::Reinitialize(::grpc::ServerContext* context, const ::szdiagnostic::ReinitializeRequest* request, ::szdiagnostic::ReinitializeResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace szdiagnostic

