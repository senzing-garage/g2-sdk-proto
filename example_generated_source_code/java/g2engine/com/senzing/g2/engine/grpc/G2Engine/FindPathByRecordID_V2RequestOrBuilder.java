// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: g2engine.proto

package com.senzing.g2.engine.grpc.G2Engine;

public interface FindPathByRecordID_V2RequestOrBuilder extends
    // @@protoc_insertion_point(interface_extends:g2engine.FindPathByRecordID_V2Request)
    com.google.protobuf.MessageOrBuilder {

  /**
   * <code>string dataSourceCode1 = 1;</code>
   * @return The dataSourceCode1.
   */
  java.lang.String getDataSourceCode1();
  /**
   * <code>string dataSourceCode1 = 1;</code>
   * @return The bytes for dataSourceCode1.
   */
  com.google.protobuf.ByteString
      getDataSourceCode1Bytes();

  /**
   * <code>string recordID1 = 2;</code>
   * @return The recordID1.
   */
  java.lang.String getRecordID1();
  /**
   * <code>string recordID1 = 2;</code>
   * @return The bytes for recordID1.
   */
  com.google.protobuf.ByteString
      getRecordID1Bytes();

  /**
   * <code>string dataSourceCode2 = 3;</code>
   * @return The dataSourceCode2.
   */
  java.lang.String getDataSourceCode2();
  /**
   * <code>string dataSourceCode2 = 3;</code>
   * @return The bytes for dataSourceCode2.
   */
  com.google.protobuf.ByteString
      getDataSourceCode2Bytes();

  /**
   * <code>string recordID2 = 4;</code>
   * @return The recordID2.
   */
  java.lang.String getRecordID2();
  /**
   * <code>string recordID2 = 4;</code>
   * @return The bytes for recordID2.
   */
  com.google.protobuf.ByteString
      getRecordID2Bytes();

  /**
   * <code>int64 maxDegree = 5;</code>
   * @return The maxDegree.
   */
  long getMaxDegree();

  /**
   * <code>int64 flags = 6;</code>
   * @return The flags.
   */
  long getFlags();
}
