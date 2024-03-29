// Code generated by protoc-gen-go. DO NOT EDIT.
// versions:
// 	protoc-gen-go v1.28.1
// 	protoc        v3.21.6
// source: g2product.proto

package g2product

import (
	protoreflect "google.golang.org/protobuf/reflect/protoreflect"
	protoimpl "google.golang.org/protobuf/runtime/protoimpl"
	reflect "reflect"
	sync "sync"
)

const (
	// Verify that this generated code is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(20 - protoimpl.MinVersion)
	// Verify that runtime/protoimpl is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(protoimpl.MaxVersion - 20)
)

type DestroyRequest struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields
}

func (x *DestroyRequest) Reset() {
	*x = DestroyRequest{}
	if protoimpl.UnsafeEnabled {
		mi := &file_g2product_proto_msgTypes[0]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *DestroyRequest) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*DestroyRequest) ProtoMessage() {}

func (x *DestroyRequest) ProtoReflect() protoreflect.Message {
	mi := &file_g2product_proto_msgTypes[0]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use DestroyRequest.ProtoReflect.Descriptor instead.
func (*DestroyRequest) Descriptor() ([]byte, []int) {
	return file_g2product_proto_rawDescGZIP(), []int{0}
}

type DestroyResponse struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields
}

func (x *DestroyResponse) Reset() {
	*x = DestroyResponse{}
	if protoimpl.UnsafeEnabled {
		mi := &file_g2product_proto_msgTypes[1]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *DestroyResponse) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*DestroyResponse) ProtoMessage() {}

func (x *DestroyResponse) ProtoReflect() protoreflect.Message {
	mi := &file_g2product_proto_msgTypes[1]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use DestroyResponse.ProtoReflect.Descriptor instead.
func (*DestroyResponse) Descriptor() ([]byte, []int) {
	return file_g2product_proto_rawDescGZIP(), []int{1}
}

type InitRequest struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	ModuleName     string `protobuf:"bytes,1,opt,name=moduleName,proto3" json:"moduleName,omitempty"`
	IniParams      string `protobuf:"bytes,2,opt,name=iniParams,proto3" json:"iniParams,omitempty"`
	VerboseLogging int64  `protobuf:"varint,3,opt,name=verboseLogging,proto3" json:"verboseLogging,omitempty"`
}

func (x *InitRequest) Reset() {
	*x = InitRequest{}
	if protoimpl.UnsafeEnabled {
		mi := &file_g2product_proto_msgTypes[2]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *InitRequest) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*InitRequest) ProtoMessage() {}

func (x *InitRequest) ProtoReflect() protoreflect.Message {
	mi := &file_g2product_proto_msgTypes[2]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use InitRequest.ProtoReflect.Descriptor instead.
func (*InitRequest) Descriptor() ([]byte, []int) {
	return file_g2product_proto_rawDescGZIP(), []int{2}
}

func (x *InitRequest) GetModuleName() string {
	if x != nil {
		return x.ModuleName
	}
	return ""
}

func (x *InitRequest) GetIniParams() string {
	if x != nil {
		return x.IniParams
	}
	return ""
}

func (x *InitRequest) GetVerboseLogging() int64 {
	if x != nil {
		return x.VerboseLogging
	}
	return 0
}

type InitResponse struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields
}

func (x *InitResponse) Reset() {
	*x = InitResponse{}
	if protoimpl.UnsafeEnabled {
		mi := &file_g2product_proto_msgTypes[3]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *InitResponse) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*InitResponse) ProtoMessage() {}

func (x *InitResponse) ProtoReflect() protoreflect.Message {
	mi := &file_g2product_proto_msgTypes[3]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use InitResponse.ProtoReflect.Descriptor instead.
func (*InitResponse) Descriptor() ([]byte, []int) {
	return file_g2product_proto_rawDescGZIP(), []int{3}
}

type LicenseRequest struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields
}

func (x *LicenseRequest) Reset() {
	*x = LicenseRequest{}
	if protoimpl.UnsafeEnabled {
		mi := &file_g2product_proto_msgTypes[4]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *LicenseRequest) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*LicenseRequest) ProtoMessage() {}

func (x *LicenseRequest) ProtoReflect() protoreflect.Message {
	mi := &file_g2product_proto_msgTypes[4]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use LicenseRequest.ProtoReflect.Descriptor instead.
func (*LicenseRequest) Descriptor() ([]byte, []int) {
	return file_g2product_proto_rawDescGZIP(), []int{4}
}

type LicenseResponse struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Result string `protobuf:"bytes,1,opt,name=result,proto3" json:"result,omitempty"`
}

func (x *LicenseResponse) Reset() {
	*x = LicenseResponse{}
	if protoimpl.UnsafeEnabled {
		mi := &file_g2product_proto_msgTypes[5]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *LicenseResponse) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*LicenseResponse) ProtoMessage() {}

