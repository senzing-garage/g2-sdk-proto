// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: szconfigmanager.proto

#include "szconfigmanager.pb.h"
#include "szconfigmanager.grpc.pb.h"

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
namespace szconfigmanager {

static const char* SzConfigManager_method_names[] = {
  "/szconfigmanager.SzConfigManager/AddConfig",
  "/szconfigmanager.SzConfigManager/GetConfig",
  "/szconfigmanager.SzConfigManager/GetConfigs",
  "/szconfigmanager.SzConfigManager/GetDefaultConfigId",
  "/szconfigmanager.SzConfigManager/ReplaceDefaultConfigId",
  "/szconfigmanager.SzConfigManager/SetDefaultConfigId",
};

std::unique_ptr< SzConfigManager::Stub> SzConfigManager::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< SzConfigManager::Stub> stub(new SzConfigManager::Stub(channel, options));
  return stub;
}

SzConfigManager::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_AddConfig_(SzConfigManager_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetConfig_(SzConfigManager_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetConfigs_(SzConfigManager_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetDefaultConfigId_(SzConfigManager_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_ReplaceDefaultConfigId_(SzConfigManager_method_names[4], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SetDefaultConfigId_(SzConfigManager_method_names[5], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status SzConfigManager::Stub::AddConfig(::grpc::ClientContext* context, const ::szconfigmanager::AddConfigRequest& request, ::szconfigmanager::AddConfigResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::szconfigmanager::AddConfigRequest, ::szconfigmanager::AddConfigResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_AddConfig_, context, request, response);
}

void SzConfigManager::Stub::async::AddConfig(::grpc::ClientContext* context, const ::szconfigmanager::AddConfigRequest* request, ::szconfigmanager::AddConfigResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::szconfigmanager::AddConfigRequest, ::szconfigmanager::AddConfigResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_AddConfig_, context, request, response, std::move(f));
}

void SzConfigManager::Stub::async::AddConfig(::grpc::ClientContext* context, const ::szconfigmanager::AddConfigRequest* request, ::szconfigmanager::AddConfigResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_AddConfig_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::szconfigmanager::AddConfigResponse>* SzConfigManager::Stub::PrepareAsyncAddConfigRaw(::grpc::ClientContext* context, const ::szconfigmanager::AddConfigRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::szconfigmanager::AddConfigResponse, ::szconfigmanager::AddConfigRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_AddConfig_, context, request);
}

::grpc::ClientAsyncResponseReader< ::szconfigmanager::AddConfigResponse>* SzConfigManager::Stub::AsyncAddConfigRaw(::grpc::ClientContext* context, const ::szconfigmanager::AddConfigRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncAddConfigRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status SzConfigManager::Stub::GetConfig(::grpc::ClientContext* context, const ::szconfigmanager::GetConfigRequest& request, ::szconfigmanager::GetConfigResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::szconfigmanager::GetConfigRequest, ::szconfigmanager::GetConfigResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetConfig_, context, request, response);
}

void SzConfigManager::Stub::async::GetConfig(::grpc::ClientContext* context, const ::szconfigmanager::GetConfigRequest* request, ::szconfigmanager::GetConfigResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::szconfigmanager::GetConfigRequest, ::szconfigmanager::GetConfigResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetConfig_, context, request, response, std::move(f));
}

void SzConfigManager::Stub::async::GetConfig(::grpc::ClientContext* context, const ::szconfigmanager::GetConfigRequest* request, ::szconfigmanager::GetConfigResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetConfig_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::szconfigmanager::GetConfigResponse>* SzConfigManager::Stub::PrepareAsyncGetConfigRaw(::grpc::ClientContext* context, const ::szconfigmanager::GetConfigRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::szconfigmanager::GetConfigResponse, ::szconfigmanager::GetConfigRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetConfig_, context, request);
}

::grpc::ClientAsyncResponseReader< ::szconfigmanager::GetConfigResponse>* SzConfigManager::Stub::AsyncGetConfigRaw(::grpc::ClientContext* context, const ::szconfigmanager::GetConfigRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetConfigRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status SzConfigManager::Stub::GetConfigs(::grpc::ClientContext* context, const ::szconfigmanager::GetConfigsRequest& request, ::szconfigmanager::GetConfigsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::szconfigmanager::GetConfigsRequest, ::szconfigmanager::GetConfigsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetConfigs_, context, request, response);
}

void SzConfigManager::Stub::async::GetConfigs(::grpc::ClientContext* context, const ::szconfigmanager::GetConfigsRequest* request, ::szconfigmanager::GetConfigsResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::szconfigmanager::GetConfigsRequest, ::szconfigmanager::GetConfigsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetConfigs_, context, request, response, std::move(f));
}

void SzConfigManager::Stub::async::GetConfigs(::grpc::ClientContext* context, const ::szconfigmanager::GetConfigsRequest* request, ::szconfigmanager::GetConfigsResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetConfigs_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::szconfigmanager::GetConfigsResponse>* SzConfigManager::Stub::PrepareAsyncGetConfigsRaw(::grpc::ClientContext* context, const ::szconfigmanager::GetConfigsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::szconfigmanager::GetConfigsResponse, ::szconfigmanager::GetConfigsRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetConfigs_, context, request);
}

::grpc::ClientAsyncResponseReader< ::szconfigmanager::GetConfigsResponse>* SzConfigManager::Stub::AsyncGetConfigsRaw(::grpc::ClientContext* context, const ::szconfigmanager::GetConfigsRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetConfigsRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status SzConfigManager::Stub::GetDefaultConfigId(::grpc::ClientContext* context, const ::szconfigmanager::GetDefaultConfigIdRequest& request, ::szconfigmanager::GetDefaultConfigIdResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::szconfigmanager::GetDefaultConfigIdRequest, ::szconfigmanager::GetDefaultConfigIdResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetDefaultConfigId_, context, request, response);
}

void SzConfigManager::Stub::async::GetDefaultConfigId(::grpc::ClientContext* context, const ::szconfigmanager::GetDefaultConfigIdRequest* request, ::szconfigmanager::GetDefaultConfigIdResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::szconfigmanager::GetDefaultConfigIdRequest, ::szconfigmanager::GetDefaultConfigIdResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetDefaultConfigId_, context, request, response, std::move(f));
}

void SzConfigManager::Stub::async::GetDefaultConfigId(::grpc::ClientContext* context, const ::szconfigmanager::GetDefaultConfigIdRequest* request, ::szconfigmanager::GetDefaultConfigIdResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetDefaultConfigId_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::szconfigmanager::GetDefaultConfigIdResponse>* SzConfigManager::Stub::PrepareAsyncGetDefaultConfigIdRaw(::grpc::ClientContext* context, const ::szconfigmanager::GetDefaultConfigIdRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::szconfigmanager::GetDefaultConfigIdResponse, ::szconfigmanager::GetDefaultConfigIdRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetDefaultConfigId_, context, request);
}

::grpc::ClientAsyncResponseReader< ::szconfigmanager::GetDefaultConfigIdResponse>* SzConfigManager::Stub::AsyncGetDefaultConfigIdRaw(::grpc::ClientContext* context, const ::szconfigmanager::GetDefaultConfigIdRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetDefaultConfigIdRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status SzConfigManager::Stub::ReplaceDefaultConfigId(::grpc::ClientContext* context, const ::szconfigmanager::ReplaceDefaultConfigIdRequest& request, ::szconfigmanager::ReplaceDefaultConfigIdResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::szconfigmanager::ReplaceDefaultConfigIdRequest, ::szconfigmanager::ReplaceDefaultConfigIdResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_ReplaceDefaultConfigId_, context, request, response);
}

void SzConfigManager::Stub::async::ReplaceDefaultConfigId(::grpc::ClientContext* context, const ::szconfigmanager::ReplaceDefaultConfigIdRequest* request, ::szconfigmanager::ReplaceDefaultConfigIdResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::szconfigmanager::ReplaceDefaultConfigIdRequest, ::szconfigmanager::ReplaceDefaultConfigIdResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ReplaceDefaultConfigId_, context, request, response, std::move(f));
}

