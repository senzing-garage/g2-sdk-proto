// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: g2engine.proto

package com.senzing.g2.engine.grpc.G2Engine;

public interface FindPathIncludingSourceByEntityIDRequestOrBuilder extends
    // @@protoc_insertion_point(interface_extends:g2engine.FindPathIncludingSourceByEntityIDRequest)
    com.google.protobuf.MessageOrBuilder {

  /**
   * <code>int64 entityID1 = 1;</code>
   * @return The entityID1.
   */
  long getEntityID1();

  /**
   * <code>int64 entityID2 = 2;</code>
   * @return The entityID2.
   */
  long getEntityID2();

  /**
   * <code>int64 maxDegree = 3;</code>
   * @return The maxDegree.
   */
  long getMaxDegree();

  /**
   * <code>string excludedEntities = 4;</code>
   * @return The excludedEntities.
   */
  java.lang.String getExcludedEntities();
  /**
   * <code>string excludedEntities = 4;</code>
   * @return The bytes for excludedEntities.
   */
  com.google.protobuf.ByteString
      getExcludedEntitiesBytes();

  /**
   * <code>string requiredDsrcs = 5;</code>
   * @return The requiredDsrcs.
   */
  java.lang.String getRequiredDsrcs();
  /**
   * <code>string requiredDsrcs = 5;</code>
   * @return The bytes for requiredDsrcs.
   */
  com.google.protobuf.ByteString
      getRequiredDsrcsBytes();
}