func (x *LicenseResponse) ProtoReflect() protoreflect.Message {
	mi := &file_g2product_proto_msgTypes[5]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use LicenseResponse.ProtoReflect.Descriptor instead.
func (*LicenseResponse) Descriptor() ([]byte, []int) {
	return file_g2product_proto_rawDescGZIP(), []int{5}
}

func (x *LicenseResponse) GetResult() string {
	if x != nil {
		return x.Result
	}
	return ""
}

type VersionRequest struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields
}

func (x *VersionRequest) Reset() {
	*x = VersionRequest{}
	if protoimpl.UnsafeEnabled {
		mi := &file_g2product_proto_msgTypes[6]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *VersionRequest) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*VersionRequest) ProtoMessage() {}

func (x *VersionRequest) ProtoReflect() protoreflect.Message {
	mi := &file_g2product_proto_msgTypes[6]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use VersionRequest.ProtoReflect.Descriptor instead.
func (*VersionRequest) Descriptor() ([]byte, []int) {
	return file_g2product_proto_rawDescGZIP(), []int{6}
}

type VersionResponse struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Result string `protobuf:"bytes,1,opt,name=result,proto3" json:"result,omitempty"`
}

func (x *VersionResponse) Reset() {
	*x = VersionResponse{}
	if protoimpl.UnsafeEnabled {
		mi := &file_g2product_proto_msgTypes[7]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *VersionResponse) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*VersionResponse) ProtoMessage() {}

