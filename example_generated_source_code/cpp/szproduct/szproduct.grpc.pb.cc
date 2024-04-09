// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: szproduct.proto

#include "szproduct.pb.h"
#include "szproduct.grpc.pb.h"

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
namespace szproduct {

static const char* SzProduct_method_names[] = {
  "/szproduct.SzProduct/GetLicense",
  "/szproduct.SzProduct/GetVersion",
};

std::unique_ptr< SzProduct::Stub> SzProduct::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< SzProduct::Stub> stub(new SzProduct::Stub(channel, options));
  return stub;
}

SzProduct::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_GetLicense_(SzProduct_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetVersion_(SzProduct_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status SzProduct::Stub::GetLicense(::grpc::ClientContext* context, const ::szproduct::GetLicenseRequest& request, ::szproduct::GetLicenseResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::szproduct::GetLicenseRequest, ::szproduct::GetLicenseResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetLicense_, context, request, response);
}

void SzProduct::Stub::async::GetLicense(::grpc::ClientContext* context, const ::szproduct::GetLicenseRequest* request, ::szproduct::GetLicenseResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::szproduct::GetLicenseRequest, ::szproduct::GetLicenseResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetLicense_, context, request, response, std::move(f));
}

void SzProduct::Stub::async::GetLicense(::grpc::ClientContext* context, const ::szproduct::GetLicenseRequest* request, ::szproduct::GetLicenseResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetLicense_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::szproduct::GetLicenseResponse>* SzProduct::Stub::PrepareAsyncGetLicenseRaw(::grpc::ClientContext* context, const ::szproduct::GetLicenseRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::szproduct::GetLicenseResponse, ::szproduct::GetLicenseRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetLicense_, context, request);
}

::grpc::ClientAsyncResponseReader< ::szproduct::GetLicenseResponse>* SzProduct::Stub::AsyncGetLicenseRaw(::grpc::ClientContext* context, const ::szproduct::GetLicenseRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetLicenseRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status SzProduct::Stub::GetVersion(::grpc::ClientContext* context, const ::szproduct::GetVersionRequest& request, ::szproduct::GetVersionResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::szproduct::GetVersionRequest, ::szproduct::GetVersionResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetVersion_, context, request, response);
}

void SzProduct::Stub::async::GetVersion(::grpc::ClientContext* context, const ::szproduct::GetVersionRequest* request, ::szproduct::GetVersionResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::szproduct::GetVersionRequest, ::szproduct::GetVersionResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetVersion_, context, request, response, std::move(f));
}

void SzProduct::Stub::async::GetVersion(::grpc::ClientContext* context, const ::szproduct::GetVersionRequest* request, ::szproduct::GetVersionResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetVersion_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::szproduct::GetVersionResponse>* SzProduct::Stub::PrepareAsyncGetVersionRaw(::grpc::ClientContext* context, const ::szproduct::GetVersionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::szproduct::GetVersionResponse, ::szproduct::GetVersionRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetVersion_, context, request);
}

::grpc::ClientAsyncResponseReader< ::szproduct::GetVersionResponse>* SzProduct::Stub::AsyncGetVersionRaw(::grpc::ClientContext* context, const ::szproduct::GetVersionRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetVersionRaw(context, request, cq);
  result->StartCall();
  return result;
}

SzProduct::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SzProduct_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SzProduct::Service, ::szproduct::GetLicenseRequest, ::szproduct::GetLicenseResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](SzProduct::Service* service,
             ::grpc::ServerContext* ctx,
             const ::szproduct::GetLicenseRequest* req,
             ::szproduct::GetLicenseResponse* resp) {
               return service->GetLicense(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      SzProduct_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< SzProduct::Service, ::szproduct::GetVersionRequest, ::szproduct::GetVersionResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](SzProduct::Service* service,
             ::grpc::ServerContext* ctx,
             const ::szproduct::GetVersionRequest* req,
             ::szproduct::GetVersionResponse* resp) {
               return service->GetVersion(ctx, req, resp);
             }, this)));
}

SzProduct::Service::~Service() {
}

::grpc::Status SzProduct::Service::GetLicense(::grpc::ServerContext* context, const ::szproduct::GetLicenseRequest* request, ::szproduct::GetLicenseResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status SzProduct::Service::GetVersion(::grpc::ServerContext* context, const ::szproduct::GetVersionRequest* request, ::szproduct::GetVersionResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace szproduct

