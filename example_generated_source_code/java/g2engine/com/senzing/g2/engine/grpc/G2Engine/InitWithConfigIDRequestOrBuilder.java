// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: g2engine.proto

package com.senzing.g2.engine.grpc.G2Engine;

public interface InitWithConfigIDRequestOrBuilder extends
    // @@protoc_insertion_point(interface_extends:g2engine.InitWithConfigIDRequest)
    com.google.protobuf.MessageOrBuilder {

  /**
   * <code>string moduleName = 1;</code>
   * @return The moduleName.
   */
  java.lang.String getModuleName();
  /**
   * <code>string moduleName = 1;</code>
   * @return The bytes for moduleName.
   */
  com.google.protobuf.ByteString
      getModuleNameBytes();

  /**
   * <code>string iniParams = 2;</code>
   * @return The iniParams.
   */
  java.lang.String getIniParams();
  /**
   * <code>string iniParams = 2;</code>
   * @return The bytes for iniParams.
   */
  com.google.protobuf.ByteString
      getIniParamsBytes();

  /**
   * <code>int64 initConfigID = 3;</code>
   * @return The initConfigID.
   */
  long getInitConfigID();

  /**
   * <code>int32 verboseLogging = 4;</code>
   * @return The verboseLogging.
   */
  int getVerboseLogging();
}