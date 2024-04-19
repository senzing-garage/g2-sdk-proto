// Code generated by protoc-gen-go. DO NOT EDIT.
// versions:
// 	protoc-gen-go v1.28.1
// 	protoc        v4.25.1
// source: szproduct.proto

package szproduct

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

type GetLicenseRequest struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields
}

func (x *GetLicenseRequest) Reset() {
	*x = GetLicenseRequest{}
	if protoimpl.UnsafeEnabled {
		mi := &file_szproduct_proto_msgTypes[0]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *GetLicenseRequest) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*GetLicenseRequest) ProtoMessage() {}

func (x *GetLicenseRequest) ProtoReflect() protoreflect.Message {
	mi := &file_szproduct_proto_msgTypes[0]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use GetLicenseRequest.ProtoReflect.Descriptor instead.
func (*GetLicenseRequest) Descriptor() ([]byte, []int) {
	return file_szproduct_proto_rawDescGZIP(), []int{0}
}

type GetLicenseResponse struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Result string `protobuf:"bytes,1,opt,name=result,proto3" json:"result,omitempty"`
}

func (x *GetLicenseResponse) Reset() {
	*x = GetLicenseResponse{}
	if protoimpl.UnsafeEnabled {
		mi := &file_szproduct_proto_msgTypes[1]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *GetLicenseResponse) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*GetLicenseResponse) ProtoMessage() {}

func (x *GetLicenseResponse) ProtoReflect() protoreflect.Message {
	mi := &file_szproduct_proto_msgTypes[1]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use GetLicenseResponse.ProtoReflect.Descriptor instead.
func (*GetLicenseResponse) Descriptor() ([]byte, []int) {
	return file_szproduct_proto_rawDescGZIP(), []int{1}
}

func (x *GetLicenseResponse) GetResult() string {
	if x != nil {
		return x.Result
	}
	return ""
}

type GetVersionRequest struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields
}

func (x *GetVersionRequest) Reset() {
	*x = GetVersionRequest{}
	if protoimpl.UnsafeEnabled {
		mi := &file_szproduct_proto_msgTypes[2]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *GetVersionRequest) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*GetVersionRequest) ProtoMessage() {}

func (x *GetVersionRequest) ProtoReflect() protoreflect.Message {
	mi := &file_szproduct_proto_msgTypes[2]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use GetVersionRequest.ProtoReflect.Descriptor instead.
func (*GetVersionRequest) Descriptor() ([]byte, []int) {
	return file_szproduct_proto_rawDescGZIP(), []int{2}
}

type GetVersionResponse struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Result string `protobuf:"bytes,1,opt,name=result,proto3" json:"result,omitempty"`
}

func (x *GetVersionResponse) Reset() {
	*x = GetVersionResponse{}
	if protoimpl.UnsafeEnabled {
		mi := &file_szproduct_proto_msgTypes[3]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *GetVersionResponse) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*GetVersionResponse) ProtoMessage() {}

