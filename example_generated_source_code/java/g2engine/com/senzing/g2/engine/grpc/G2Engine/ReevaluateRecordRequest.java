// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: g2engine.proto

package com.senzing.g2.engine.grpc.G2Engine;

/**
 * Protobuf type {@code g2engine.ReevaluateRecordRequest}
 */
public final class ReevaluateRecordRequest extends
    com.google.protobuf.GeneratedMessageV3 implements
    // @@protoc_insertion_point(message_implements:g2engine.ReevaluateRecordRequest)
    ReevaluateRecordRequestOrBuilder {
private static final long serialVersionUID = 0L;
  // Use ReevaluateRecordRequest.newBuilder() to construct.
  private ReevaluateRecordRequest(com.google.protobuf.GeneratedMessageV3.Builder<?> builder) {
    super(builder);
  }
  private ReevaluateRecordRequest() {
    dataSourceCode_ = "";
    recordID_ = "";
  }

  @java.lang.Override
  @SuppressWarnings({"unused"})
  protected java.lang.Object newInstance(
      UnusedPrivateParameter unused) {
    return new ReevaluateRecordRequest();
  }

  @java.lang.Override
  public final com.google.protobuf.UnknownFieldSet
  getUnknownFields() {
    return this.unknownFields;
  }
  private ReevaluateRecordRequest(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    this();
    if (extensionRegistry == null) {
      throw new java.lang.NullPointerException();
    }
    com.google.protobuf.UnknownFieldSet.Builder unknownFields =
        com.google.protobuf.UnknownFieldSet.newBuilder();
    try {
      boolean done = false;
      while (!done) {
        int tag = input.readTag();
        switch (tag) {
          case 0:
            done = true;
            break;
          case 10: {
            java.lang.String s = input.readStringRequireUtf8();

            dataSourceCode_ = s;
            break;
          }
          case 18: {
            java.lang.String s = input.readStringRequireUtf8();

            recordID_ = s;
            break;
          }
          case 24: {

            flags_ = input.readInt64();
            break;
          }
          default: {
            if (!parseUnknownField(
                input, unknownFields, extensionRegistry, tag)) {
              done = true;
            }
            break;
          }
        }
      }
    } catch (com.google.protobuf.InvalidProtocolBufferException e) {
      throw e.setUnfinishedMessage(this);
    } catch (com.google.protobuf.UninitializedMessageException e) {
      throw e.asInvalidProtocolBufferException().setUnfinishedMessage(this);
    } catch (java.io.IOException e) {
      throw new com.google.protobuf.InvalidProtocolBufferException(
          e).setUnfinishedMessage(this);
    } finally {
      this.unknownFields = unknownFields.build();
      makeExtensionsImmutable();
    }
  }
  public static final com.google.protobuf.Descriptors.Descriptor
      getDescriptor() {
    return com.senzing.g2.engine.grpc.G2Engine.G2EngineProto.internal_static_g2engine_ReevaluateRecordRequest_descriptor;
  }

  @java.lang.Override
  protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
      internalGetFieldAccessorTable() {
    return com.senzing.g2.engine.grpc.G2Engine.G2EngineProto.internal_static_g2engine_ReevaluateRecordRequest_fieldAccessorTable
        .ensureFieldAccessorsInitialized(
            com.senzing.g2.engine.grpc.G2Engine.ReevaluateRecordRequest.class, com.senzing.g2.engine.grpc.G2Engine.ReevaluateRecordRequest.Builder.class);
  }

  public static final int DATASOURCECODE_FIELD_NUMBER = 1;
  private volatile java.lang.Object dataSourceCode_;
  /**
   * <code>string dataSourceCode = 1;</code>
   * @return The dataSourceCode.
   */
  @java.lang.Override
  public java.lang.String getDataSourceCode() {
    java.lang.Object ref = dataSourceCode_;
    if (ref instanceof java.lang.String) {
      return (java.lang.String) ref;
    } else {
      com.google.protobuf.ByteString bs = 
          (com.google.protobuf.ByteString) ref;
      java.lang.String s = bs.toStringUtf8();
      dataSourceCode_ = s;
      return s;
    }
  }
  /**
   * <code>string dataSourceCode = 1;</code>
   * @return The bytes for dataSourceCode.
   */
  @java.lang.Override
  public com.google.protobuf.ByteString
      getDataSourceCodeBytes() {
    java.lang.Object ref = dataSourceCode_;
    if (ref instanceof java.lang.String) {
      com.google.protobuf.ByteString b = 
          com.google.protobuf.ByteString.copyFromUtf8(
              (java.lang.String) ref);
      dataSourceCode_ = b;
      return b;
    } else {
      return (com.google.protobuf.ByteString) ref;
    }
  }

  public static final int RECORDID_FIELD_NUMBER = 2;
  private volatile java.lang.Object recordID_;
  /**
   * <code>string recordID = 2;</code>
   * @return The recordID.
   */
  @java.lang.Override
  public java.lang.String getRecordID() {
    java.lang.Object ref = recordID_;
    if (ref instanceof java.lang.String) {
      return (java.lang.String) ref;
    } else {
      com.google.protobuf.ByteString bs = 
          (com.google.protobuf.ByteString) ref;
      java.lang.String s = bs.toStringUtf8();
      recordID_ = s;
      return s;
    }
  }
  /**
   * <code>string recordID = 2;</code>
   * @return The bytes for recordID.
   */
  @java.lang.Override
  public com.google.protobuf.ByteString
      getRecordIDBytes() {
    java.lang.Object ref = recordID_;
    if (ref instanceof java.lang.String) {
      com.google.protobuf.ByteString b = 
          com.google.protobuf.ByteString.copyFromUtf8(
              (java.lang.String) ref);
      recordID_ = b;
      return b;
    } else {
      return (com.google.protobuf.ByteString) ref;
    }
  }

  public static final int FLAGS_FIELD_NUMBER = 3;
  private long flags_;
  /**
   * <code>int64 flags = 3;</code>
   * @return The flags.
   */
  @java.lang.Override
  public long getFlags() {
    return flags_;
  }

  private byte memoizedIsInitialized = -1;
  @java.lang.Override
  public final boolean isInitialized() {
    byte isInitialized = memoizedIsInitialized;
    if (isInitialized == 1) return true;
    if (isInitialized == 0) return false;

    memoizedIsInitialized = 1;
    return true;
  }

  @java.lang.Override
  public void writeTo(com.google.protobuf.CodedOutputStream output)
                      throws java.io.IOException {
    if (!com.google.protobuf.GeneratedMessageV3.isStringEmpty(dataSourceCode_)) {
      com.google.protobuf.GeneratedMessageV3.writeString(output, 1, dataSourceCode_);
    }
    if (!com.google.protobuf.GeneratedMessageV3.isStringEmpty(recordID_)) {
      com.google.protobuf.GeneratedMessageV3.writeString(output, 2, recordID_);
    }
    if (flags_ != 0L) {
      output.writeInt64(3, flags_);
    }
    unknownFields.writeTo(output);
  }

  @java.lang.Override
  public int getSerializedSize() {
    int size = memoizedSize;
    if (size != -1) return size;

    size = 0;
    if (!com.google.protobuf.GeneratedMessageV3.isStringEmpty(dataSourceCode_)) {
      size += com.google.protobuf.GeneratedMessageV3.computeStringSize(1, dataSourceCode_);
    }
    if (!com.google.protobuf.GeneratedMessageV3.isStringEmpty(recordID_)) {
      size += com.google.protobuf.GeneratedMessageV3.computeStringSize(2, recordID_);
    }
    if (flags_ != 0L) {
      size += com.google.protobuf.CodedOutputStream
        .computeInt64Size(3, flags_);
    }
    size += unknownFields.getSerializedSize();
    memoizedSize = size;
    return size;
  }

  @java.lang.Override
  public boolean equals(final java.lang.Object obj) {
    if (obj == this) {
     return true;
    }
    if (!(obj instanceof com.senzing.g2.engine.grpc.G2Engine.ReevaluateRecordRequest)) {
      return super.equals(obj);
    }
    com.senzing.g2.engine.grpc.G2Engine.ReevaluateRecordRequest other = (com.senzing.g2.engine.grpc.G2Engine.ReevaluateRecordRequest) obj;

    if (!getDataSourceCode()
        .equals(other.getDataSourceCode())) return false;
    if (!getRecordID()
        .equals(other.getRecordID())) return false;
    if (getFlags()
        != other.getFlags()) return false;
    if (!unknownFields.equals(other.unknownFields)) return false;
    return true;
  }

  @java.lang.Override
  public int hashCode() {
    if (memoizedHashCode != 0) {
      return memoizedHashCode;
    }
    int hash = 41;
    hash = (19 * hash) + getDescriptor().hashCode();
    hash = (37 * hash) + DATASOURCECODE_FIELD_NUMBER;
    hash = (53 * hash) + getDataSourceCode().hashCode();
    hash = (37 * hash) + RECORDID_FIELD_NUMBER;
    hash = (53 * hash) + getRecordID().hashCode();
    hash = (37 * hash) + FLAGS_FIELD_NUMBER;
    hash = (53 * hash) + com.google.protobuf.Internal.hashLong(
        getFlags());
    hash = (29 * hash) + unknownFields.hashCode();
    memoizedHashCode = hash;
    return hash;
  }

  public static com.senzing.g2.engine.grpc.G2Engine.ReevaluateRecordRequest parseFrom(
      java.nio.ByteBuffer data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data);
  }
  public static com.senzing.g2.engine.grpc.G2Engine.ReevaluateRecordRequest parseFrom(
      java.nio.ByteBuffer data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data, extensionRegistry);
  }
  public static com.senzing.g2.engine.grpc.G2Engine.ReevaluateRecordRequest parseFrom(
      com.google.protobuf.ByteString data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data);
  }
  public static com.senzing.g2.engine.grpc.G2Engine.ReevaluateRecordRequest parseFrom(
      com.google.protobuf.ByteString data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data, extensionRegistry);
  }
  public static com.senzing.g2.engine.grpc.G2Engine.ReevaluateRecordRequest parseFrom(byte[] data)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data);
  }
  public static com.senzing.g2.engine.grpc.G2Engine.ReevaluateRecordRequest parseFrom(
      byte[] data,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws com.google.protobuf.InvalidProtocolBufferException {
    return PARSER.parseFrom(data, extensionRegistry);
  }
  public static com.senzing.g2.engine.grpc.G2Engine.ReevaluateRecordRequest parseFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseWithIOException(PARSER, input);
  }
  public static com.senzing.g2.engine.grpc.G2Engine.ReevaluateRecordRequest parseFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseWithIOException(PARSER, input, extensionRegistry);
  }
  public static com.senzing.g2.engine.grpc.G2Engine.ReevaluateRecordRequest parseDelimitedFrom(java.io.InputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseDelimitedWithIOException(PARSER, input);
  }
  public static com.senzing.g2.engine.grpc.G2Engine.ReevaluateRecordRequest parseDelimitedFrom(
      java.io.InputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseDelimitedWithIOException(PARSER, input, extensionRegistry);
  }
  public static com.senzing.g2.engine.grpc.G2Engine.ReevaluateRecordRequest parseFrom(
      com.google.protobuf.CodedInputStream input)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseWithIOException(PARSER, input);
  }
  public static com.senzing.g2.engine.grpc.G2Engine.ReevaluateRecordRequest parseFrom(
      com.google.protobuf.CodedInputStream input,
      com.google.protobuf.ExtensionRegistryLite extensionRegistry)
      throws java.io.IOException {
    return com.google.protobuf.GeneratedMessageV3
        .parseWithIOException(PARSER, input, extensionRegistry);
  }

  @java.lang.Override
  public Builder newBuilderForType() { return newBuilder(); }
  public static Builder newBuilder() {
    return DEFAULT_INSTANCE.toBuilder();
  }
  public static Builder newBuilder(com.senzing.g2.engine.grpc.G2Engine.ReevaluateRecordRequest prototype) {
    return DEFAULT_INSTANCE.toBuilder().mergeFrom(prototype);
  }
  @java.lang.Override
  public Builder toBuilder() {
    return this == DEFAULT_INSTANCE
        ? new Builder() : new Builder().mergeFrom(this);
  }

  @java.lang.Override
  protected Builder newBuilderForType(
      com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
    Builder builder = new Builder(parent);
    return builder;
  }
  /**
   * Protobuf type {@code g2engine.ReevaluateRecordRequest}
   */
  public static final class Builder extends
      com.google.protobuf.GeneratedMessageV3.Builder<Builder> implements
      // @@protoc_insertion_point(builder_implements:g2engine.ReevaluateRecordRequest)
      com.senzing.g2.engine.grpc.G2Engine.ReevaluateRecordRequestOrBuilder {
    public static final com.google.protobuf.Descriptors.Descriptor
        getDescriptor() {
      return com.senzing.g2.engine.grpc.G2Engine.G2EngineProto.internal_static_g2engine_ReevaluateRecordRequest_descriptor;
    }

    @java.lang.Override
    protected com.google.protobuf.GeneratedMessageV3.FieldAccessorTable
        internalGetFieldAccessorTable() {
      return com.senzing.g2.engine.grpc.G2Engine.G2EngineProto.internal_static_g2engine_ReevaluateRecordRequest_fieldAccessorTable
          .ensureFieldAccessorsInitialized(
              com.senzing.g2.engine.grpc.G2Engine.ReevaluateRecordRequest.class, com.senzing.g2.engine.grpc.G2Engine.ReevaluateRecordRequest.Builder.class);
    }

    // Construct using com.senzing.g2.engine.grpc.G2Engine.ReevaluateRecordRequest.newBuilder()
    private Builder() {
      maybeForceBuilderInitialization();
    }

    private Builder(
        com.google.protobuf.GeneratedMessageV3.BuilderParent parent) {
      super(parent);
      maybeForceBuilderInitialization();
    }
    private void maybeForceBuilderInitialization() {
      if (com.google.protobuf.GeneratedMessageV3
              .alwaysUseFieldBuilders) {
      }
    }
    @java.lang.Override
    public Builder clear() {
      super.clear();
      dataSourceCode_ = "";

      recordID_ = "";

      flags_ = 0L;

      return this;
    }

    @java.lang.Override
    public com.google.protobuf.Descriptors.Descriptor
        getDescriptorForType() {
      return com.senzing.g2.engine.grpc.G2Engine.G2EngineProto.internal_static_g2engine_ReevaluateRecordRequest_descriptor;
    }

    @java.lang.Override
    public com.senzing.g2.engine.grpc.G2Engine.ReevaluateRecordRequest getDefaultInstanceForType() {
      return com.senzing.g2.engine.grpc.G2Engine.ReevaluateRecordRequest.getDefaultInstance();
    }

    @java.lang.Override
    public com.senzing.g2.engine.grpc.G2Engine.ReevaluateRecordRequest build() {
      com.senzing.g2.engine.grpc.G2Engine.ReevaluateRecordRequest result = buildPartial();
      if (!result.isInitialized()) {
        throw newUninitializedMessageException(result);
      }
      return result;
    }

    @java.lang.Override
    public com.senzing.g2.engine.grpc.G2Engine.ReevaluateRecordRequest buildPartial() {
      com.senzing.g2.engine.grpc.G2Engine.ReevaluateRecordRequest result = new com.senzing.g2.engine.grpc.G2Engine.ReevaluateRecordRequest(this);
      result.dataSourceCode_ = dataSourceCode_;
      result.recordID_ = recordID_;
      result.flags_ = flags_;
      onBuilt();
      return result;
    }

    @java.lang.Override
    public Builder clone() {
      return super.clone();
    }
    @java.lang.Override
    public Builder setField(
        com.google.protobuf.Descriptors.FieldDescriptor field,
        java.lang.Object value) {
      return super.setField(field, value);
    }
    @java.lang.Override
    public Builder clearField(
        com.google.protobuf.Descriptors.FieldDescriptor field) {
      return super.clearField(field);
    }
    @java.lang.Override
    public Builder clearOneof(
        com.google.protobuf.Descriptors.OneofDescriptor oneof) {
      return super.clearOneof(oneof);
    }
    @java.lang.Override
    public Builder setRepeatedField(
        com.google.protobuf.Descriptors.FieldDescriptor field,
        int index, java.lang.Object value) {
      return super.setRepeatedField(field, index, value);
    }
    @java.lang.Override
    public Builder addRepeatedField(
        com.google.protobuf.Descriptors.FieldDescriptor field,
        java.lang.Object value) {
      return super.addRepeatedField(field, value);
    }
    @java.lang.Override
    public Builder mergeFrom(com.google.protobuf.Message other) {
      if (other instanceof com.senzing.g2.engine.grpc.G2Engine.ReevaluateRecordRequest) {
        return mergeFrom((com.senzing.g2.engine.grpc.G2Engine.ReevaluateRecordRequest)other);
      } else {
        super.mergeFrom(other);
        return this;
      }
    }

    public Builder mergeFrom(com.senzing.g2.engine.grpc.G2Engine.ReevaluateRecordRequest other) {
      if (other == com.senzing.g2.engine.grpc.G2Engine.ReevaluateRecordRequest.getDefaultInstance()) return this;
      if (!other.getDataSourceCode().isEmpty()) {
        dataSourceCode_ = other.dataSourceCode_;
        onChanged();
      }
      if (!other.getRecordID().isEmpty()) {
        recordID_ = other.recordID_;
        onChanged();
      }
      if (other.getFlags() != 0L) {
        setFlags(other.getFlags());
      }
      this.mergeUnknownFields(other.unknownFields);
      onChanged();
      return this;
    }

    @java.lang.Override
    public final boolean isInitialized() {
      return true;
    }

    @java.lang.Override
    public Builder mergeFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws java.io.IOException {
      com.senzing.g2.engine.grpc.G2Engine.ReevaluateRecordRequest parsedMessage = null;
      try {
        parsedMessage = PARSER.parsePartialFrom(input, extensionRegistry);
      } catch (com.google.protobuf.InvalidProtocolBufferException e) {
        parsedMessage = (com.senzing.g2.engine.grpc.G2Engine.ReevaluateRecordRequest) e.getUnfinishedMessage();
        throw e.unwrapIOException();
      } finally {
        if (parsedMessage != null) {
          mergeFrom(parsedMessage);
        }
      }
      return this;
    }

    private java.lang.Object dataSourceCode_ = "";
    /**
     * <code>string dataSourceCode = 1;</code>
     * @return The dataSourceCode.
     */
    public java.lang.String getDataSourceCode() {
      java.lang.Object ref = dataSourceCode_;
      if (!(ref instanceof java.lang.String)) {
        com.google.protobuf.ByteString bs =
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        dataSourceCode_ = s;
        return s;
      } else {
        return (java.lang.String) ref;
      }
    }
    /**
     * <code>string dataSourceCode = 1;</code>
     * @return The bytes for dataSourceCode.
     */
    public com.google.protobuf.ByteString
        getDataSourceCodeBytes() {
      java.lang.Object ref = dataSourceCode_;
      if (ref instanceof String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        dataSourceCode_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }
    /**
     * <code>string dataSourceCode = 1;</code>
     * @param value The dataSourceCode to set.
     * @return This builder for chaining.
     */
    public Builder setDataSourceCode(
        java.lang.String value) {
      if (value == null) {
    throw new NullPointerException();
  }
  
      dataSourceCode_ = value;
      onChanged();
      return this;
    }
    /**
     * <code>string dataSourceCode = 1;</code>
     * @return This builder for chaining.
     */
    public Builder clearDataSourceCode() {
      
      dataSourceCode_ = getDefaultInstance().getDataSourceCode();
      onChanged();
      return this;
    }
    /**
     * <code>string dataSourceCode = 1;</code>
     * @param value The bytes for dataSourceCode to set.
     * @return This builder for chaining.
     */
    public Builder setDataSourceCodeBytes(
        com.google.protobuf.ByteString value) {
      if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
      
      dataSourceCode_ = value;
      onChanged();
      return this;
    }

    private java.lang.Object recordID_ = "";
    /**
     * <code>string recordID = 2;</code>
     * @return The recordID.
     */
    public java.lang.String getRecordID() {
      java.lang.Object ref = recordID_;
      if (!(ref instanceof java.lang.String)) {
        com.google.protobuf.ByteString bs =
            (com.google.protobuf.ByteString) ref;
        java.lang.String s = bs.toStringUtf8();
        recordID_ = s;
        return s;
      } else {
        return (java.lang.String) ref;
      }
    }
    /**
     * <code>string recordID = 2;</code>
     * @return The bytes for recordID.
     */
    public com.google.protobuf.ByteString
        getRecordIDBytes() {
      java.lang.Object ref = recordID_;
      if (ref instanceof String) {
        com.google.protobuf.ByteString b = 
            com.google.protobuf.ByteString.copyFromUtf8(
                (java.lang.String) ref);
        recordID_ = b;
        return b;
      } else {
        return (com.google.protobuf.ByteString) ref;
      }
    }
    /**
     * <code>string recordID = 2;</code>
     * @param value The recordID to set.
     * @return This builder for chaining.
     */
    public Builder setRecordID(
        java.lang.String value) {
      if (value == null) {
    throw new NullPointerException();
  }
  
      recordID_ = value;
      onChanged();
      return this;
    }
    /**
     * <code>string recordID = 2;</code>
     * @return This builder for chaining.
     */
    public Builder clearRecordID() {
      
      recordID_ = getDefaultInstance().getRecordID();
      onChanged();
      return this;
    }
    /**
     * <code>string recordID = 2;</code>
     * @param value The bytes for recordID to set.
     * @return This builder for chaining.
     */
    public Builder setRecordIDBytes(
        com.google.protobuf.ByteString value) {
      if (value == null) {
    throw new NullPointerException();
  }
  checkByteStringIsUtf8(value);
      
      recordID_ = value;
      onChanged();
      return this;
    }

    private long flags_ ;
    /**
     * <code>int64 flags = 3;</code>
     * @return The flags.
     */
    @java.lang.Override
    public long getFlags() {
      return flags_;
    }
    /**
     * <code>int64 flags = 3;</code>
     * @param value The flags to set.
     * @return This builder for chaining.
     */
    public Builder setFlags(long value) {
      
      flags_ = value;
      onChanged();
      return this;
    }
    /**
     * <code>int64 flags = 3;</code>
     * @return This builder for chaining.
     */
    public Builder clearFlags() {
      
      flags_ = 0L;
      onChanged();
      return this;
    }
    @java.lang.Override
    public final Builder setUnknownFields(
        final com.google.protobuf.UnknownFieldSet unknownFields) {
      return super.setUnknownFields(unknownFields);
    }

    @java.lang.Override
    public final Builder mergeUnknownFields(
        final com.google.protobuf.UnknownFieldSet unknownFields) {
      return super.mergeUnknownFields(unknownFields);
    }


    // @@protoc_insertion_point(builder_scope:g2engine.ReevaluateRecordRequest)
  }

  // @@protoc_insertion_point(class_scope:g2engine.ReevaluateRecordRequest)
  private static final com.senzing.g2.engine.grpc.G2Engine.ReevaluateRecordRequest DEFAULT_INSTANCE;
  static {
    DEFAULT_INSTANCE = new com.senzing.g2.engine.grpc.G2Engine.ReevaluateRecordRequest();
  }

  public static com.senzing.g2.engine.grpc.G2Engine.ReevaluateRecordRequest getDefaultInstance() {
    return DEFAULT_INSTANCE;
  }

  private static final com.google.protobuf.Parser<ReevaluateRecordRequest>
      PARSER = new com.google.protobuf.AbstractParser<ReevaluateRecordRequest>() {
    @java.lang.Override
    public ReevaluateRecordRequest parsePartialFrom(
        com.google.protobuf.CodedInputStream input,
        com.google.protobuf.ExtensionRegistryLite extensionRegistry)
        throws com.google.protobuf.InvalidProtocolBufferException {
      return new ReevaluateRecordRequest(input, extensionRegistry);
    }
  };

  public static com.google.protobuf.Parser<ReevaluateRecordRequest> parser() {
    return PARSER;
  }

  @java.lang.Override
  public com.google.protobuf.Parser<ReevaluateRecordRequest> getParserForType() {
    return PARSER;
  }

  @java.lang.Override
  public com.senzing.g2.engine.grpc.G2Engine.ReevaluateRecordRequest getDefaultInstanceForType() {
    return DEFAULT_INSTANCE;
  }

}

