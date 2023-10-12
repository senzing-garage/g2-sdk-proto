# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: g2diagnostic.proto

require 'google/protobuf'

Google::Protobuf::DescriptorPool.generated_pool.build do
  add_file("g2diagnostic.proto", :syntax => :proto3) do
    add_message "g2diagnostic.CheckDBPerfRequest" do
      optional :secondsToRun, :int32, 1
    end
    add_message "g2diagnostic.CheckDBPerfResponse" do
      optional :result, :string, 1
    end
    add_message "g2diagnostic.DestroyRequest" do
    end
    add_message "g2diagnostic.DestroyResponse" do
    end
    add_message "g2diagnostic.GetAvailableMemoryRequest" do
    end
    add_message "g2diagnostic.GetAvailableMemoryResponse" do
      optional :result, :int64, 1
    end
    add_message "g2diagnostic.GetDBInfoRequest" do
    end
    add_message "g2diagnostic.GetDBInfoResponse" do
      optional :result, :string, 1
    end
    add_message "g2diagnostic.GetLogicalCoresRequest" do
    end
    add_message "g2diagnostic.GetLogicalCoresResponse" do
      optional :result, :int32, 1
    end
    add_message "g2diagnostic.GetPhysicalCoresRequest" do
    end
    add_message "g2diagnostic.GetPhysicalCoresResponse" do
      optional :result, :int32, 1
    end
    add_message "g2diagnostic.GetTotalSystemMemoryRequest" do
    end
    add_message "g2diagnostic.GetTotalSystemMemoryResponse" do
      optional :result, :int64, 1
    end
    add_message "g2diagnostic.InitRequest" do
      optional :moduleName, :string, 1
      optional :iniParams, :string, 2
      optional :verboseLogging, :int64, 3
    end
    add_message "g2diagnostic.InitResponse" do
    end
    add_message "g2diagnostic.InitWithConfigIDRequest" do
      optional :moduleName, :string, 1
      optional :iniParams, :string, 2
      optional :initConfigID, :int64, 3
      optional :verboseLogging, :int64, 4
    end
    add_message "g2diagnostic.InitWithConfigIDResponse" do
    end
    add_message "g2diagnostic.ReinitRequest" do
      optional :initConfigID, :int64, 1
    end
    add_message "g2diagnostic.ReinitResponse" do
    end
    add_message "g2diagnostic.StreamEntityListBySizeRequest" do
      optional :entitySize, :int32, 1
    end
    add_message "g2diagnostic.StreamEntityListBySizeResponse" do
      optional :result, :string, 1
    end
  end
end

module G2diagnostic
  CheckDBPerfRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("g2diagnostic.CheckDBPerfRequest").msgclass
  CheckDBPerfResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("g2diagnostic.CheckDBPerfResponse").msgclass
  DestroyRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("g2diagnostic.DestroyRequest").msgclass
  DestroyResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("g2diagnostic.DestroyResponse").msgclass
  GetAvailableMemoryRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("g2diagnostic.GetAvailableMemoryRequest").msgclass
  GetAvailableMemoryResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("g2diagnostic.GetAvailableMemoryResponse").msgclass
  GetDBInfoRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("g2diagnostic.GetDBInfoRequest").msgclass
  GetDBInfoResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("g2diagnostic.GetDBInfoResponse").msgclass
  GetLogicalCoresRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("g2diagnostic.GetLogicalCoresRequest").msgclass
  GetLogicalCoresResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("g2diagnostic.GetLogicalCoresResponse").msgclass
  GetPhysicalCoresRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("g2diagnostic.GetPhysicalCoresRequest").msgclass
  GetPhysicalCoresResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("g2diagnostic.GetPhysicalCoresResponse").msgclass
  GetTotalSystemMemoryRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("g2diagnostic.GetTotalSystemMemoryRequest").msgclass
  GetTotalSystemMemoryResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("g2diagnostic.GetTotalSystemMemoryResponse").msgclass
  InitRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("g2diagnostic.InitRequest").msgclass
  InitResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("g2diagnostic.InitResponse").msgclass
  InitWithConfigIDRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("g2diagnostic.InitWithConfigIDRequest").msgclass
  InitWithConfigIDResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("g2diagnostic.InitWithConfigIDResponse").msgclass
  ReinitRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("g2diagnostic.ReinitRequest").msgclass
  ReinitResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("g2diagnostic.ReinitResponse").msgclass
  StreamEntityListBySizeRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("g2diagnostic.StreamEntityListBySizeRequest").msgclass
  StreamEntityListBySizeResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("g2diagnostic.StreamEntityListBySizeResponse").msgclass
end