void SzConfigManager::Stub::async::ReplaceDefaultConfigId(::grpc::ClientContext* context, const ::szconfigmanager::ReplaceDefaultConfigIdRequest* request, ::szconfigmanager::ReplaceDefaultConfigIdResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ReplaceDefaultConfigId_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::szconfigmanager::ReplaceDefaultConfigIdResponse>* SzConfigManager::Stub::PrepareAsyncReplaceDefaultConfigIdRaw(::grpc::ClientContext* context, const ::szconfigmanager::ReplaceDefaultConfigIdRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::szconfigmanager::ReplaceDefaultConfigIdResponse, ::szconfigmanager::ReplaceDefaultConfigIdRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_ReplaceDefaultConfigId_, context, request);
}

::grpc::ClientAsyncResponseReader< ::szconfigmanager::ReplaceDefaultConfigIdResponse>* SzConfigManager::Stub::AsyncReplaceDefaultConfigIdRaw(::grpc::ClientContext* context, const ::szconfigmanager::ReplaceDefaultConfigIdRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncReplaceDefaultConfigIdRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status SzConfigManager::Stub::SetDefaultConfigId(::grpc::ClientContext* context, const ::szconfigmanager::SetDefaultConfigIdRequest& request, ::szconfigmanager::SetDefaultConfigIdResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::szconfigmanager::SetDefaultConfigIdRequest, ::szconfigmanager::SetDefaultConfigIdResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_SetDefaultConfigId_, context, request, response);
}

void SzConfigManager::Stub::async::SetDefaultConfigId(::grpc::ClientContext* context, const ::szconfigmanager::SetDefaultConfigIdRequest* request, ::szconfigmanager::SetDefaultConfigIdResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::szconfigmanager::SetDefaultConfigIdRequest, ::szconfigmanager::SetDefaultConfigIdResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetDefaultConfigId_, context, request, response, std::move(f));
}

