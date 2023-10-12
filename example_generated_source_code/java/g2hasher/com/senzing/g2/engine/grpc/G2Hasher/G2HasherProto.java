// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: g2hasher.proto

package com.senzing.g2.engine.grpc.G2Hasher;

public final class G2HasherProto {
  private G2HasherProto() {}
  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistryLite registry) {
  }

  public static void registerAllExtensions(
      com.google.protobuf.ExtensionRegistry registry) {
    registerAllExtensions(
        (com.google.protobuf.ExtensionRegistryLite) registry);
  }
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2hasher_DestroyRequest_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2hasher_DestroyRequest_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2hasher_DestroyResponse_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2hasher_DestroyResponse_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2hasher_ExportTokenLibraryRequest_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2hasher_ExportTokenLibraryRequest_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2hasher_ExportTokenLibraryResponse_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2hasher_ExportTokenLibraryResponse_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2hasher_InitRequest_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2hasher_InitRequest_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2hasher_InitResponse_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2hasher_InitResponse_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2hasher_InitWithConfigRequest_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2hasher_InitWithConfigRequest_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2hasher_InitWithConfigResponse_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2hasher_InitWithConfigResponse_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2hasher_ProcessRequest_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2hasher_ProcessRequest_fieldAccessorTable;
  static final com.google.protobuf.Descriptors.Descriptor
    internal_static_g2hasher_ProcessResponse_descriptor;
  static final 
    com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internal_static_g2hasher_ProcessResponse_fieldAccessorTable;

  public static com.google.protobuf.Descriptors.FileDescriptor
      getDescriptor() {
    return descriptor;
  }
  private static  com.google.protobuf.Descriptors.FileDescriptor
      descriptor;
  static {
    java.lang.String[] descriptorData = {
      "\n\016g2hasher.proto\022\010g2hasher\"\020\n\016DestroyReq" +
      "uest\"\021\n\017DestroyResponse\"\033\n\031ExportTokenLi" +
      "braryRequest\",\n\032ExportTokenLibraryRespon" +
      "se\022\016\n\006result\030\001 \001(\t\"L\n\013InitRequest\022\022\n\nmod" +
      "uleName\030\001 \001(\t\022\021\n\tiniParams\030\002 \001(\t\022\026\n\016verb" +
      "oseLogging\030\003 \001(\003\"\016\n\014InitResponse\"j\n\025Init" +
      "WithConfigRequest\022\022\n\nmoduleName\030\001 \001(\t\022\021\n" +
      "\tiniParams\030\002 \001(\t\022\022\n\nconfigJson\030\003 \001(\t\022\026\n\016" +
      "verboseLogging\030\004 \001(\003\"\030\n\026InitWithConfigRe" +
      "sponse\" \n\016ProcessRequest\022\016\n\006record\030\001 \001(\t" +
      "\"!\n\017ProcessResponse\022\016\n\006result\030\001 \001(\t2\201\003\n\010" +
      "G2Hasher\022@\n\007Destroy\022\030.g2hasher.DestroyRe" +
      "quest\032\031.g2hasher.DestroyResponse\"\000\022a\n\022Ex" +
      "portTokenLibrary\022#.g2hasher.ExportTokenL" +
      "ibraryRequest\032$.g2hasher.ExportTokenLibr" +
      "aryResponse\"\000\0227\n\004Init\022\025.g2hasher.InitReq" +
      "uest\032\026.g2hasher.InitResponse\"\000\022U\n\016InitWi" +
      "thConfig\022\037.g2hasher.InitWithConfigReques" +
      "t\032 .g2hasher.InitWithConfigResponse\"\000\022@\n" +
      "\007Process\022\030.g2hasher.ProcessRequest\032\031.g2h" +
      "asher.ProcessResponse\"\000Bb\n#com.senzing.g" +
      "2.engine.grpc.G2HasherB\rG2HasherProtoP\001Z" +
      "*github.com/senzing/g2-sdk-go-grpc/g2has" +
      "herb\006proto3"
    };
    descriptor = com.google.protobuf.Descriptors.FileDescriptor
      .internalBuildGeneratedFileFrom(descriptorData,
        new com.google.protobuf.Descriptors.FileDescriptor[] {
        });
    internal_static_g2hasher_DestroyRequest_descriptor =
      getDescriptor().getMessageTypes().get(0);
    internal_static_g2hasher_DestroyRequest_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2hasher_DestroyRequest_descriptor,
        new java.lang.String[] { });
    internal_static_g2hasher_DestroyResponse_descriptor =
      getDescriptor().getMessageTypes().get(1);
    internal_static_g2hasher_DestroyResponse_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2hasher_DestroyResponse_descriptor,
        new java.lang.String[] { });
    internal_static_g2hasher_ExportTokenLibraryRequest_descriptor =
      getDescriptor().getMessageTypes().get(2);
    internal_static_g2hasher_ExportTokenLibraryRequest_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2hasher_ExportTokenLibraryRequest_descriptor,
        new java.lang.String[] { });
    internal_static_g2hasher_ExportTokenLibraryResponse_descriptor =
      getDescriptor().getMessageTypes().get(3);
    internal_static_g2hasher_ExportTokenLibraryResponse_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2hasher_ExportTokenLibraryResponse_descriptor,
        new java.lang.String[] { "Result", });
    internal_static_g2hasher_InitRequest_descriptor =
      getDescriptor().getMessageTypes().get(4);
    internal_static_g2hasher_InitRequest_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2hasher_InitRequest_descriptor,
        new java.lang.String[] { "ModuleName", "IniParams", "VerboseLogging", });
    internal_static_g2hasher_InitResponse_descriptor =
      getDescriptor().getMessageTypes().get(5);
    internal_static_g2hasher_InitResponse_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2hasher_InitResponse_descriptor,
        new java.lang.String[] { });
    internal_static_g2hasher_InitWithConfigRequest_descriptor =
      getDescriptor().getMessageTypes().get(6);
    internal_static_g2hasher_InitWithConfigRequest_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2hasher_InitWithConfigRequest_descriptor,
        new java.lang.String[] { "ModuleName", "IniParams", "ConfigJson", "VerboseLogging", });
    internal_static_g2hasher_InitWithConfigResponse_descriptor =
      getDescriptor().getMessageTypes().get(7);
    internal_static_g2hasher_InitWithConfigResponse_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2hasher_InitWithConfigResponse_descriptor,
        new java.lang.String[] { });
    internal_static_g2hasher_ProcessRequest_descriptor =
      getDescriptor().getMessageTypes().get(8);
    internal_static_g2hasher_ProcessRequest_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2hasher_ProcessRequest_descriptor,
        new java.lang.String[] { "Record", });
    internal_static_g2hasher_ProcessResponse_descriptor =
      getDescriptor().getMessageTypes().get(9);
    internal_static_g2hasher_ProcessResponse_fieldAccessorTable = new
      com.google.protobuf.GeneratedMessageV3.FieldAccessorTable(
        internal_static_g2hasher_ProcessResponse_descriptor,
        new java.lang.String[] { "Result", });
  }

  // @@protoc_insertion_point(outer_class_scope)
}
