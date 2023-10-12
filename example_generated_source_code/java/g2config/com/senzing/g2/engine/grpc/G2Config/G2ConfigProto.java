// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: g2config.proto

package com.senzing.g2.engine.grpc.G2Config;

public final class G2ConfigProto {
  private G2ConfigProto() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2config_AddDataSourceRequest_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2config_AddDataSourceRequest_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2config_AddDataSourceResponse_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2config_AddDataSourceResponse_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2config_CloseRequest_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2config_CloseRequest_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2config_CloseResponse_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2config_CloseResponse_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2config_CreateRequest_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2config_CreateRequest_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2config_CreateResponse_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2config_CreateResponse_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2config_DeleteDataSourceRequest_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2config_DeleteDataSourceRequest_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2config_DeleteDataSourceResponse_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2config_DeleteDataSourceResponse_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2config_DestroyRequest_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2config_DestroyRequest_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2config_DestroyResponse_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2config_DestroyResponse_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2config_InitRequest_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2config_InitRequest_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2config_InitResponse_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2config_InitResponse_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2config_ListDataSourcesRequest_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2config_ListDataSourcesRequest_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2config_ListDataSourcesResponse_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2config_ListDataSourcesResponse_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2config_LoadRequest_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2config_LoadRequest_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2config_LoadResponse_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2config_LoadResponse_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2config_SaveRequest_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2config_SaveRequest_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2config_SaveResponse_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2config_SaveResponse_fieldAccessorTable;

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n\016g2config.proto\022\010g2config\"?\n\024AddDataSou" +
      "rceRequest\022\024\n\014configHandle\030\001 \001(\003\022\021\n\tinpu" +
      "tJson\030\002 \001(\t\"\'\n\025AddDataSourceResponse\022\016\n\006" +
      "result\030\001 \001(\t\"$\n\014CloseRequest\022\024\n\014configHa" +
      "ndle\030\001 \001(\003\"\017\n\rCloseResponse\"\017\n\rCreateReq" +
      "uest\" \n\016CreateResponse\022\016\n\006result\030\001 \001(\003\"B" +
      "\n\027DeleteDataSourceRequest\022\024\n\014configHandl" +
      "e\030\001 \001(\003\022\021\n\tinputJson\030\002 \001(\t\"\032\n\030DeleteData" +
      "SourceResponse\"\020\n\016DestroyRequest\"\021\n\017Dest" +
      "royResponse\"L\n\013InitRequest\022\022\n\nmoduleName" +
      "\030\001 \001(\t\022\021\n\tiniParams\030\002 \001(\t\022\026\n\016verboseLogg" +
      "ing\030\003 \001(\003\"\016\n\014InitResponse\".\n\026ListDataSou" +
      "rcesRequest\022\024\n\014configHandle\030\001 \001(\003\")\n\027Lis" +
      "tDataSourcesResponse\022\016\n\006result\030\001 \001(\t\"!\n\013" +
      "LoadRequest\022\022\n\njsonConfig\030\001 \001(\t\"\036\n\014LoadR" +
      "esponse\022\016\n\006result\030\001 \001(\003\"#\n\013SaveRequest\022\024" +
      "\n\014configHandle\030\001 \001(\003\"\036\n\014SaveResponse\022\016\n\006" +
      "result\030\001 \001(\t2\375\004\n\010G2Config\022R\n\rAddDataSour" +
      "ce\022\036.g2config.AddDataSourceRequest\032\037.g2c" +
      "onfig.AddDataSourceResponse\"\000\022:\n\005Close\022\026" +
      ".g2config.CloseRequest\032\027.g2config.CloseR" +
      "esponse\"\000\022=\n\006Create\022\027.g2config.CreateReq" +
      "uest\032\030.g2config.CreateResponse\"\000\022[\n\020Dele" +
      "teDataSource\022!.g2config.DeleteDataSource" +
      "Request\032\".g2config.DeleteDataSourceRespo" +
      "nse\"\000\022@\n\007Destroy\022\030.g2config.DestroyReque" +
      "st\032\031.g2config.DestroyResponse\"\000\0227\n\004Init\022" +
      "\025.g2config.InitRequest\032\026.g2config.InitRe" +
      "sponse\"\000\022X\n\017ListDataSources\022 .g2config.L" +
      "istDataSourcesRequest\032!.g2config.ListDat" +
      "aSourcesResponse\"\000\0227\n\004Load\022\025.g2config.Lo" +
      "adRequest\032\026.g2config.LoadResponse\"\000\0227\n\004S" +
      "ave\022\025.g2config.SaveRequest\032\026.g2config.Sa" +
      "veResponse\"\000Bb\n#com.senzing.g2.engine.gr" +
      "pc.G2ConfigB\rG2ConfigProtoP\001Z*github.com" +
      "/senzing/g2-sdk-go-grpc/g2configb\006proto3"
    };
    descriptor = com.google.protobuf.Descriptors.FileDescriptor
      .internalBuildGeneratedFileFrom(descriptorData,
        new com.google.protobuf.Descriptors.FileDescriptor[] {
        });
    internal_static_g2config_AddDataSourceRequest_descriptor =
      getDescriptor().getMessageTypes().get(0);
    internal_static_g2config_AddDataSourceRequest_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2config_AddDataSourceRequest_descriptor,
        new java.lang.String[] { "ConfigHandle", "InputJson", });
    internal_static_g2config_AddDataSourceResponse_descriptor =
      getDescriptor().getMessageTypes().get(1);
    internal_static_g2config_AddDataSourceResponse_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2config_AddDataSourceResponse_descriptor,
        new java.lang.String[] { "Result", });
    internal_static_g2config_CloseRequest_descriptor =
      getDescriptor().getMessageTypes().get(2);
    internal_static_g2config_CloseRequest_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2config_CloseRequest_descriptor,
        new java.lang.String[] { "ConfigHandle", });
    internal_static_g2config_CloseResponse_descriptor =
      getDescriptor().getMessageTypes().get(3);
    internal_static_g2config_CloseResponse_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2config_CloseResponse_descriptor,
        new java.lang.String[] { });
    internal_static_g2config_CreateRequest_descriptor =
      getDescriptor().getMessageTypes().get(4);
    internal_static_g2config_CreateRequest_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2config_CreateRequest_descriptor,
        new java.lang.String[] { });
    internal_static_g2config_CreateResponse_descriptor =
      getDescriptor().getMessageTypes().get(5);
    internal_static_g2config_CreateResponse_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2config_CreateResponse_descriptor,
        new java.lang.String[] { "Result", });
    internal_static_g2config_DeleteDataSourceRequest_descriptor =
      getDescriptor().getMessageTypes().get(6);
    internal_static_g2config_DeleteDataSourceRequest_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2config_DeleteDataSourceRequest_descriptor,
        new java.lang.String[] { "ConfigHandle", "InputJson", });
    internal_static_g2config_DeleteDataSourceResponse_descriptor =
      getDescriptor().getMessageTypes().get(7);
    internal_static_g2config_DeleteDataSourceResponse_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2config_DeleteDataSourceResponse_descriptor,
        new java.lang.String[] { });
    internal_static_g2config_DestroyRequest_descriptor =
      getDescriptor().getMessageTypes().get(8);
    internal_static_g2config_DestroyRequest_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2config_DestroyRequest_descriptor,
        new java.lang.String[] { });
    internal_static_g2config_DestroyResponse_descriptor =
      getDescriptor().getMessageTypes().get(9);
    internal_static_g2config_DestroyResponse_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2config_DestroyResponse_descriptor,
        new java.lang.String[] { });
    internal_static_g2config_InitRequest_descriptor =
      getDescriptor().getMessageTypes().get(10);
    internal_static_g2config_InitRequest_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2config_InitRequest_descriptor,
        new java.lang.String[] { "ModuleName", "IniParams", "VerboseLogging", });
    internal_static_g2config_InitResponse_descriptor =
      getDescriptor().getMessageTypes().get(11);
    internal_static_g2config_InitResponse_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2config_InitResponse_descriptor,
        new java.lang.String[] { });
    internal_static_g2config_ListDataSourcesRequest_descriptor =
      getDescriptor().getMessageTypes().get(12);
    internal_static_g2config_ListDataSourcesRequest_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2config_ListDataSourcesRequest_descriptor,
        new java.lang.String[] { "ConfigHandle", });
    internal_static_g2config_ListDataSourcesResponse_descriptor =
      getDescriptor().getMessageTypes().get(13);
    internal_static_g2config_ListDataSourcesResponse_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2config_ListDataSourcesResponse_descriptor,
        new java.lang.String[] { "Result", });
    internal_static_g2config_LoadRequest_descriptor =
      getDescriptor().getMessageTypes().get(14);
    internal_static_g2config_LoadRequest_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2config_LoadRequest_descriptor,
        new java.lang.String[] { "JsonConfig", });
    internal_static_g2config_LoadResponse_descriptor =
      getDescriptor().getMessageTypes().get(15);
    internal_static_g2config_LoadResponse_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2config_LoadResponse_descriptor,
        new java.lang.String[] { "Result", });
    internal_static_g2config_SaveRequest_descriptor =
      getDescriptor().getMessageTypes().get(16);
    internal_static_g2config_SaveRequest_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2config_SaveRequest_descriptor,
        new java.lang.String[] { "ConfigHandle", });
    internal_static_g2config_SaveResponse_descriptor =
      getDescriptor().getMessageTypes().get(17);
    internal_static_g2config_SaveResponse_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2config_SaveResponse_descriptor,
        new java.lang.String[] { "Result", });
  }

  // @@protoc_insertion_point(outer_class_scope)
}
