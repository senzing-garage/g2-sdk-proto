# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: szengine.proto

require 'google/protobuf'

Google::Protobuf::DescriptorPool.generated_pool.build do
  add_file("szengine.proto", :syntax => :proto3) do
    add_message "szengine.AddRecordRequest" do
      optional :dataSourceCode, :string, 1
      optional :recordId, :string, 2
      optional :recordDefinition, :string, 3
      optional :flags, :int64, 4
    end
    add_message "szengine.AddRecordResponse" do
      optional :result, :string, 1
    end
    add_message "szengine.CloseExportRequest" do
      optional :responseHandle, :int64, 1
    end
    add_message "szengine.CloseExportResponse" do
    end
    add_message "szengine.CountRedoRecordsRequest" do
    end
    add_message "szengine.CountRedoRecordsResponse" do
      optional :result, :int64, 1
    end
    add_message "szengine.DeleteRecordRequest" do
      optional :dataSourceCode, :string, 1
      optional :recordId, :string, 2
      optional :flags, :int64, 3
    end
    add_message "szengine.DeleteRecordResponse" do
      optional :result, :string, 1
    end
    add_message "szengine.ExportCsvEntityReportRequest" do
      optional :csvColumnList, :string, 1
      optional :flags, :int64, 2
    end
    add_message "szengine.ExportCsvEntityReportResponse" do
      optional :result, :int64, 1
    end
    add_message "szengine.ExportJsonEntityReportRequest" do
      optional :flags, :int64, 1
    end
    add_message "szengine.ExportJsonEntityReportResponse" do
      optional :result, :int64, 1
    end
    add_message "szengine.FetchNextRequest" do
      optional :responseHandle, :int64, 1
    end
    add_message "szengine.FetchNextResponse" do
      optional :result, :string, 1
    end
    add_message "szengine.FindNetworkByEntityIdRequest" do
      optional :entityList, :string, 1
      optional :maxDegrees, :int64, 2
      optional :buildOutDegree, :int64, 3
      optional :maxEntities, :int64, 4
      optional :flags, :int64, 5
    end
    add_message "szengine.FindNetworkByEntityIdResponse" do
      optional :result, :string, 1
    end
    add_message "szengine.FindNetworkByRecordIdRequest" do
      optional :recordList, :string, 1
      optional :maxDegrees, :int64, 2
      optional :buildOutDegree, :int64, 3
      optional :maxEntities, :int64, 4
      optional :flags, :int64, 5
    end
    add_message "szengine.FindNetworkByRecordIdResponse" do
      optional :result, :string, 1
    end
    add_message "szengine.FindPathByEntityIdRequest" do
      optional :startEntityId, :int64, 1
      optional :endEntityId, :int64, 2
      optional :maxDegrees, :int64, 3
      optional :exclusions, :string, 4
      optional :requiredDataSources, :string, 5
      optional :flags, :int64, 6
    end
    add_message "szengine.FindPathByEntityIdResponse" do
      optional :result, :string, 1
    end
    add_message "szengine.FindPathByRecordIdRequest" do
      optional :startDataSourceCode, :string, 1
      optional :startRecordId, :string, 2
      optional :endDataSourceCode, :string, 3
      optional :endRecordId, :string, 4
      optional :maxDegrees, :int64, 5
      optional :exclusions, :string, 6
      optional :requiredDataSources, :string, 7
      optional :flags, :int64, 8
    end
    add_message "szengine.FindPathByRecordIdResponse" do
      optional :result, :string, 1
    end
    add_message "szengine.GetActiveConfigIdRequest" do
    end
    add_message "szengine.GetActiveConfigIdResponse" do
      optional :result, :int64, 1
    end
    add_message "szengine.GetEntityByEntityIdRequest" do
      optional :entityId, :int64, 1
      optional :flags, :int64, 2
    end
    add_message "szengine.GetEntityByEntityIdResponse" do
      optional :result, :string, 1
    end
    add_message "szengine.GetEntityByRecordIdRequest" do
      optional :dataSourceCode, :string, 1
      optional :recordId, :string, 2
      optional :flags, :int64, 3
    end
    add_message "szengine.GetEntityByRecordIdResponse" do
      optional :result, :string, 1
    end
    add_message "szengine.GetRecordRequest" do
      optional :dataSourceCode, :string, 1
      optional :recordId, :string, 2
      optional :flags, :int64, 3
    end
    add_message "szengine.GetRecordResponse" do
      optional :result, :string, 1
    end
    add_message "szengine.GetRedoRecordRequest" do
    end
    add_message "szengine.GetRedoRecordResponse" do
      optional :result, :string, 1
    end
    add_message "szengine.GetRepositoryLastModifiedTimeRequest" do
    end
    add_message "szengine.GetRepositoryLastModifiedTimeResponse" do
      optional :result, :int64, 1
    end
    add_message "szengine.GetVirtualEntityByRecordIdRequest" do
      optional :recordList, :string, 1
      optional :flags, :int64, 2
    end
    add_message "szengine.GetVirtualEntityByRecordIdResponse" do
      optional :result, :string, 1
    end
    add_message "szengine.HowEntityByEntityIdRequest" do
      optional :entityId, :int64, 1
      optional :flags, :int64, 2
    end
    add_message "szengine.HowEntityByEntityIdResponse" do
      optional :result, :string, 1
    end
    add_message "szengine.PrimeEngineRequest" do
    end
    add_message "szengine.PrimeEngineResponse" do
    end
    add_message "szengine.ProcessRedoRecordRequest" do
      optional :redoRecord, :string, 1
      optional :flags, :int64, 2
    end
    add_message "szengine.ProcessRedoRecordResponse" do
      optional :result, :string, 1
    end
    add_message "szengine.ReevaluateEntityRequest" do
      optional :entityId, :int64, 1
      optional :flags, :int64, 2
    end
    add_message "szengine.ReevaluateEntityResponse" do
      optional :result, :string, 1
    end
    add_message "szengine.ReevaluateRecordRequest" do
      optional :dataSourceCode, :string, 1
      optional :recordId, :string, 2
      optional :flags, :int64, 3
    end
    add_message "szengine.ReevaluateRecordResponse" do
      optional :result, :string, 1
    end
    add_message "szengine.ReinitializeRequest" do
      optional :configId, :int64, 1
    end
    add_message "szengine.ReinitializeResponse" do
    end
    add_message "szengine.SearchByAttributesRequest" do
      optional :attributes, :string, 1
      optional :searchProfile, :string, 2
      optional :flags, :int64, 3
    end
    add_message "szengine.SearchByAttributesResponse" do
      optional :result, :string, 1
    end
    add_message "szengine.GetStatsRequest" do
    end
    add_message "szengine.GetStatsResponse" do
      optional :result, :string, 1
    end
    add_message "szengine.StreamExportCsvEntityReportRequest" do
      optional :csvColumnList, :string, 1
      optional :flags, :int64, 2
    end
    add_message "szengine.StreamExportCsvEntityReportResponse" do
      optional :result, :string, 1
    end
    add_message "szengine.StreamExportJsonEntityReportRequest" do
      optional :flags, :int64, 1
    end
    add_message "szengine.StreamExportJsonEntityReportResponse" do
      optional :result, :string, 1
    end
    add_message "szengine.WhyEntitiesRequest" do
      optional :entityId1, :int64, 1
      optional :entityId2, :int64, 2
      optional :flags, :int64, 3
    end
    add_message "szengine.WhyEntitiesResponse" do
      optional :result, :string, 1
    end
    add_message "szengine.WhyRecordInEntityRequest" do
      optional :dataSourceCode, :string, 1
      optional :recordId, :string, 2
      optional :flags, :int64, 3
    end
    add_message "szengine.WhyRecordInEntityResponse" do
      optional :result, :string, 1
    end
    add_message "szengine.WhyRecordsRequest" do
      optional :dataSourceCode1, :string, 1
      optional :recordId1, :string, 2
      optional :dataSourceCode2, :string, 3
      optional :recordId2, :string, 4
      optional :flags, :int64, 5
    end
    add_message "szengine.WhyRecordsResponse" do
      optional :result, :string, 1
    end
  end