func (x *VersionResponse) ProtoReflect() protoreflect.Message {
	mi := &file_g2product_proto_msgTypes[7]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use VersionResponse.ProtoReflect.Descriptor instead.
func (*VersionResponse) Descriptor() ([]byte, []int) {
	return file_g2product_proto_rawDescGZIP(), []int{7}
}

func (x *VersionResponse) GetResult() string {
	if x != nil {
		return x.Result
	}
	return ""
}

var File_g2product_proto protoreflect.FileDescriptor

var file_g2product_proto_rawDesc = []byte{
	0x0a, 0x0f, 0x67, 0x32, 0x70, 0x72, 0x6f, 0x64, 0x75, 0x63, 0x74, 0x2e, 0x70, 0x72, 0x6f, 0x74,
	0x6f, 0x12, 0x09, 0x67, 0x32, 0x70, 0x72, 0x6f, 0x64, 0x75, 0x63, 0x74, 0x22, 0x10, 0x0a, 0x0e,
	0x44, 0x65, 0x73, 0x74, 0x72, 0x6f, 0x79, 0x52, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x22, 0x11,
	0x0a, 0x0f, 0x44, 0x65, 0x73, 0x74, 0x72, 0x6f, 0x79, 0x52, 0x65, 0x73, 0x70, 0x6f, 0x6e, 0x73,
	0x65, 0x22, 0x73, 0x0a, 0x0b, 0x49, 0x6e, 0x69, 0x74, 0x52, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74,
	0x12, 0x1e, 0x0a, 0x0a, 0x6d, 0x6f, 0x64, 0x75, 0x6c, 0x65, 0x4e, 0x61, 0x6d, 0x65, 0x18, 0x01,
	0x20, 0x01, 0x28, 0x09, 0x52, 0x0a, 0x6d, 0x6f, 0x64, 0x75, 0x6c, 0x65, 0x4e, 0x61, 0x6d, 0x65,
	0x12, 0x1c, 0x0a, 0x09, 0x69, 0x6e, 0x69, 0x50, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x18, 0x02, 0x20,
	0x01, 0x28, 0x09, 0x52, 0x09, 0x69, 0x6e, 0x69, 0x50, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x12, 0x26,
	0x0a, 0x0e, 0x76, 0x65, 0x72, 0x62, 0x6f, 0x73, 0x65, 0x4c, 0x6f, 0x67, 0x67, 0x69, 0x6e, 0x67,
	0x18, 0x03, 0x20, 0x01, 0x28, 0x03, 0x52, 0x0e, 0x76, 0x65, 0x72, 0x62, 0x6f, 0x73, 0x65, 0x4c,
	0x6f, 0x67, 0x67, 0x69, 0x6e, 0x67, 0x22, 0x0e, 0x0a, 0x0c, 0x49, 0x6e, 0x69, 0x74, 0x52, 0x65,
	0x73, 0x70, 0x6f, 0x6e, 0x73, 0x65, 0x22, 0x10, 0x0a, 0x0e, 0x4c, 0x69, 0x63, 0x65, 0x6e, 0x73,
	0x65, 0x52, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x22, 0x29, 0x0a, 0x0f, 0x4c, 0x69, 0x63, 0x65,
	0x6e, 0x73, 0x65, 0x52, 0x65, 0x73, 0x70, 0x6f, 0x6e, 0x73, 0x65, 0x12, 0x16, 0x0a, 0x06, 0x72,
	0x65, 0x73, 0x75, 0x6c, 0x74, 0x18, 0x01, 0x20, 0x01, 0x28, 0x09, 0x52, 0x06, 0x72, 0x65, 0x73,
	0x75, 0x6c, 0x74, 0x22, 0x10, 0x0a, 0x0e, 0x56, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x52, 0x65,
	0x71, 0x75, 0x65, 0x73, 0x74, 0x22, 0x29, 0x0a, 0x0f, 0x56, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e,
	0x52, 0x65, 0x73, 0x70, 0x6f, 0x6e, 0x73, 0x65, 0x12, 0x16, 0x0a, 0x06, 0x72, 0x65, 0x73, 0x75,
	0x6c, 0x74, 0x18, 0x01, 0x20, 0x01, 0x28, 0x09, 0x52, 0x06, 0x72, 0x65, 0x73, 0x75, 0x6c, 0x74,
	0x32, 0x92, 0x02, 0x0a, 0x09, 0x47, 0x32, 0x50, 0x72, 0x6f, 0x64, 0x75, 0x63, 0x74, 0x12, 0x42,
	0x0a, 0x07, 0x44, 0x65, 0x73, 0x74, 0x72, 0x6f, 0x79, 0x12, 0x19, 0x2e, 0x67, 0x32, 0x70, 0x72,
	0x6f, 0x64, 0x75, 0x63, 0x74, 0x2e, 0x44, 0x65, 0x73, 0x74, 0x72, 0x6f, 0x79, 0x52, 0x65, 0x71,
	0x75, 0x65, 0x73, 0x74, 0x1a, 0x1a, 0x2e, 0x67, 0x32, 0x70, 0x72, 0x6f, 0x64, 0x75, 0x63, 0x74,
	0x2e, 0x44, 0x65, 0x73, 0x74, 0x72, 0x6f, 0x79, 0x52, 0x65, 0x73, 0x70, 0x6f, 0x6e, 0x73, 0x65,
	0x22, 0x00, 0x12, 0x39, 0x0a, 0x04, 0x49, 0x6e, 0x69, 0x74, 0x12, 0x16, 0x2e, 0x67, 0x32, 0x70,
	0x72, 0x6f, 0x64, 0x75, 0x63, 0x74, 0x2e, 0x49, 0x6e, 0x69, 0x74, 0x52, 0x65, 0x71, 0x75, 0x65,
	0x73, 0x74, 0x1a, 0x17, 0x2e, 0x67, 0x32, 0x70, 0x72, 0x6f, 0x64, 0x75, 0x63, 0x74, 0x2e, 0x49,
	0x6e, 0x69, 0x74, 0x52, 0x65, 0x73, 0x70, 0x6f, 0x6e, 0x73, 0x65, 0x22, 0x00, 0x12, 0x42, 0x0a,
	0x07, 0x4c, 0x69, 0x63, 0x65, 0x6e, 0x73, 0x65, 0x12, 0x19, 0x2e, 0x67, 0x32, 0x70, 0x72, 0x6f,
	0x64, 0x75, 0x63, 0x74, 0x2e, 0x4c, 0x69, 0x63, 0x65, 0x6e, 0x73, 0x65, 0x52, 0x65, 0x71, 0x75,
	0x65, 0x73, 0x74, 0x1a, 0x1a, 0x2e, 0x67, 0x32, 0x70, 0x72, 0x6f, 0x64, 0x75, 0x63, 0x74, 0x2e,
	0x4c, 0x69, 0x63, 0x65, 0x6e, 0x73, 0x65, 0x52, 0x65, 0x73, 0x70, 0x6f, 0x6e, 0x73, 0x65, 0x22,
	0x00, 0x12, 0x42, 0x0a, 0x07, 0x56, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x12, 0x19, 0x2e, 0x67,
	0x32, 0x70, 0x72, 0x6f, 0x64, 0x75, 0x63, 0x74, 0x2e, 0x56, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e,
	0x52, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x1a, 0x1a, 0x2e, 0x67, 0x32, 0x70, 0x72, 0x6f, 0x64,
	0x75, 0x63, 0x74, 0x2e, 0x56, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x52, 0x65, 0x73, 0x70, 0x6f,
	0x6e, 0x73, 0x65, 0x22, 0x00, 0x42, 0x6c, 0x0a, 0x24, 0x63, 0x6f, 0x6d, 0x2e, 0x73, 0x65, 0x6e,
	0x7a, 0x69, 0x6e, 0x67, 0x2e, 0x67, 0x32, 0x2e, 0x65, 0x6e, 0x67, 0x69, 0x6e, 0x65, 0x2e, 0x67,
	0x72, 0x70, 0x63, 0x2e, 0x47, 0x32, 0x50, 0x72, 0x6f, 0x64, 0x75, 0x63, 0x74, 0x42, 0x0e, 0x47,
	0x32, 0x50, 0x72, 0x6f, 0x64, 0x75, 0x63, 0x74, 0x50, 0x72, 0x6f, 0x74, 0x6f, 0x50, 0x01, 0x5a,
	0x32, 0x67, 0x69, 0x74, 0x68, 0x75, 0x62, 0x2e, 0x63, 0x6f, 0x6d, 0x2f, 0x73, 0x65, 0x6e, 0x7a,
	0x69, 0x6e, 0x67, 0x2d, 0x67, 0x61, 0x72, 0x61, 0x67, 0x65, 0x2f, 0x67, 0x32, 0x2d, 0x73, 0x64,
	0x6b, 0x2d, 0x67, 0x6f, 0x2d, 0x67, 0x72, 0x70, 0x63, 0x2f, 0x67, 0x32, 0x70, 0x72, 0x6f, 0x64,
	0x75, 0x63, 0x74, 0x62, 0x06, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x33,
}

var (
	file_g2product_proto_rawDescOnce sync.Once
	file_g2product_proto_rawDescData = file_g2product_proto_rawDesc
)

func file_g2product_proto_rawDescGZIP() []byte {
	file_g2product_proto_rawDescOnce.Do(func() {
		file_g2product_proto_rawDescData = protoimpl.X.CompressGZIP(file_g2product_proto_rawDescData)
	})
	return file_g2product_proto_rawDescData
}

var file_g2product_proto_msgTypes = make([]protoimpl.MessageInfo, 8)
var file_g2product_proto_goTypes = []interface{}{
	(*DestroyRequest)(nil),  // 0: g2product.DestroyRequest
	(*DestroyResponse)(nil), // 1: g2product.DestroyResponse
	(*InitRequest)(nil),     // 2: g2product.InitRequest
	(*InitResponse)(nil),    // 3: g2product.InitResponse
	(*LicenseRequest)(nil),  // 4: g2product.LicenseRequest
	(*LicenseResponse)(nil), // 5: g2product.LicenseResponse
	(*VersionRequest)(nil),  // 6: g2product.VersionRequest
	(*VersionResponse)(nil), // 7: g2product.VersionResponse
}
var file_g2product_proto_depIdxs = []int32{
	0, // 0: g2product.G2Product.Destroy:input_type -> g2product.DestroyRequest
	2, // 1: g2product.G2Product.Init:input_type -> g2product.InitRequest
	4, // 2: g2product.G2Product.License:input_type -> g2product.LicenseRequest
	6, // 3: g2product.G2Product.Version:input_type -> g2product.VersionRequest
	1, // 4: g2product.G2Product.Destroy:output_type -> g2product.DestroyResponse
	3, // 5: g2product.G2Product.Init:output_type -> g2product.InitResponse
	5, // 6: g2product.G2Product.License:output_type -> g2product.LicenseResponse
	7, // 7: g2product.G2Product.Version:output_type -> g2product.VersionResponse
	4, // [4:8] is the sub-list for method output_type
	0, // [0:4] is the sub-list for method input_type
	0, // [0:0] is the sub-list for extension type_name
	0, // [0:0] is the sub-list for extension extendee
	0, // [0:0] is the sub-list for field type_name
}

func init() { file_g2product_proto_init() }
func file_g2product_proto_init() {
	if File_g2product_proto != nil {
		return
	}
	if !protoimpl.UnsafeEnabled {
		file_g2product_proto_msgTypes[0].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*DestroyRequest); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_g2product_proto_msgTypes[1].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*DestroyResponse); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_g2product_proto_msgTypes[2].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*InitRequest); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_g2product_proto_msgTypes[3].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*InitResponse); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_g2product_proto_msgTypes[4].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*LicenseRequest); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_g2product_proto_msgTypes[5].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*LicenseResponse); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_g2product_proto_msgTypes[6].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*VersionRequest); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
		file_g2product_proto_msgTypes[7].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*VersionResponse); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
	}
	type x struct{}
	out := protoimpl.TypeBuilder{
		File: protoimpl.DescBuilder{
			GoPackagePath: reflect.TypeOf(x{}).PkgPath(),
			RawDescriptor: file_g2product_proto_rawDesc,
			NumEnums:      0,
			NumMessages:   8,
			NumExtensions: 0,
			NumServices:   1,
		},
		GoTypes:           file_g2product_proto_goTypes,
		DependencyIndexes: file_g2product_proto_depIdxs,
		MessageInfos:      file_g2product_proto_msgTypes,
	}.Build()
	File_g2product_proto = out.File
	file_g2product_proto_rawDesc = nil
	file_g2product_proto_goTypes = nil
	file_g2product_proto_depIdxs = nil
}