func (x *GetVersionResponse) ProtoReflect() protoreflect.Message {
	mi := &file_szproduct_proto_msgTypes[3]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use GetVersionResponse.ProtoReflect.Descriptor instead.
func (*GetVersionResponse) Descriptor() ([]byte, []int) {
	return file_szproduct_proto_rawDescGZIP(), []int{3}
}

func (x *GetVersionResponse) GetResult() string {
	if x != nil {
		return x.Result
	}
	return ""
}

var File_szproduct_proto protoreflect.FileDescriptor

var file_szproduct_proto_rawDesc = []byte{
	0x0a, 0x0f, 0x73, 0x7a, 0x70, 0x72, 0x6f, 0x64, 0x75, 0x63, 0x74, 0x2e, 0x70, 0x72, 0x6f, 0x74,
	0x6f, 0x12, 0x09, 0x73, 0x7a, 0x70, 0x72, 0x6f, 0x64, 0x75, 0x63, 0x74, 0x22, 0x13, 0x0a, 0x11,
	0x47, 0x65, 0x74, 0x4c, 0x69, 0x63, 0x65, 0x6e, 0x73, 0x65, 0x52, 0x65, 0x71, 0x75, 0x65, 0x73,
	0x74, 0x22, 0x2c, 0x0a, 0x12, 0x47, 0x65, 0x74, 0x4c, 0x69, 0x63, 0x65, 0x6e, 0x73, 0x65, 0x52,
	0x65, 0x73, 0x70, 0x6f, 0x6e, 0x73, 0x65, 0x12, 0x16, 0x0a, 0x06, 0x72, 0x65, 0x73, 0x75, 0x6c,
	0x74, 0x18, 0x01, 0x20, 0x01, 0x28, 0x09, 0x52, 0x06, 0x72, 0x65, 0x73, 0x75, 0x6c, 0x74, 0x22,
	0x13, 0x0a, 0x11, 0x47, 0x65, 0x74, 0x56, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x52, 0x65, 0x71,
	0x75, 0x65, 0x73, 0x74, 0x22, 0x2c, 0x0a, 0x12, 0x47, 0x65, 0x74, 0x56, 0x65, 0x72, 0x73, 0x69,
	0x6f, 0x6e, 0x52, 0x65, 0x73, 0x70, 0x6f, 0x6e, 0x73, 0x65, 0x12, 0x16, 0x0a, 0x06, 0x72, 0x65,
	0x73, 0x75, 0x6c, 0x74, 0x18, 0x01, 0x20, 0x01, 0x28, 0x09, 0x52, 0x06, 0x72, 0x65, 0x73, 0x75,
	0x6c, 0x74, 0x32, 0xa5, 0x01, 0x0a, 0x09, 0x53, 0x7a, 0x50, 0x72, 0x6f, 0x64, 0x75, 0x63, 0x74,
	0x12, 0x4b, 0x0a, 0x0a, 0x47, 0x65, 0x74, 0x4c, 0x69, 0x63, 0x65, 0x6e, 0x73, 0x65, 0x12, 0x1c,
	0x2e, 0x73, 0x7a, 0x70, 0x72, 0x6f, 0x64, 0x75, 0x63, 0x74, 0x2e, 0x47, 0x65, 0x74, 0x4c, 0x69,
	0x63, 0x65, 0x6e, 0x73, 0x65, 0x52, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x1a, 0x1d, 0x2e, 0x73,
	0x7a, 0x70, 0x72, 0x6f, 0x64, 0x75, 0x63, 0x74, 0x2e, 0x47, 0x65, 0x74, 0x4c, 0x69, 0x63, 0x65,
	0x6e, 0x73, 0x65, 0x52, 0x65, 0x73, 0x70, 0x6f, 0x6e, 0x73, 0x65, 0x22, 0x00, 0x12, 0x4b, 0x0a,
	0x0a, 0x47, 0x65, 0x74, 0x56, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x12, 0x1c, 0x2e, 0x73, 0x7a,
	0x70, 0x72, 0x6f, 0x64, 0x75, 0x63, 0x74, 0x2e, 0x47, 0x65, 0x74, 0x56, 0x65, 0x72, 0x73, 0x69,
	0x6f, 0x6e, 0x52, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x1a, 0x1d, 0x2e, 0x73, 0x7a, 0x70, 0x72,
	0x6f, 0x64, 0x75, 0x63, 0x74, 0x2e, 0x47, 0x65, 0x74, 0x56, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e,
	0x52, 0x65, 0x73, 0x70, 0x6f, 0x6e, 0x73, 0x65, 0x22, 0x00, 0x42, 0x6a, 0x0a, 0x24, 0x63, 0x6f,
	0x6d, 0x2e, 0x73, 0x65, 0x6e, 0x7a, 0x69, 0x6e, 0x67, 0x2e, 0x73, 0x7a, 0x2e, 0x65, 0x6e, 0x67,
	0x69, 0x6e, 0x65, 0x2e, 0x67, 0x72, 0x70, 0x63, 0x2e, 0x53, 0x7a, 0x50, 0x72, 0x6f, 0x64, 0x75,
	0x63, 0x74, 0x42, 0x0e, 0x53, 0x7a, 0x50, 0x72, 0x6f, 0x64, 0x75, 0x63, 0x74, 0x50, 0x72, 0x6f,
	0x74, 0x6f, 0x5a, 0x32, 0x67, 0x69, 0x74, 0x68, 0x75, 0x62, 0x2e, 0x63, 0x6f, 0x6d, 0x2f, 0x73,
	0x65, 0x6e, 0x7a, 0x69, 0x6e, 0x67, 0x2d, 0x67, 0x61, 0x72, 0x61, 0x67, 0x65, 0x2f, 0x73, 0x7a,
	0x2d, 0x73, 0x64, 0x6b, 0x2d, 0x67, 0x6f, 0x2d, 0x67, 0x72, 0x70, 0x63, 0x2f, 0x73, 0x7a, 0x70,
	0x72, 0x6f, 0x64, 0x75, 0x63, 0x74, 0x62, 0x06, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x33,
}

var (
	file_szproduct_proto_rawDescOnce sync.Once
	file_szproduct_proto_rawDescData = file_szproduct_proto_rawDesc
)

func file_szproduct_proto_rawDescGZIP() []byte {
	file_szproduct_proto_rawDescOnce.Do(func() {
		file_szproduct_proto_rawDescData = protoimpl.X.CompressGZIP(file_szproduct_proto_rawDescData)
	})
	return file_szproduct_proto_rawDescData
}

var file_szproduct_proto_msgTypes = make([]protoimpl.MessageInfo, 4)
var file_szproduct_proto_goTypes = []interface{}{
	(*GetLicenseRequest)(nil),  // 0: szproduct.GetLicenseRequest
	(*GetLicenseResponse)(nil), // 1: szproduct.GetLicenseResponse
	(*GetVersionRequest)(nil),  // 2: szproduct.GetVersionRequest
	(*GetVersionResponse)(nil), // 3: szproduct.GetVersionResponse
}
var file_szproduct_proto_depIdxs = []int32{
	0, // 0: szproduct.SzProduct.GetLicense:input_type -> szproduct.GetLicenseRequest
	2, // 1: szproduct.SzProduct.GetVersion:input_type -> szproduct.GetVersionRequest
	1, // 2: szproduct.SzProduct.GetLicense:output_type -> szproduct.GetLicenseResponse
	3, // 3: szproduct.SzProduct.GetVersion:output_type -> szproduct.GetVersionResponse
	2, // [2:4] is the sub-list for method output_type
	0, // [0:2] is the sub-list for method input_type
	0, // [0:0] is the sub-list for extension type_name
	0, // [0:0] is the sub-list for extension extendee
	0, // [0:0] is the sub-list for field type_name
}

func init() { file_szproduct_proto_init() }
func file_szproduct_proto_init() {
	if File_szproduct_proto != nil {
		return
	}
	if !protoimpl.UnsafeEnabled {
		file_szproduct_proto_msgTypes[0].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*GetLicenseRequest); i {
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
		file_szproduct_proto_msgTypes[1].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*GetLicenseResponse); i {
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
		file_szproduct_proto_msgTypes[2].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*GetVersionRequest); i {
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
		file_szproduct_proto_msgTypes[3].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*GetVersionResponse); i {
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
			RawDescriptor: file_szproduct_proto_rawDesc,
			NumEnums:      0,
			NumMessages:   4,
			NumExtensions: 0,
			NumServices:   1,
		},
		GoTypes:           file_szproduct_proto_goTypes,
		DependencyIndexes: file_szproduct_proto_depIdxs,
		MessageInfos:      file_szproduct_proto_msgTypes,
	}.Build()
	File_szproduct_proto = out.File
	file_szproduct_proto_rawDesc = nil
	file_szproduct_proto_goTypes = nil
	file_szproduct_proto_depIdxs = nil
}
