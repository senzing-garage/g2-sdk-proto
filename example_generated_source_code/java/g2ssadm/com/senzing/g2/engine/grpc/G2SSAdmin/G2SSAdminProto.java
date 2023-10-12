// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: g2ssadm.proto

package com.senzing.g2.engine.grpc.G2SSAdmin;

public final class G2SSAdminProto {
  private G2SSAdminProto() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2ssadm_CreateSaltInStoreRequest_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2ssadm_CreateSaltInStoreRequest_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2ssadm_CreateSaltInStoreResponse_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2ssadm_CreateSaltInStoreResponse_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2ssadm_DestroyRequest_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2ssadm_DestroyRequest_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2ssadm_DestroyResponse_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2ssadm_DestroyResponse_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2ssadm_InitRequest_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2ssadm_InitRequest_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2ssadm_InitResponse_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2ssadm_InitResponse_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2ssadm_InitializeNewTokenRequest_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2ssadm_InitializeNewTokenRequest_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2ssadm_InitializeNewTokenResponse_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2ssadm_InitializeNewTokenResponse_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2ssadm_ListRequest_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2ssadm_ListRequest_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2ssadm_ListResponse_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2ssadm_ListResponse_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2ssadm_PutRequest_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2ssadm_PutRequest_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2ssadm_PutResponse_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2ssadm_PutResponse_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2ssadm_ReinitializeTokenRequest_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2ssadm_ReinitializeTokenRequest_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2ssadm_ReinitializeTokenResponse_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2ssadm_ReinitializeTokenResponse_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2ssadm_SetupStoreRequest_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2ssadm_SetupStoreRequest_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2ssadm_SetupStoreResponse_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2ssadm_SetupStoreResponse_fieldAccessorTable;

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n\rg2ssadm.proto\022\007g2ssadm\"G\n\030CreateSaltIn" +
      "StoreRequest\022\r\n\005soPin\030\001 \001(\t\022\014\n\004name\030\002 \001(" +
      "\t\022\016\n\006method\030\003 \001(\t\"+\n\031CreateSaltInStoreRe" +
      "sponse\022\016\n\006result\030\001 \001(\t\"\020\n\016DestroyRequest" +
      "\"\021\n\017DestroyResponse\"L\n\013InitRequest\022\022\n\nmo" +
      "duleName\030\001 \001(\t\022\021\n\tiniParams\030\002 \001(\t\022\026\n\016ver" +
      "boseLogging\030\003 \001(\003\"\016\n\014InitResponse\"R\n\031Ini" +
      "tializeNewTokenRequest\022\024\n\014defaultSOPin\030\001" +
      " \001(\t\022\020\n\010newSOPin\030\002 \001(\t\022\r\n\005label\030\003 \001(\t\"\034\n" +
      "\032InitializeNewTokenResponse\"\r\n\013ListReque" +
      "st\"\036\n\014ListResponse\022\016\n\006result\030\001 \001(\t\"9\n\nPu" +
      "tRequest\022\r\n\005soPin\030\001 \001(\t\022\r\n\005label\030\002 \001(\t\022\r" +
      "\n\005value\030\003 \001(\t\"\r\n\013PutResponse\"8\n\030Reinitia" +
      "lizeTokenRequest\022\r\n\005soPin\030\001 \001(\t\022\r\n\005label" +
      "\030\002 \001(\t\"\033\n\031ReinitializeTokenResponse\"\"\n\021S" +
      "etupStoreRequest\022\r\n\005soPin\030\001 \001(\t\"\024\n\022Setup" +
      "StoreResponse2\321\004\n\007G2Ssadm\022\\\n\021CreateSaltI" +
      "nStore\022!.g2ssadm.CreateSaltInStoreReques" +
      "t\032\".g2ssadm.CreateSaltInStoreResponse\"\000\022" +
      ">\n\007Destroy\022\027.g2ssadm.DestroyRequest\032\030.g2" +
      "ssadm.DestroyResponse\"\000\0225\n\004Init\022\024.g2ssad" +
      "m.InitRequest\032\025.g2ssadm.InitResponse\"\000\022_" +
      "\n\022InitializeNewToken\022\".g2ssadm.Initializ" +
      "eNewTokenRequest\032#.g2ssadm.InitializeNew" +
      "TokenResponse\"\000\0225\n\004List\022\024.g2ssadm.ListRe" +
      "quest\032\025.g2ssadm.ListResponse\"\000\0222\n\003Put\022\023." +
      "g2ssadm.PutRequest\032\024.g2ssadm.PutResponse" +
      "\"\000\022\\\n\021ReinitializeToken\022!.g2ssadm.Reinit" +
      "ializeTokenRequest\032\".g2ssadm.Reinitializ" +
      "eTokenResponse\"\000\022G\n\nSetupStore\022\032.g2ssadm" +
      ".SetupStoreRequest\032\033.g2ssadm.SetupStoreR" +
      "esponse\"\000Bc\n$com.senzing.g2.engine.grpc." +
      "G2SSAdminB\016G2SSAdminProtoP\001Z)github.com/" +
      "senzing/g2-sdk-go-grpc/g2ssadmb\006proto3"
    };
    descriptor = com.google.protobuf.Descriptors.FileDescriptor
      .internalBuildGeneratedFileFrom(descriptorData,
        new com.google.protobuf.Descriptors.FileDescriptor[] {
        });
    internal_static_g2ssadm_CreateSaltInStoreRequest_descriptor =
      getDescriptor().getMessageTypes().get(0);
    internal_static_g2ssadm_CreateSaltInStoreRequest_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2ssadm_CreateSaltInStoreRequest_descriptor,
        new java.lang.String[] { "SoPin", "Name", "Method", });
    internal_static_g2ssadm_CreateSaltInStoreResponse_descriptor =
      getDescriptor().getMessageTypes().get(1);
    internal_static_g2ssadm_CreateSaltInStoreResponse_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2ssadm_CreateSaltInStoreResponse_descriptor,
        new java.lang.String[] { "Result", });
    internal_static_g2ssadm_DestroyRequest_descriptor =
      getDescriptor().getMessageTypes().get(2);
    internal_static_g2ssadm_DestroyRequest_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2ssadm_DestroyRequest_descriptor,
        new java.lang.String[] { });
    internal_static_g2ssadm_DestroyResponse_descriptor =
      getDescriptor().getMessageTypes().get(3);
    internal_static_g2ssadm_DestroyResponse_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2ssadm_DestroyResponse_descriptor,
        new java.lang.String[] { });
    internal_static_g2ssadm_InitRequest_descriptor =
      getDescriptor().getMessageTypes().get(4);
    internal_static_g2ssadm_InitRequest_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2ssadm_InitRequest_descriptor,
        new java.lang.String[] { "ModuleName", "IniParams", "VerboseLogging", });
    internal_static_g2ssadm_InitResponse_descriptor =
      getDescriptor().getMessageTypes().get(5);
    internal_static_g2ssadm_InitResponse_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2ssadm_InitResponse_descriptor,
        new java.lang.String[] { });
    internal_static_g2ssadm_InitializeNewTokenRequest_descriptor =
      getDescriptor().getMessageTypes().get(6);
    internal_static_g2ssadm_InitializeNewTokenRequest_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2ssadm_InitializeNewTokenRequest_descriptor,
        new java.lang.String[] { "DefaultSOPin", "NewSOPin", "Label", });
    internal_static_g2ssadm_InitializeNewTokenResponse_descriptor =
      getDescriptor().getMessageTypes().get(7);
    internal_static_g2ssadm_InitializeNewTokenResponse_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2ssadm_InitializeNewTokenResponse_descriptor,
        new java.lang.String[] { });
    internal_static_g2ssadm_ListRequest_descriptor =
      getDescriptor().getMessageTypes().get(8);
    internal_static_g2ssadm_ListRequest_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2ssadm_ListRequest_descriptor,
        new java.lang.String[] { });
    internal_static_g2ssadm_ListResponse_descriptor =
      getDescriptor().getMessageTypes().get(9);
    internal_static_g2ssadm_ListResponse_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2ssadm_ListResponse_descriptor,
        new java.lang.String[] { "Result", });
    internal_static_g2ssadm_PutRequest_descriptor =
      getDescriptor().getMessageTypes().get(10);
    internal_static_g2ssadm_PutRequest_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2ssadm_PutRequest_descriptor,
        new java.lang.String[] { "SoPin", "Label", "Value", });
    internal_static_g2ssadm_PutResponse_descriptor =
      getDescriptor().getMessageTypes().get(11);
    internal_static_g2ssadm_PutResponse_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2ssadm_PutResponse_descriptor,
        new java.lang.String[] { });
    internal_static_g2ssadm_ReinitializeTokenRequest_descriptor =
      getDescriptor().getMessageTypes().get(12);
    internal_static_g2ssadm_ReinitializeTokenRequest_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2ssadm_ReinitializeTokenRequest_descriptor,
        new java.lang.String[] { "SoPin", "Label", });
    internal_static_g2ssadm_ReinitializeTokenResponse_descriptor =
      getDescriptor().getMessageTypes().get(13);
    internal_static_g2ssadm_ReinitializeTokenResponse_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2ssadm_ReinitializeTokenResponse_descriptor,
        new java.lang.String[] { });
    internal_static_g2ssadm_SetupStoreRequest_descriptor =
      getDescriptor().getMessageTypes().get(14);
    internal_static_g2ssadm_SetupStoreRequest_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2ssadm_SetupStoreRequest_descriptor,
        new java.lang.String[] { "SoPin", });
    internal_static_g2ssadm_SetupStoreResponse_descriptor =
      getDescriptor().getMessageTypes().get(15);
    internal_static_g2ssadm_SetupStoreResponse_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2ssadm_SetupStoreResponse_descriptor,
        new java.lang.String[] { });
  }

  // @@protoc_insertion_point(outer_class_scope)
}
