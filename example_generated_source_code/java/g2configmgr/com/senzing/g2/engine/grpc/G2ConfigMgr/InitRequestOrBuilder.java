// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: g2configmgr.proto

package com.senzing.g2.engine.grpc.G2ConfigMgr;

public interface InitRequestOrBuilder extends
    // @@protoc_insertion_point(interface_extends:g2configmgr.InitRequest)
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
   * <code>int64 verboseLogging = 3;</code>
   * @return The verboseLogging.
   */
  long getVerboseLogging();
}
