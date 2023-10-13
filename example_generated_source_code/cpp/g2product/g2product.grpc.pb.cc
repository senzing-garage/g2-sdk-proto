// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: g2product.proto

#include "g2product.pb.h"
#include "g2product.grpc.pb.h"

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
namespace g2product {

static const char* G2Product_method_names[] = {
  "/g2product.G2Product/Destroy",
  "/g2product.G2Product/Init",
  "/g2product.G2Product/License",
  "/g2product.G2Product/Version",
};

std::unique_ptr< G2Product::Stub> G2Product::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< G2Product::Stub> stub(new G2Product::Stub(channel, options));
  return stub;
}

G2Product::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_Destroy_(G2Product_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Init_(G2Product_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_License_(G2Product_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_Version_(G2Product_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status G2Product::Stub::Destroy(::grpc::ClientContext* context, const ::g2product::DestroyRequest& request, ::g2product::DestroyResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::g2product::DestroyRequest, ::g2product::DestroyResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Destroy_, context, request, response);
}

void G2Product::Stub::async::Destroy(::grpc::ClientContext* context, const ::g2product::DestroyRequest* request, ::g2product::DestroyResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::g2product::DestroyRequest, ::g2product::DestroyResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Destroy_, context, request, response, std::move(f));
}

void G2Product::Stub::async::Destroy(::grpc::ClientContext* context, const ::g2product::DestroyRequest* request, ::g2product::DestroyResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Destroy_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::g2product::DestroyResponse>* G2Product::Stub::PrepareAsyncDestroyRaw(::grpc::ClientContext* context, const ::g2product::DestroyRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::g2product::DestroyResponse, ::g2product::DestroyRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Destroy_, context, request);
}

::grpc::ClientAsyncResponseReader< ::g2product::DestroyResponse>* G2Product::Stub::AsyncDestroyRaw(::grpc::ClientContext* context, const ::g2product::DestroyRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncDestroyRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status G2Product::Stub::Init(::grpc::ClientContext* context, const ::g2product::InitRequest& request, ::g2product::InitResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::g2product::InitRequest, ::g2product::InitResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Init_, context, request, response);
}

void G2Product::Stub::async::Init(::grpc::ClientContext* context, const ::g2product::InitRequest* request, ::g2product::InitResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::g2product::InitRequest, ::g2product::InitResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Init_, context, request, response, std::move(f));
}

void G2Product::Stub::async::Init(::grpc::ClientContext* context, const ::g2product::InitRequest* request, ::g2product::InitResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Init_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::g2product::InitResponse>* G2Product::Stub::PrepareAsyncInitRaw(::grpc::ClientContext* context, const ::g2product::InitRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::g2product::InitResponse, ::g2product::InitRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Init_, context, request);
}

::grpc::ClientAsyncResponseReader< ::g2product::InitResponse>* G2Product::Stub::AsyncInitRaw(::grpc::ClientContext* context, const ::g2product::InitRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncInitRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status G2Product::Stub::License(::grpc::ClientContext* context, const ::g2product::LicenseRequest& request, ::g2product::LicenseResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::g2product::LicenseRequest, ::g2product::LicenseResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_License_, context, request, response);
}

void G2Product::Stub::async::License(::grpc::ClientContext* context, const ::g2product::LicenseRequest* request, ::g2product::LicenseResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::g2product::LicenseRequest, ::g2product::LicenseResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_License_, context, request, response, std::move(f));
}

void G2Product::Stub::async::License(::grpc::ClientContext* context, const ::g2product::LicenseRequest* request, ::g2product::LicenseResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_License_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::g2product::LicenseResponse>* G2Product::Stub::PrepareAsyncLicenseRaw(::grpc::ClientContext* context, const ::g2product::LicenseRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::g2product::LicenseResponse, ::g2product::LicenseRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_License_, context, request);
}

::grpc::ClientAsyncResponseReader< ::g2product::LicenseResponse>* G2Product::Stub::AsyncLicenseRaw(::grpc::ClientContext* context, const ::g2product::LicenseRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncLicenseRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status G2Product::Stub::Version(::grpc::ClientContext* context, const ::g2product::VersionRequest& request, ::g2product::VersionResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::g2product::VersionRequest, ::g2product::VersionResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Version_, context, request, response);
}

void G2Product::Stub::async::Version(::grpc::ClientContext* context, const ::g2product::VersionRequest* request, ::g2product::VersionResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::g2product::VersionRequest, ::g2product::VersionResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Version_, context, request, response, std::move(f));
}

void G2Product::Stub::async::Version(::grpc::ClientContext* context, const ::g2product::VersionRequest* request, ::g2product::VersionResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Version_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::g2product::VersionResponse>* G2Product::Stub::PrepareAsyncVersionRaw(::grpc::ClientContext* context, const ::g2product::VersionRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::g2product::VersionResponse, ::g2product::VersionRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Version_, context, request);
}

::grpc::ClientAsyncResponseReader< ::g2product::VersionResponse>* G2Product::Stub::AsyncVersionRaw(::grpc::ClientContext* context, const ::g2product::VersionRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncVersionRaw(context, request, cq);
  result->StartCall();
  return result;
}

G2Product::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      G2Product_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< G2Product::Service, ::g2product::DestroyRequest, ::g2product::DestroyResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](G2Product::Service* service,
             ::grpc::ServerContext* ctx,
             const ::g2product::DestroyRequest* req,
             ::g2product::DestroyResponse* resp) {
               return service->Destroy(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      G2Product_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< G2Product::Service, ::g2product::InitRequest, ::g2product::InitResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](G2Product::Service* service,
             ::grpc::ServerContext* ctx,
             const ::g2product::InitRequest* req,
             ::g2product::InitResponse* resp) {
               return service->Init(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      G2Product_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< G2Product::Service, ::g2product::LicenseRequest, ::g2product::LicenseResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](G2Product::Service* service,
             ::grpc::ServerContext* ctx,
             const ::g2product::LicenseRequest* req,
             ::g2product::LicenseResponse* resp) {
               return service->License(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      G2Product_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< G2Product::Service, ::g2product::VersionRequest, ::g2product::VersionResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](G2Product::Service* service,
             ::grpc::ServerContext* ctx,
             const ::g2product::VersionRequest* req,
             ::g2product::VersionResponse* resp) {
               return service->Version(ctx, req, resp);
             }, this)));
}

G2Product::Service::~Service() {
}

::grpc::Status G2Product::Service::Destroy(::grpc::ServerContext* context, const ::g2product::DestroyRequest* request, ::g2product::DestroyResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status G2Product::Service::Init(::grpc::ServerContext* context, const ::g2product::InitRequest* request, ::g2product::InitResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status G2Product::Service::License(::grpc::ServerContext* context, const ::g2product::LicenseRequest* request, ::g2product::LicenseResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status G2Product::Service::Version(::grpc::ServerContext* context, const ::g2product::VersionRequest* request, ::g2product::VersionResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace g2product

