// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rpc_pkg.proto

#ifndef PROTOBUF_rpc_5fpkg_2eproto__INCLUDED
#define PROTOBUF_rpc_5fpkg_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_rpc_5fpkg_2eproto();
void protobuf_AssignDesc_rpc_5fpkg_2eproto();
void protobuf_ShutdownFile_rpc_5fpkg_2eproto();

class RpcPackage;

// ===================================================================

class RpcPackage : public ::google::protobuf::Message {
 public:
  RpcPackage();
  virtual ~RpcPackage();

  RpcPackage(const RpcPackage& from);

  inline RpcPackage& operator=(const RpcPackage& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const RpcPackage& default_instance();

  void Swap(RpcPackage* other);

  // implements Message ----------------------------------------------

  RpcPackage* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RpcPackage& from);
  void MergeFrom(const RpcPackage& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string service_name = 1;
  inline bool has_service_name() const;
  inline void clear_service_name();
  static const int kServiceNameFieldNumber = 1;
  inline const ::std::string& service_name() const;
  inline void set_service_name(const ::std::string& value);
  inline void set_service_name(const char* value);
  inline void set_service_name(const char* value, size_t size);
  inline ::std::string* mutable_service_name();
  inline ::std::string* release_service_name();
  inline void set_allocated_service_name(::std::string* service_name);

  // required string method_name = 2;
  inline bool has_method_name() const;
  inline void clear_method_name();
  static const int kMethodNameFieldNumber = 2;
  inline const ::std::string& method_name() const;
  inline void set_method_name(const ::std::string& value);
  inline void set_method_name(const char* value);
  inline void set_method_name(const char* value, size_t size);
  inline ::std::string* mutable_method_name();
  inline ::std::string* release_method_name();
  inline void set_allocated_method_name(::std::string* method_name);

  // required int32 pkg_size = 3;
  inline bool has_pkg_size() const;
  inline void clear_pkg_size();
  static const int kPkgSizeFieldNumber = 3;
  inline ::google::protobuf::int32 pkg_size() const;
  inline void set_pkg_size(::google::protobuf::int32 value);

  // required bytes pkg = 4;
  inline bool has_pkg() const;
  inline void clear_pkg();
  static const int kPkgFieldNumber = 4;
  inline const ::std::string& pkg() const;
  inline void set_pkg(const ::std::string& value);
  inline void set_pkg(const char* value);
  inline void set_pkg(const void* value, size_t size);
  inline ::std::string* mutable_pkg();
  inline ::std::string* release_pkg();
  inline void set_allocated_pkg(::std::string* pkg);

  // @@protoc_insertion_point(class_scope:RpcPackage)
 private:
  inline void set_has_service_name();
  inline void clear_has_service_name();
  inline void set_has_method_name();
  inline void clear_has_method_name();
  inline void set_has_pkg_size();
  inline void clear_has_pkg_size();
  inline void set_has_pkg();
  inline void clear_has_pkg();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* service_name_;
  ::std::string* method_name_;
  ::std::string* pkg_;
  ::google::protobuf::int32 pkg_size_;
  friend void  protobuf_AddDesc_rpc_5fpkg_2eproto();
  friend void protobuf_AssignDesc_rpc_5fpkg_2eproto();
  friend void protobuf_ShutdownFile_rpc_5fpkg_2eproto();

  void InitAsDefaultInstance();
  static RpcPackage* default_instance_;
};
// ===================================================================


// ===================================================================

// RpcPackage

// required string service_name = 1;
inline bool RpcPackage::has_service_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RpcPackage::set_has_service_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RpcPackage::clear_has_service_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RpcPackage::clear_service_name() {
  if (service_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    service_name_->clear();
  }
  clear_has_service_name();
}
inline const ::std::string& RpcPackage::service_name() const {
  // @@protoc_insertion_point(field_get:RpcPackage.service_name)
  return *service_name_;
}
inline void RpcPackage::set_service_name(const ::std::string& value) {
  set_has_service_name();
  if (service_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    service_name_ = new ::std::string;
  }
  service_name_->assign(value);
  // @@protoc_insertion_point(field_set:RpcPackage.service_name)
}
inline void RpcPackage::set_service_name(const char* value) {
  set_has_service_name();
  if (service_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    service_name_ = new ::std::string;
  }
  service_name_->assign(value);
  // @@protoc_insertion_point(field_set_char:RpcPackage.service_name)
}
inline void RpcPackage::set_service_name(const char* value, size_t size) {
  set_has_service_name();
  if (service_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    service_name_ = new ::std::string;
  }
  service_name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:RpcPackage.service_name)
}
inline ::std::string* RpcPackage::mutable_service_name() {
  set_has_service_name();
  if (service_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    service_name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:RpcPackage.service_name)
  return service_name_;
}
inline ::std::string* RpcPackage::release_service_name() {
  clear_has_service_name();
  if (service_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = service_name_;
    service_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void RpcPackage::set_allocated_service_name(::std::string* service_name) {
  if (service_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete service_name_;
  }
  if (service_name) {
    set_has_service_name();
    service_name_ = service_name;
  } else {
    clear_has_service_name();
    service_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:RpcPackage.service_name)
}

// required string method_name = 2;
inline bool RpcPackage::has_method_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RpcPackage::set_has_method_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RpcPackage::clear_has_method_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RpcPackage::clear_method_name() {
  if (method_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    method_name_->clear();
  }
  clear_has_method_name();
}
inline const ::std::string& RpcPackage::method_name() const {
  // @@protoc_insertion_point(field_get:RpcPackage.method_name)
  return *method_name_;
}
inline void RpcPackage::set_method_name(const ::std::string& value) {
  set_has_method_name();
  if (method_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    method_name_ = new ::std::string;
  }
  method_name_->assign(value);
  // @@protoc_insertion_point(field_set:RpcPackage.method_name)
}
inline void RpcPackage::set_method_name(const char* value) {
  set_has_method_name();
  if (method_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    method_name_ = new ::std::string;
  }
  method_name_->assign(value);
  // @@protoc_insertion_point(field_set_char:RpcPackage.method_name)
}
inline void RpcPackage::set_method_name(const char* value, size_t size) {
  set_has_method_name();
  if (method_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    method_name_ = new ::std::string;
  }
  method_name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:RpcPackage.method_name)
}
inline ::std::string* RpcPackage::mutable_method_name() {
  set_has_method_name();
  if (method_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    method_name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:RpcPackage.method_name)
  return method_name_;
}
inline ::std::string* RpcPackage::release_method_name() {
  clear_has_method_name();
  if (method_name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = method_name_;
    method_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void RpcPackage::set_allocated_method_name(::std::string* method_name) {
  if (method_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete method_name_;
  }
  if (method_name) {
    set_has_method_name();
    method_name_ = method_name;
  } else {
    clear_has_method_name();
    method_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:RpcPackage.method_name)
}

// required int32 pkg_size = 3;
inline bool RpcPackage::has_pkg_size() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void RpcPackage::set_has_pkg_size() {
  _has_bits_[0] |= 0x00000004u;
}
inline void RpcPackage::clear_has_pkg_size() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void RpcPackage::clear_pkg_size() {
  pkg_size_ = 0;
  clear_has_pkg_size();
}
inline ::google::protobuf::int32 RpcPackage::pkg_size() const {
  // @@protoc_insertion_point(field_get:RpcPackage.pkg_size)
  return pkg_size_;
}
inline void RpcPackage::set_pkg_size(::google::protobuf::int32 value) {
  set_has_pkg_size();
  pkg_size_ = value;
  // @@protoc_insertion_point(field_set:RpcPackage.pkg_size)
}

// required bytes pkg = 4;
inline bool RpcPackage::has_pkg() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void RpcPackage::set_has_pkg() {
  _has_bits_[0] |= 0x00000008u;
}
inline void RpcPackage::clear_has_pkg() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void RpcPackage::clear_pkg() {
  if (pkg_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    pkg_->clear();
  }
  clear_has_pkg();
}
inline const ::std::string& RpcPackage::pkg() const {
  // @@protoc_insertion_point(field_get:RpcPackage.pkg)
  return *pkg_;
}
inline void RpcPackage::set_pkg(const ::std::string& value) {
  set_has_pkg();
  if (pkg_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    pkg_ = new ::std::string;
  }
  pkg_->assign(value);
  // @@protoc_insertion_point(field_set:RpcPackage.pkg)
}
inline void RpcPackage::set_pkg(const char* value) {
  set_has_pkg();
  if (pkg_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    pkg_ = new ::std::string;
  }
  pkg_->assign(value);
  // @@protoc_insertion_point(field_set_char:RpcPackage.pkg)
}
inline void RpcPackage::set_pkg(const void* value, size_t size) {
  set_has_pkg();
  if (pkg_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    pkg_ = new ::std::string;
  }
  pkg_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:RpcPackage.pkg)
}
inline ::std::string* RpcPackage::mutable_pkg() {
  set_has_pkg();
  if (pkg_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    pkg_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:RpcPackage.pkg)
  return pkg_;
}
inline ::std::string* RpcPackage::release_pkg() {
  clear_has_pkg();
  if (pkg_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = pkg_;
    pkg_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void RpcPackage::set_allocated_pkg(::std::string* pkg) {
  if (pkg_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete pkg_;
  }
  if (pkg) {
    set_has_pkg();
    pkg_ = pkg;
  } else {
    clear_has_pkg();
    pkg_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:RpcPackage.pkg)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_rpc_5fpkg_2eproto__INCLUDED
