# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: g2product.proto

require 'google/protobuf'

Google::Protobuf::DescriptorPool.generated_pool.build do
  add_file("g2product.proto", :syntax => :proto3) do
    add_message "g2product.DestroyRequest" do
    end
    add_message "g2product.DestroyResponse" do
    end
    add_message "g2product.InitRequest" do
      optional :moduleName, :string, 1
      optional :iniParams, :string, 2
      optional :verboseLogging, :int64, 3
    end
    add_message "g2product.InitResponse" do
    end
    add_message "g2product.LicenseRequest" do
    end
    add_message "g2product.LicenseResponse" do
      optional :result, :string, 1
    end
    add_message "g2product.VersionRequest" do
    end
    add_message "g2product.VersionResponse" do
      optional :result, :string, 1
    end
  end
end

module G2product
  DestroyRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("g2product.DestroyRequest").msgclass
  DestroyResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("g2product.DestroyResponse").msgclass
  InitRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("g2product.InitRequest").msgclass
  InitResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("g2product.InitResponse").msgclass
  LicenseRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("g2product.LicenseRequest").msgclass
  LicenseResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("g2product.LicenseResponse").msgclass
  VersionRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("g2product.VersionRequest").msgclass
  VersionResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("g2product.VersionResponse").msgclass
end
