// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: g2engine.proto

package com.senzing.g2.engine.grpc.G2Engine;

public interface StreamExportCSVEntityReportRequestOrBuilder extends
    // @@protoc_insertion_point(interface_extends:g2engine.StreamExportCSVEntityReportRequest)
    com.google.protobuf.MessageOrBuilder {

  /**
   * <code>string csvColumnList = 1;</code>
   * @return The csvColumnList.
   */
  java.lang.String getCsvColumnList();
  /**
   * <code>string csvColumnList = 1;</code>
   * @return The bytes for csvColumnList.
   */
  com.google.protobuf.ByteString
      getCsvColumnListBytes();

  /**
   * <code>int64 flags = 2;</code>
   * @return The flags.
   */
  long getFlags();
}