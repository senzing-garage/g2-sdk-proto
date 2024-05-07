# Generated by the protocol buffer compiler.  DO NOT EDIT!
# Source: szengine.proto for package 'szengine'

require 'grpc'
require 'szengine_pb'

module Szengine
  module SzEngine
    class Service

      include ::GRPC::GenericService

      self.marshal_class_method = :encode
      self.unmarshal_class_method = :decode
      self.service_name = 'szengine.SzEngine'

      rpc :AddRecord, ::Szengine::AddRecordRequest, ::Szengine::AddRecordResponse
      rpc :CloseExport, ::Szengine::CloseExportRequest, ::Szengine::CloseExportResponse
      rpc :CountRedoRecords, ::Szengine::CountRedoRecordsRequest, ::Szengine::CountRedoRecordsResponse
      rpc :DeleteRecord, ::Szengine::DeleteRecordRequest, ::Szengine::DeleteRecordResponse
      rpc :ExportCsvEntityReport, ::Szengine::ExportCsvEntityReportRequest, ::Szengine::ExportCsvEntityReportResponse
      rpc :ExportJsonEntityReport, ::Szengine::ExportJsonEntityReportRequest, ::Szengine::ExportJsonEntityReportResponse
      rpc :FetchNext, ::Szengine::FetchNextRequest, ::Szengine::FetchNextResponse
      rpc :FindInterestingEntitiesByEntityId, ::Szengine::FindInterestingEntitiesByEntityIdRequest, ::Szengine::FindInterestingEntitiesByEntityIdResponse
      rpc :FindInterestingEntitiesByRecordId, ::Szengine::FindInterestingEntitiesByRecordIdRequest, ::Szengine::FindInterestingEntitiesByRecordIdResponse
      rpc :FindNetworkByEntityId, ::Szengine::FindNetworkByEntityIdRequest, ::Szengine::FindNetworkByEntityIdResponse
      rpc :FindNetworkByRecordId, ::Szengine::FindNetworkByRecordIdRequest, ::Szengine::FindNetworkByRecordIdResponse
      rpc :FindPathByEntityId, ::Szengine::FindPathByEntityIdRequest, ::Szengine::FindPathByEntityIdResponse
      rpc :FindPathByRecordId, ::Szengine::FindPathByRecordIdRequest, ::Szengine::FindPathByRecordIdResponse
      rpc :GetActiveConfigId, ::Szengine::GetActiveConfigIdRequest, ::Szengine::GetActiveConfigIdResponse
      rpc :GetEntityByEntityId, ::Szengine::GetEntityByEntityIdRequest, ::Szengine::GetEntityByEntityIdResponse
      rpc :GetEntityByRecordId, ::Szengine::GetEntityByRecordIdRequest, ::Szengine::GetEntityByRecordIdResponse
      rpc :GetRecord, ::Szengine::GetRecordRequest, ::Szengine::GetRecordResponse
      rpc :GetRedoRecord, ::Szengine::GetRedoRecordRequest, ::Szengine::GetRedoRecordResponse
      rpc :GetStats, ::Szengine::GetStatsRequest, ::Szengine::GetStatsResponse
      rpc :GetVirtualEntityByRecordId, ::Szengine::GetVirtualEntityByRecordIdRequest, ::Szengine::GetVirtualEntityByRecordIdResponse
      rpc :HowEntityByEntityId, ::Szengine::HowEntityByEntityIdRequest, ::Szengine::HowEntityByEntityIdResponse
      rpc :PrimeEngine, ::Szengine::PrimeEngineRequest, ::Szengine::PrimeEngineResponse
      rpc :ProcessRedoRecord, ::Szengine::ProcessRedoRecordRequest, ::Szengine::ProcessRedoRecordResponse
      rpc :ReevaluateEntity, ::Szengine::ReevaluateEntityRequest, ::Szengine::ReevaluateEntityResponse
      rpc :ReevaluateRecord, ::Szengine::ReevaluateRecordRequest, ::Szengine::ReevaluateRecordResponse
      rpc :Reinitialize, ::Szengine::ReinitializeRequest, ::Szengine::ReinitializeResponse
      rpc :SearchByAttributes, ::Szengine::SearchByAttributesRequest, ::Szengine::SearchByAttributesResponse
      rpc :StreamExportCsvEntityReport, ::Szengine::StreamExportCsvEntityReportRequest, stream(::Szengine::StreamExportCsvEntityReportResponse)
      rpc :StreamExportJsonEntityReport, ::Szengine::StreamExportJsonEntityReportRequest, stream(::Szengine::StreamExportJsonEntityReportResponse)
      rpc :WhyEntities, ::Szengine::WhyEntitiesRequest, ::Szengine::WhyEntitiesResponse
      rpc :WhyRecordInEntity, ::Szengine::WhyRecordInEntityRequest, ::Szengine::WhyRecordInEntityResponse
      rpc :WhyRecords, ::Szengine::WhyRecordsRequest, ::Szengine::WhyRecordsResponse
    end

    Stub = Service.rpc_stub_class
  end
end