end

module Szengine
  AddRecordRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.AddRecordRequest").msgclass
  AddRecordResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.AddRecordResponse").msgclass
  CloseExportRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.CloseExportRequest").msgclass
  CloseExportResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.CloseExportResponse").msgclass
  CountRedoRecordsRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.CountRedoRecordsRequest").msgclass
  CountRedoRecordsResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.CountRedoRecordsResponse").msgclass
  DeleteRecordRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.DeleteRecordRequest").msgclass
  DeleteRecordResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.DeleteRecordResponse").msgclass
  ExportCsvEntityReportRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.ExportCsvEntityReportRequest").msgclass
  ExportCsvEntityReportResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.ExportCsvEntityReportResponse").msgclass
  ExportJsonEntityReportRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.ExportJsonEntityReportRequest").msgclass
  ExportJsonEntityReportResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.ExportJsonEntityReportResponse").msgclass
  FetchNextRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.FetchNextRequest").msgclass
  FetchNextResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.FetchNextResponse").msgclass
  FindNetworkByEntityIdRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.FindNetworkByEntityIdRequest").msgclass
  FindNetworkByEntityIdResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.FindNetworkByEntityIdResponse").msgclass
  FindNetworkByRecordIdRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.FindNetworkByRecordIdRequest").msgclass
  FindNetworkByRecordIdResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.FindNetworkByRecordIdResponse").msgclass
  FindPathByEntityIdRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.FindPathByEntityIdRequest").msgclass
  FindPathByEntityIdResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.FindPathByEntityIdResponse").msgclass
  FindPathByRecordIdRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.FindPathByRecordIdRequest").msgclass
  FindPathByRecordIdResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.FindPathByRecordIdResponse").msgclass
  GetActiveConfigIdRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.GetActiveConfigIdRequest").msgclass
  GetActiveConfigIdResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.GetActiveConfigIdResponse").msgclass
  GetEntityByEntityIdRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.GetEntityByEntityIdRequest").msgclass
  GetEntityByEntityIdResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.GetEntityByEntityIdResponse").msgclass
  GetEntityByRecordIdRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.GetEntityByRecordIdRequest").msgclass
  GetEntityByRecordIdResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.GetEntityByRecordIdResponse").msgclass
  GetRecordRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.GetRecordRequest").msgclass
  GetRecordResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.GetRecordResponse").msgclass
  GetRedoRecordRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.GetRedoRecordRequest").msgclass
  GetRedoRecordResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.GetRedoRecordResponse").msgclass
  GetRepositoryLastModifiedTimeRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.GetRepositoryLastModifiedTimeRequest").msgclass
  GetRepositoryLastModifiedTimeResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.GetRepositoryLastModifiedTimeResponse").msgclass
  GetVirtualEntityByRecordIdRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.GetVirtualEntityByRecordIdRequest").msgclass
  GetVirtualEntityByRecordIdResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.GetVirtualEntityByRecordIdResponse").msgclass
  HowEntityByEntityIdRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.HowEntityByEntityIdRequest").msgclass
  HowEntityByEntityIdResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.HowEntityByEntityIdResponse").msgclass
  PrimeEngineRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.PrimeEngineRequest").msgclass
  PrimeEngineResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.PrimeEngineResponse").msgclass
  ProcessRedoRecordRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.ProcessRedoRecordRequest").msgclass
  ProcessRedoRecordResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.ProcessRedoRecordResponse").msgclass
  ReevaluateEntityRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.ReevaluateEntityRequest").msgclass
  ReevaluateEntityResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.ReevaluateEntityResponse").msgclass
  ReevaluateRecordRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.ReevaluateRecordRequest").msgclass
  ReevaluateRecordResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.ReevaluateRecordResponse").msgclass
  ReinitializeRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.ReinitializeRequest").msgclass
  ReinitializeResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.ReinitializeResponse").msgclass
  SearchByAttributesRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.SearchByAttributesRequest").msgclass
  SearchByAttributesResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.SearchByAttributesResponse").msgclass
  GetStatsRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.GetStatsRequest").msgclass
  GetStatsResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.GetStatsResponse").msgclass
  StreamExportCsvEntityReportRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.StreamExportCsvEntityReportRequest").msgclass
  StreamExportCsvEntityReportResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.StreamExportCsvEntityReportResponse").msgclass
  StreamExportJsonEntityReportRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.StreamExportJsonEntityReportRequest").msgclass
  StreamExportJsonEntityReportResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.StreamExportJsonEntityReportResponse").msgclass
  WhyEntitiesRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.WhyEntitiesRequest").msgclass
  WhyEntitiesResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.WhyEntitiesResponse").msgclass
  WhyRecordInEntityRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.WhyRecordInEntityRequest").msgclass
  WhyRecordInEntityResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.WhyRecordInEntityResponse").msgclass
  WhyRecordsRequest = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.WhyRecordsRequest").msgclass
  WhyRecordsResponse = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("szengine.WhyRecordsResponse").msgclass
end