void SzConfigManager::Stub::async::SetDefaultConfigId(::grpc::ClientContext* context, const ::szconfigmanager::SetDefaultConfigIdRequest* request, ::szconfigmanager::SetDefaultConfigIdResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_SetDefaultConfigId_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::szconfigmanager::SetDefaultConfigIdResponse>* SzConfigManager::Stub::PrepareAsyncSetDefaultConfigIdRaw(::grpc::ClientContext* context, const ::szconfigmanager::SetDefaultConfigIdRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::szconfigmanager::SetDefaultConfigIdResponse, ::szconfigmanager::SetDefaultConfigIdRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_SetDefaultConfigId_, context, request);
}

::grpc::ClientAsyncResponseReader< ::szconfigmanager::SetDefaultConfigIdResponse>* SzConfigManager::Stub::AsyncSetDefaultConfigIdRaw(::grpc::ClientContext* context, const ::szconfigmanager::SetDefaultConfigIdRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncSetDefaultConfigIdRaw(context, request, cq);
  result->StartCall();
  return result;
}

SzConfigManager::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SzConfigManager_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SzConfigManager::Service, ::szconfigmanager::AddConfigRequest, ::szconfigmanager::AddConfigResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](SzConfigManager::Service* service,
             ::grpc::ServerContext* ctx,
             const ::szconfigmanager::AddConfigRequest* req,
             ::szconfigmanager::AddConfigResponse* resp) {
               return service->AddConfig(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SzConfigManager_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SzConfigManager::Service, ::szconfigmanager::GetConfigRequest, ::szconfigmanager::GetConfigResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](SzConfigManager::Service* service,
             ::grpc::ServerContext* ctx,
             const ::szconfigmanager::GetConfigRequest* req,
             ::szconfigmanager::GetConfigResponse* resp) {
               return service->GetConfig(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SzConfigManager_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SzConfigManager::Service, ::szconfigmanager::GetConfigsRequest, ::szconfigmanager::GetConfigsResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](SzConfigManager::Service* service,
             ::grpc::ServerContext* ctx,
             const ::szconfigmanager::GetConfigsRequest* req,
             ::szconfigmanager::GetConfigsResponse* resp) {
               return service->GetConfigs(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SzConfigManager_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SzConfigManager::Service, ::szconfigmanager::GetDefaultConfigIdRequest, ::szconfigmanager::GetDefaultConfigIdResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](SzConfigManager::Service* service,
             ::grpc::ServerContext* ctx,
             const ::szconfigmanager::GetDefaultConfigIdRequest* req,
             ::szconfigmanager::GetDefaultConfigIdResponse* resp) {
               return service->GetDefaultConfigId(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SzConfigManager_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SzConfigManager::Service, ::szconfigmanager::ReplaceDefaultConfigIdRequest, ::szconfigmanager::ReplaceDefaultConfigIdResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](SzConfigManager::Service* service,
             ::grpc::ServerContext* ctx,
             const ::szconfigmanager::ReplaceDefaultConfigIdRequest* req,
             ::szconfigmanager::ReplaceDefaultConfigIdResponse* resp) {
               return service->ReplaceDefaultConfigId(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SzConfigManager_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SzConfigManager::Service, ::szconfigmanager::SetDefaultConfigIdRequest, ::szconfigmanager::SetDefaultConfigIdResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](SzConfigManager::Service* service,
             ::grpc::ServerContext* ctx,
             const ::szconfigmanager::SetDefaultConfigIdRequest* req,
             ::szconfigmanager::SetDefaultConfigIdResponse* resp) {
               return service->SetDefaultConfigId(ctx, req, resp);
             }, this)));
}

SzConfigManager::Service::~Service() {
}

::grpc::Status SzConfigManager::Service::AddConfig(::grpc::ServerContext* context, const ::szconfigmanager::AddConfigRequest* request, ::szconfigmanager::AddConfigResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SzConfigManager::Service::GetConfig(::grpc::ServerContext* context, const ::szconfigmanager::GetConfigRequest* request, ::szconfigmanager::GetConfigResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SzConfigManager::Service::GetConfigs(::grpc::ServerContext* context, const ::szconfigmanager::GetConfigsRequest* request, ::szconfigmanager::GetConfigsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SzConfigManager::Service::GetDefaultConfigId(::grpc::ServerContext* context, const ::szconfigmanager::GetDefaultConfigIdRequest* request, ::szconfigmanager::GetDefaultConfigIdResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SzConfigManager::Service::ReplaceDefaultConfigId(::grpc::ServerContext* context, const ::szconfigmanager::ReplaceDefaultConfigIdRequest* request, ::szconfigmanager::ReplaceDefaultConfigIdResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SzConfigManager::Service::SetDefaultConfigId(::grpc::ServerContext* context, const ::szconfigmanager::SetDefaultConfigIdRequest* request, ::szconfigmanager::SetDefaultConfigIdResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace szconfigmanager

