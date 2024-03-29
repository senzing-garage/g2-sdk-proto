// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: g2engine.proto

package com.senzing.g2.engine.grpc.G2Engine;

public interface FindNetworkByRecordIDRequestOrBuilder extends
    // @@protoc_insertion_point(interface_extends:g2engine.FindNetworkByRecordIDRequest)
    com.google.protobuf.MessageOrBuilder {

  /**
   * <code>string recordList = 1;</code>
   * @return The recordList.
   */
  java.lang.String getRecordList();
  /**
   * <code>string recordList = 1;</code>
   * @return The bytes for recordList.
   */
  com.google.protobuf.ByteString
      getRecordListBytes();

  /**
   * <code>int64 maxDegree = 2;</code>
   * @return The maxDegree.
   */
  long getMaxDegree();

  /**
   * <code>int64 buildOutDegree = 3;</code>
   * @return The buildOutDegree.
   */
  long getBuildOutDegree();

  /**
   * <code>int64 maxEntities = 4;</code>
   * @return The maxEntities.
   */
  long getMaxEntities();
}
