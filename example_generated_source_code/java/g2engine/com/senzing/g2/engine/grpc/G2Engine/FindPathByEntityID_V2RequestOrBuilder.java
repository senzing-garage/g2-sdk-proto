// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: g2engine.proto

package com.senzing.g2.engine.grpc.G2Engine;

public interface FindPathByEntityID_V2RequestOrBuilder extends
    // @@protoc_insertion_point(interface_extends:g2engine.FindPathByEntityID_V2Request)
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
   * <code>int64 flags = 4;</code>
   * @return The flags.
   */
  long getFlags();
}
