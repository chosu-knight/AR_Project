﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.IntPtr[]
struct IntPtrU5BU5D_t1910612814;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t2080431949;
// System.Collections.ArrayList
struct ArrayList_t3465324181;
// System.Char[]
struct CharU5BU5D_t1085015499;
// System.Reflection.Assembly
struct Assembly_t3416756239;
// System.Byte[]
struct ByteU5BU5D_t317375469;
// System.Collections.IEnumerator
struct IEnumerator_t4106850227;
// System.Security.Cryptography.RijndaelTransform
struct RijndaelTransform_t4036756015;
// System.UInt32[]
struct UInt32U5BU5D_t1435100350;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t704442840;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t3143434466;
// System.UInt64[]
struct UInt64U5BU5D_t1494213460;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t888819165;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t2611943804;
// System.Version
struct Version_t227327351;
// System.Collections.Hashtable
struct Hashtable_t1283080349;
// System.Collections.Generic.IList`1<System.Security.Policy.StrongName>
struct IList_1_t3872828607;
// System.Security.Cryptography.RSA
struct RSA_t1050577473;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1249475727;
// System.Void
struct Void_t1196225232;
// System.Security.Cryptography.DSA
struct DSA_t28453765;
// System.AppDomain
struct AppDomain_t2294927346;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Security.PermissionSet
struct PermissionSet_t2481005838;
// System.Security.Cryptography.DESTransform
struct DESTransform_t4291006340;
// System.UInt16[]
struct UInt16U5BU5D_t3499399594;
// System.Threading.CompressedStack
struct CompressedStack_t3821793422;
// System.Type
struct Type_t;
// System.Security.IPermission
struct IPermission_t2451729021;
// System.Security.Policy.Evidence
struct Evidence_t2966650440;
// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t3212350790;
// Mono.Security.Cryptography.DSAManaged
struct DSAManaged_t1478013134;
// Mono.Security.Cryptography.BlockProcessor
struct BlockProcessor_t3031103089;
// System.Security.Cryptography.TripleDES
struct TripleDES_t2260975313;
// Mono.Security.Cryptography.MACAlgorithm
struct MACAlgorithm_t1963790851;
// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t421323775;
// System.Security.Cryptography.SHA1Internal
struct SHA1Internal_t2955367709;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1901961291;
// System.Byte[,]
struct ByteU5BU2CU5D_t317375470;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef EXCEPTION_T1325901032_H
#define EXCEPTION_T1325901032_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t1325901032  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t1910612814* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t1325901032 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t1325901032, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t1910612814* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t1910612814** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t1910612814* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t1325901032, ___inner_exception_1)); }
	inline Exception_t1325901032 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t1325901032 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t1325901032 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t1325901032, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t1325901032, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t1325901032, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t1325901032, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t1325901032, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t1325901032, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t1325901032, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t1325901032, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t1325901032, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T1325901032_H
#ifndef SECURITYELEMENT_T3933983653_H
#define SECURITYELEMENT_T3933983653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityElement
struct  SecurityElement_t3933983653  : public RuntimeObject
{
public:
	// System.String System.Security.SecurityElement::text
	String_t* ___text_0;
	// System.String System.Security.SecurityElement::tag
	String_t* ___tag_1;
	// System.Collections.ArrayList System.Security.SecurityElement::attributes
	ArrayList_t3465324181 * ___attributes_2;
	// System.Collections.ArrayList System.Security.SecurityElement::children
	ArrayList_t3465324181 * ___children_3;

public:
	inline static int32_t get_offset_of_text_0() { return static_cast<int32_t>(offsetof(SecurityElement_t3933983653, ___text_0)); }
	inline String_t* get_text_0() const { return ___text_0; }
	inline String_t** get_address_of_text_0() { return &___text_0; }
	inline void set_text_0(String_t* value)
	{
		___text_0 = value;
		Il2CppCodeGenWriteBarrier((&___text_0), value);
	}

	inline static int32_t get_offset_of_tag_1() { return static_cast<int32_t>(offsetof(SecurityElement_t3933983653, ___tag_1)); }
	inline String_t* get_tag_1() const { return ___tag_1; }
	inline String_t** get_address_of_tag_1() { return &___tag_1; }
	inline void set_tag_1(String_t* value)
	{
		___tag_1 = value;
		Il2CppCodeGenWriteBarrier((&___tag_1), value);
	}

	inline static int32_t get_offset_of_attributes_2() { return static_cast<int32_t>(offsetof(SecurityElement_t3933983653, ___attributes_2)); }
	inline ArrayList_t3465324181 * get_attributes_2() const { return ___attributes_2; }
	inline ArrayList_t3465324181 ** get_address_of_attributes_2() { return &___attributes_2; }
	inline void set_attributes_2(ArrayList_t3465324181 * value)
	{
		___attributes_2 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_2), value);
	}

	inline static int32_t get_offset_of_children_3() { return static_cast<int32_t>(offsetof(SecurityElement_t3933983653, ___children_3)); }
	inline ArrayList_t3465324181 * get_children_3() const { return ___children_3; }
	inline ArrayList_t3465324181 ** get_address_of_children_3() { return &___children_3; }
	inline void set_children_3(ArrayList_t3465324181 * value)
	{
		___children_3 = value;
		Il2CppCodeGenWriteBarrier((&___children_3), value);
	}
};

struct SecurityElement_t3933983653_StaticFields
{
public:
	// System.Char[] System.Security.SecurityElement::invalid_tag_chars
	CharU5BU5D_t1085015499* ___invalid_tag_chars_4;
	// System.Char[] System.Security.SecurityElement::invalid_text_chars
	CharU5BU5D_t1085015499* ___invalid_text_chars_5;
	// System.Char[] System.Security.SecurityElement::invalid_attr_name_chars
	CharU5BU5D_t1085015499* ___invalid_attr_name_chars_6;
	// System.Char[] System.Security.SecurityElement::invalid_attr_value_chars
	CharU5BU5D_t1085015499* ___invalid_attr_value_chars_7;
	// System.Char[] System.Security.SecurityElement::invalid_chars
	CharU5BU5D_t1085015499* ___invalid_chars_8;

public:
	inline static int32_t get_offset_of_invalid_tag_chars_4() { return static_cast<int32_t>(offsetof(SecurityElement_t3933983653_StaticFields, ___invalid_tag_chars_4)); }
	inline CharU5BU5D_t1085015499* get_invalid_tag_chars_4() const { return ___invalid_tag_chars_4; }
	inline CharU5BU5D_t1085015499** get_address_of_invalid_tag_chars_4() { return &___invalid_tag_chars_4; }
	inline void set_invalid_tag_chars_4(CharU5BU5D_t1085015499* value)
	{
		___invalid_tag_chars_4 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_tag_chars_4), value);
	}

	inline static int32_t get_offset_of_invalid_text_chars_5() { return static_cast<int32_t>(offsetof(SecurityElement_t3933983653_StaticFields, ___invalid_text_chars_5)); }
	inline CharU5BU5D_t1085015499* get_invalid_text_chars_5() const { return ___invalid_text_chars_5; }
	inline CharU5BU5D_t1085015499** get_address_of_invalid_text_chars_5() { return &___invalid_text_chars_5; }
	inline void set_invalid_text_chars_5(CharU5BU5D_t1085015499* value)
	{
		___invalid_text_chars_5 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_text_chars_5), value);
	}

	inline static int32_t get_offset_of_invalid_attr_name_chars_6() { return static_cast<int32_t>(offsetof(SecurityElement_t3933983653_StaticFields, ___invalid_attr_name_chars_6)); }
	inline CharU5BU5D_t1085015499* get_invalid_attr_name_chars_6() const { return ___invalid_attr_name_chars_6; }
	inline CharU5BU5D_t1085015499** get_address_of_invalid_attr_name_chars_6() { return &___invalid_attr_name_chars_6; }
	inline void set_invalid_attr_name_chars_6(CharU5BU5D_t1085015499* value)
	{
		___invalid_attr_name_chars_6 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_attr_name_chars_6), value);
	}

	inline static int32_t get_offset_of_invalid_attr_value_chars_7() { return static_cast<int32_t>(offsetof(SecurityElement_t3933983653_StaticFields, ___invalid_attr_value_chars_7)); }
	inline CharU5BU5D_t1085015499* get_invalid_attr_value_chars_7() const { return ___invalid_attr_value_chars_7; }
	inline CharU5BU5D_t1085015499** get_address_of_invalid_attr_value_chars_7() { return &___invalid_attr_value_chars_7; }
	inline void set_invalid_attr_value_chars_7(CharU5BU5D_t1085015499* value)
	{
		___invalid_attr_value_chars_7 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_attr_value_chars_7), value);
	}

	inline static int32_t get_offset_of_invalid_chars_8() { return static_cast<int32_t>(offsetof(SecurityElement_t3933983653_StaticFields, ___invalid_chars_8)); }
	inline CharU5BU5D_t1085015499* get_invalid_chars_8() const { return ___invalid_chars_8; }
	inline CharU5BU5D_t1085015499** get_address_of_invalid_chars_8() { return &___invalid_chars_8; }
	inline void set_invalid_chars_8(CharU5BU5D_t1085015499* value)
	{
		___invalid_chars_8 = value;
		Il2CppCodeGenWriteBarrier((&___invalid_chars_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYELEMENT_T3933983653_H
#ifndef HASH_T2682973573_H
#define HASH_T2682973573_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Hash
struct  Hash_t2682973573  : public RuntimeObject
{
public:
	// System.Reflection.Assembly System.Security.Policy.Hash::assembly
	Assembly_t3416756239 * ___assembly_0;
	// System.Byte[] System.Security.Policy.Hash::data
	ByteU5BU5D_t317375469* ___data_1;

public:
	inline static int32_t get_offset_of_assembly_0() { return static_cast<int32_t>(offsetof(Hash_t2682973573, ___assembly_0)); }
	inline Assembly_t3416756239 * get_assembly_0() const { return ___assembly_0; }
	inline Assembly_t3416756239 ** get_address_of_assembly_0() { return &___assembly_0; }
	inline void set_assembly_0(Assembly_t3416756239 * value)
	{
		___assembly_0 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_0), value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(Hash_t2682973573, ___data_1)); }
	inline ByteU5BU5D_t317375469* get_data_1() const { return ___data_1; }
	inline ByteU5BU5D_t317375469** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ByteU5BU5D_t317375469* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASH_T2682973573_H
#ifndef SECURITYATTRIBUTE_T2417636248_H
#define SECURITYATTRIBUTE_T2417636248_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityElement/SecurityAttribute
struct  SecurityAttribute_t2417636248  : public RuntimeObject
{
public:
	// System.String System.Security.SecurityElement/SecurityAttribute::_name
	String_t* ____name_0;
	// System.String System.Security.SecurityElement/SecurityAttribute::_value
	String_t* ____value_1;

public:
	inline static int32_t get_offset_of__name_0() { return static_cast<int32_t>(offsetof(SecurityAttribute_t2417636248, ____name_0)); }
	inline String_t* get__name_0() const { return ____name_0; }
	inline String_t** get_address_of__name_0() { return &____name_0; }
	inline void set__name_0(String_t* value)
	{
		____name_0 = value;
		Il2CppCodeGenWriteBarrier((&____name_0), value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(SecurityAttribute_t2417636248, ____value_1)); }
	inline String_t* get__value_1() const { return ____value_1; }
	inline String_t** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(String_t* value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((&____value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYATTRIBUTE_T2417636248_H
#ifndef EVIDENCEENUMERATOR_T1433021778_H
#define EVIDENCEENUMERATOR_T1433021778_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Evidence/EvidenceEnumerator
struct  EvidenceEnumerator_t1433021778  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::currentEnum
	RuntimeObject* ___currentEnum_0;
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::hostEnum
	RuntimeObject* ___hostEnum_1;
	// System.Collections.IEnumerator System.Security.Policy.Evidence/EvidenceEnumerator::assemblyEnum
	RuntimeObject* ___assemblyEnum_2;

public:
	inline static int32_t get_offset_of_currentEnum_0() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t1433021778, ___currentEnum_0)); }
	inline RuntimeObject* get_currentEnum_0() const { return ___currentEnum_0; }
	inline RuntimeObject** get_address_of_currentEnum_0() { return &___currentEnum_0; }
	inline void set_currentEnum_0(RuntimeObject* value)
	{
		___currentEnum_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentEnum_0), value);
	}

	inline static int32_t get_offset_of_hostEnum_1() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t1433021778, ___hostEnum_1)); }
	inline RuntimeObject* get_hostEnum_1() const { return ___hostEnum_1; }
	inline RuntimeObject** get_address_of_hostEnum_1() { return &___hostEnum_1; }
	inline void set_hostEnum_1(RuntimeObject* value)
	{
		___hostEnum_1 = value;
		Il2CppCodeGenWriteBarrier((&___hostEnum_1), value);
	}

	inline static int32_t get_offset_of_assemblyEnum_2() { return static_cast<int32_t>(offsetof(EvidenceEnumerator_t1433021778, ___assemblyEnum_2)); }
	inline RuntimeObject* get_assemblyEnum_2() const { return ___assemblyEnum_2; }
	inline RuntimeObject** get_address_of_assemblyEnum_2() { return &___assemblyEnum_2; }
	inline void set_assemblyEnum_2(RuntimeObject* value)
	{
		___assemblyEnum_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyEnum_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVIDENCEENUMERATOR_T1433021778_H
#ifndef KEYSIZES_T2181691988_H
#define KEYSIZES_T2181691988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.KeySizes
struct  KeySizes_t2181691988  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.KeySizes::_maxSize
	int32_t ____maxSize_0;
	// System.Int32 System.Security.Cryptography.KeySizes::_minSize
	int32_t ____minSize_1;
	// System.Int32 System.Security.Cryptography.KeySizes::_skipSize
	int32_t ____skipSize_2;

public:
	inline static int32_t get_offset_of__maxSize_0() { return static_cast<int32_t>(offsetof(KeySizes_t2181691988, ____maxSize_0)); }
	inline int32_t get__maxSize_0() const { return ____maxSize_0; }
	inline int32_t* get_address_of__maxSize_0() { return &____maxSize_0; }
	inline void set__maxSize_0(int32_t value)
	{
		____maxSize_0 = value;
	}

	inline static int32_t get_offset_of__minSize_1() { return static_cast<int32_t>(offsetof(KeySizes_t2181691988, ____minSize_1)); }
	inline int32_t get__minSize_1() const { return ____minSize_1; }
	inline int32_t* get_address_of__minSize_1() { return &____minSize_1; }
	inline void set__minSize_1(int32_t value)
	{
		____minSize_1 = value;
	}

	inline static int32_t get_offset_of__skipSize_2() { return static_cast<int32_t>(offsetof(KeySizes_t2181691988, ____skipSize_2)); }
	inline int32_t get__skipSize_2() const { return ____skipSize_2; }
	inline int32_t* get_address_of__skipSize_2() { return &____skipSize_2; }
	inline void set__skipSize_2(int32_t value)
	{
		____skipSize_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYSIZES_T2181691988_H
#ifndef HASHALGORITHM_T1249475727_H
#define HASHALGORITHM_T1249475727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HashAlgorithm
struct  HashAlgorithm_t1249475727  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_t317375469* ___HashValue_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_HashValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1249475727, ___HashValue_0)); }
	inline ByteU5BU5D_t317375469* get_HashValue_0() const { return ___HashValue_0; }
	inline ByteU5BU5D_t317375469** get_address_of_HashValue_0() { return &___HashValue_0; }
	inline void set_HashValue_0(ByteU5BU5D_t317375469* value)
	{
		___HashValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___HashValue_0), value);
	}

	inline static int32_t get_offset_of_HashSizeValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1249475727, ___HashSizeValue_1)); }
	inline int32_t get_HashSizeValue_1() const { return ___HashSizeValue_1; }
	inline int32_t* get_address_of_HashSizeValue_1() { return &___HashSizeValue_1; }
	inline void set_HashSizeValue_1(int32_t value)
	{
		___HashSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1249475727, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1249475727, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHALGORITHM_T1249475727_H
#ifndef RIJNDAELMANAGEDTRANSFORM_T4278362833_H
#define RIJNDAELMANAGEDTRANSFORM_T4278362833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RijndaelManagedTransform
struct  RijndaelManagedTransform_t4278362833  : public RuntimeObject
{
public:
	// System.Security.Cryptography.RijndaelTransform System.Security.Cryptography.RijndaelManagedTransform::_st
	RijndaelTransform_t4036756015 * ____st_0;
	// System.Int32 System.Security.Cryptography.RijndaelManagedTransform::_bs
	int32_t ____bs_1;

public:
	inline static int32_t get_offset_of__st_0() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t4278362833, ____st_0)); }
	inline RijndaelTransform_t4036756015 * get__st_0() const { return ____st_0; }
	inline RijndaelTransform_t4036756015 ** get_address_of__st_0() { return &____st_0; }
	inline void set__st_0(RijndaelTransform_t4036756015 * value)
	{
		____st_0 = value;
		Il2CppCodeGenWriteBarrier((&____st_0), value);
	}

	inline static int32_t get_offset_of__bs_1() { return static_cast<int32_t>(offsetof(RijndaelManagedTransform_t4278362833, ____bs_1)); }
	inline int32_t get__bs_1() const { return ____bs_1; }
	inline int32_t* get_address_of__bs_1() { return &____bs_1; }
	inline void set__bs_1(int32_t value)
	{
		____bs_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAELMANAGEDTRANSFORM_T4278362833_H
#ifndef ATTRIBUTE_T2885837796_H
#define ATTRIBUTE_T2885837796_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t2885837796  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T2885837796_H
#ifndef EVIDENCE_T2966650440_H
#define EVIDENCE_T2966650440_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Evidence
struct  Evidence_t2966650440  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Security.Policy.Evidence::hostEvidenceList
	ArrayList_t3465324181 * ___hostEvidenceList_0;
	// System.Collections.ArrayList System.Security.Policy.Evidence::assemblyEvidenceList
	ArrayList_t3465324181 * ___assemblyEvidenceList_1;
	// System.Int32 System.Security.Policy.Evidence::_hashCode
	int32_t ____hashCode_2;

public:
	inline static int32_t get_offset_of_hostEvidenceList_0() { return static_cast<int32_t>(offsetof(Evidence_t2966650440, ___hostEvidenceList_0)); }
	inline ArrayList_t3465324181 * get_hostEvidenceList_0() const { return ___hostEvidenceList_0; }
	inline ArrayList_t3465324181 ** get_address_of_hostEvidenceList_0() { return &___hostEvidenceList_0; }
	inline void set_hostEvidenceList_0(ArrayList_t3465324181 * value)
	{
		___hostEvidenceList_0 = value;
		Il2CppCodeGenWriteBarrier((&___hostEvidenceList_0), value);
	}

	inline static int32_t get_offset_of_assemblyEvidenceList_1() { return static_cast<int32_t>(offsetof(Evidence_t2966650440, ___assemblyEvidenceList_1)); }
	inline ArrayList_t3465324181 * get_assemblyEvidenceList_1() const { return ___assemblyEvidenceList_1; }
	inline ArrayList_t3465324181 ** get_address_of_assemblyEvidenceList_1() { return &___assemblyEvidenceList_1; }
	inline void set_assemblyEvidenceList_1(ArrayList_t3465324181 * value)
	{
		___assemblyEvidenceList_1 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyEvidenceList_1), value);
	}

	inline static int32_t get_offset_of__hashCode_2() { return static_cast<int32_t>(offsetof(Evidence_t2966650440, ____hashCode_2)); }
	inline int32_t get__hashCode_2() const { return ____hashCode_2; }
	inline int32_t* get_address_of__hashCode_2() { return &____hashCode_2; }
	inline void set__hashCode_2(int32_t value)
	{
		____hashCode_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVIDENCE_T2966650440_H
#ifndef CODEACCESSPERMISSION_T2613798098_H
#define CODEACCESSPERMISSION_T2613798098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.CodeAccessPermission
struct  CodeAccessPermission_t2613798098  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEACCESSPERMISSION_T2613798098_H
#ifndef SHA1INTERNAL_T2955367709_H
#define SHA1INTERNAL_T2955367709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1Internal
struct  SHA1Internal_t2955367709  : public RuntimeObject
{
public:
	// System.UInt32[] System.Security.Cryptography.SHA1Internal::_H
	UInt32U5BU5D_t1435100350* ____H_0;
	// System.UInt64 System.Security.Cryptography.SHA1Internal::count
	uint64_t ___count_1;
	// System.Byte[] System.Security.Cryptography.SHA1Internal::_ProcessingBuffer
	ByteU5BU5D_t317375469* ____ProcessingBuffer_2;
	// System.Int32 System.Security.Cryptography.SHA1Internal::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_3;
	// System.UInt32[] System.Security.Cryptography.SHA1Internal::buff
	UInt32U5BU5D_t1435100350* ___buff_4;

public:
	inline static int32_t get_offset_of__H_0() { return static_cast<int32_t>(offsetof(SHA1Internal_t2955367709, ____H_0)); }
	inline UInt32U5BU5D_t1435100350* get__H_0() const { return ____H_0; }
	inline UInt32U5BU5D_t1435100350** get_address_of__H_0() { return &____H_0; }
	inline void set__H_0(UInt32U5BU5D_t1435100350* value)
	{
		____H_0 = value;
		Il2CppCodeGenWriteBarrier((&____H_0), value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(SHA1Internal_t2955367709, ___count_1)); }
	inline uint64_t get_count_1() const { return ___count_1; }
	inline uint64_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(uint64_t value)
	{
		___count_1 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_2() { return static_cast<int32_t>(offsetof(SHA1Internal_t2955367709, ____ProcessingBuffer_2)); }
	inline ByteU5BU5D_t317375469* get__ProcessingBuffer_2() const { return ____ProcessingBuffer_2; }
	inline ByteU5BU5D_t317375469** get_address_of__ProcessingBuffer_2() { return &____ProcessingBuffer_2; }
	inline void set__ProcessingBuffer_2(ByteU5BU5D_t317375469* value)
	{
		____ProcessingBuffer_2 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_2), value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_3() { return static_cast<int32_t>(offsetof(SHA1Internal_t2955367709, ____ProcessingBufferCount_3)); }
	inline int32_t get__ProcessingBufferCount_3() const { return ____ProcessingBufferCount_3; }
	inline int32_t* get_address_of__ProcessingBufferCount_3() { return &____ProcessingBufferCount_3; }
	inline void set__ProcessingBufferCount_3(int32_t value)
	{
		____ProcessingBufferCount_3 = value;
	}

	inline static int32_t get_offset_of_buff_4() { return static_cast<int32_t>(offsetof(SHA1Internal_t2955367709, ___buff_4)); }
	inline UInt32U5BU5D_t1435100350* get_buff_4() const { return ___buff_4; }
	inline UInt32U5BU5D_t1435100350** get_address_of_buff_4() { return &___buff_4; }
	inline void set_buff_4(UInt32U5BU5D_t1435100350* value)
	{
		___buff_4 = value;
		Il2CppCodeGenWriteBarrier((&___buff_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1INTERNAL_T2955367709_H
#ifndef SYMMETRICTRANSFORM_T2886634140_H
#define SYMMETRICTRANSFORM_T2886634140_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.SymmetricTransform
struct  SymmetricTransform_t2886634140  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.SymmetricTransform::algo
	SymmetricAlgorithm_t704442840 * ___algo_0;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::encrypt
	bool ___encrypt_1;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::BlockSizeByte
	int32_t ___BlockSizeByte_2;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp
	ByteU5BU5D_t317375469* ___temp_3;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp2
	ByteU5BU5D_t317375469* ___temp2_4;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workBuff
	ByteU5BU5D_t317375469* ___workBuff_5;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workout
	ByteU5BU5D_t317375469* ___workout_6;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackByte
	int32_t ___FeedBackByte_7;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackIter
	int32_t ___FeedBackIter_8;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::m_disposed
	bool ___m_disposed_9;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::lastBlock
	bool ___lastBlock_10;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.SymmetricTransform::_rng
	RandomNumberGenerator_t3143434466 * ____rng_11;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2886634140, ___algo_0)); }
	inline SymmetricAlgorithm_t704442840 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_t704442840 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_t704442840 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((&___algo_0), value);
	}

	inline static int32_t get_offset_of_encrypt_1() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2886634140, ___encrypt_1)); }
	inline bool get_encrypt_1() const { return ___encrypt_1; }
	inline bool* get_address_of_encrypt_1() { return &___encrypt_1; }
	inline void set_encrypt_1(bool value)
	{
		___encrypt_1 = value;
	}

	inline static int32_t get_offset_of_BlockSizeByte_2() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2886634140, ___BlockSizeByte_2)); }
	inline int32_t get_BlockSizeByte_2() const { return ___BlockSizeByte_2; }
	inline int32_t* get_address_of_BlockSizeByte_2() { return &___BlockSizeByte_2; }
	inline void set_BlockSizeByte_2(int32_t value)
	{
		___BlockSizeByte_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2886634140, ___temp_3)); }
	inline ByteU5BU5D_t317375469* get_temp_3() const { return ___temp_3; }
	inline ByteU5BU5D_t317375469** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(ByteU5BU5D_t317375469* value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier((&___temp_3), value);
	}

	inline static int32_t get_offset_of_temp2_4() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2886634140, ___temp2_4)); }
	inline ByteU5BU5D_t317375469* get_temp2_4() const { return ___temp2_4; }
	inline ByteU5BU5D_t317375469** get_address_of_temp2_4() { return &___temp2_4; }
	inline void set_temp2_4(ByteU5BU5D_t317375469* value)
	{
		___temp2_4 = value;
		Il2CppCodeGenWriteBarrier((&___temp2_4), value);
	}

	inline static int32_t get_offset_of_workBuff_5() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2886634140, ___workBuff_5)); }
	inline ByteU5BU5D_t317375469* get_workBuff_5() const { return ___workBuff_5; }
	inline ByteU5BU5D_t317375469** get_address_of_workBuff_5() { return &___workBuff_5; }
	inline void set_workBuff_5(ByteU5BU5D_t317375469* value)
	{
		___workBuff_5 = value;
		Il2CppCodeGenWriteBarrier((&___workBuff_5), value);
	}

	inline static int32_t get_offset_of_workout_6() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2886634140, ___workout_6)); }
	inline ByteU5BU5D_t317375469* get_workout_6() const { return ___workout_6; }
	inline ByteU5BU5D_t317375469** get_address_of_workout_6() { return &___workout_6; }
	inline void set_workout_6(ByteU5BU5D_t317375469* value)
	{
		___workout_6 = value;
		Il2CppCodeGenWriteBarrier((&___workout_6), value);
	}

	inline static int32_t get_offset_of_FeedBackByte_7() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2886634140, ___FeedBackByte_7)); }
	inline int32_t get_FeedBackByte_7() const { return ___FeedBackByte_7; }
	inline int32_t* get_address_of_FeedBackByte_7() { return &___FeedBackByte_7; }
	inline void set_FeedBackByte_7(int32_t value)
	{
		___FeedBackByte_7 = value;
	}

	inline static int32_t get_offset_of_FeedBackIter_8() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2886634140, ___FeedBackIter_8)); }
	inline int32_t get_FeedBackIter_8() const { return ___FeedBackIter_8; }
	inline int32_t* get_address_of_FeedBackIter_8() { return &___FeedBackIter_8; }
	inline void set_FeedBackIter_8(int32_t value)
	{
		___FeedBackIter_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2886634140, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}

	inline static int32_t get_offset_of_lastBlock_10() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2886634140, ___lastBlock_10)); }
	inline bool get_lastBlock_10() const { return ___lastBlock_10; }
	inline bool* get_address_of_lastBlock_10() { return &___lastBlock_10; }
	inline void set_lastBlock_10(bool value)
	{
		___lastBlock_10 = value;
	}

	inline static int32_t get_offset_of__rng_11() { return static_cast<int32_t>(offsetof(SymmetricTransform_t2886634140, ____rng_11)); }
	inline RandomNumberGenerator_t3143434466 * get__rng_11() const { return ____rng_11; }
	inline RandomNumberGenerator_t3143434466 ** get_address_of__rng_11() { return &____rng_11; }
	inline void set__rng_11(RandomNumberGenerator_t3143434466 * value)
	{
		____rng_11 = value;
		Il2CppCodeGenWriteBarrier((&____rng_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICTRANSFORM_T2886634140_H
#ifndef SHACONSTANTS_T2697207431_H
#define SHACONSTANTS_T2697207431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHAConstants
struct  SHAConstants_t2697207431  : public RuntimeObject
{
public:

public:
};

struct SHAConstants_t2697207431_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.SHAConstants::K1
	UInt32U5BU5D_t1435100350* ___K1_0;
	// System.UInt64[] System.Security.Cryptography.SHAConstants::K2
	UInt64U5BU5D_t1494213460* ___K2_1;

public:
	inline static int32_t get_offset_of_K1_0() { return static_cast<int32_t>(offsetof(SHAConstants_t2697207431_StaticFields, ___K1_0)); }
	inline UInt32U5BU5D_t1435100350* get_K1_0() const { return ___K1_0; }
	inline UInt32U5BU5D_t1435100350** get_address_of_K1_0() { return &___K1_0; }
	inline void set_K1_0(UInt32U5BU5D_t1435100350* value)
	{
		___K1_0 = value;
		Il2CppCodeGenWriteBarrier((&___K1_0), value);
	}

	inline static int32_t get_offset_of_K2_1() { return static_cast<int32_t>(offsetof(SHAConstants_t2697207431_StaticFields, ___K2_1)); }
	inline UInt64U5BU5D_t1494213460* get_K2_1() const { return ___K2_1; }
	inline UInt64U5BU5D_t1494213460** get_address_of_K2_1() { return &___K2_1; }
	inline void set_K2_1(UInt64U5BU5D_t1494213460* value)
	{
		___K2_1 = value;
		Il2CppCodeGenWriteBarrier((&___K2_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHACONSTANTS_T2697207431_H
#ifndef SIGNATUREDESCRIPTION_T248587934_H
#define SIGNATUREDESCRIPTION_T248587934_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SignatureDescription
struct  SignatureDescription_t248587934  : public RuntimeObject
{
public:
	// System.String System.Security.Cryptography.SignatureDescription::_DeformatterAlgorithm
	String_t* ____DeformatterAlgorithm_0;
	// System.String System.Security.Cryptography.SignatureDescription::_DigestAlgorithm
	String_t* ____DigestAlgorithm_1;
	// System.String System.Security.Cryptography.SignatureDescription::_FormatterAlgorithm
	String_t* ____FormatterAlgorithm_2;
	// System.String System.Security.Cryptography.SignatureDescription::_KeyAlgorithm
	String_t* ____KeyAlgorithm_3;

public:
	inline static int32_t get_offset_of__DeformatterAlgorithm_0() { return static_cast<int32_t>(offsetof(SignatureDescription_t248587934, ____DeformatterAlgorithm_0)); }
	inline String_t* get__DeformatterAlgorithm_0() const { return ____DeformatterAlgorithm_0; }
	inline String_t** get_address_of__DeformatterAlgorithm_0() { return &____DeformatterAlgorithm_0; }
	inline void set__DeformatterAlgorithm_0(String_t* value)
	{
		____DeformatterAlgorithm_0 = value;
		Il2CppCodeGenWriteBarrier((&____DeformatterAlgorithm_0), value);
	}

	inline static int32_t get_offset_of__DigestAlgorithm_1() { return static_cast<int32_t>(offsetof(SignatureDescription_t248587934, ____DigestAlgorithm_1)); }
	inline String_t* get__DigestAlgorithm_1() const { return ____DigestAlgorithm_1; }
	inline String_t** get_address_of__DigestAlgorithm_1() { return &____DigestAlgorithm_1; }
	inline void set__DigestAlgorithm_1(String_t* value)
	{
		____DigestAlgorithm_1 = value;
		Il2CppCodeGenWriteBarrier((&____DigestAlgorithm_1), value);
	}

	inline static int32_t get_offset_of__FormatterAlgorithm_2() { return static_cast<int32_t>(offsetof(SignatureDescription_t248587934, ____FormatterAlgorithm_2)); }
	inline String_t* get__FormatterAlgorithm_2() const { return ____FormatterAlgorithm_2; }
	inline String_t** get_address_of__FormatterAlgorithm_2() { return &____FormatterAlgorithm_2; }
	inline void set__FormatterAlgorithm_2(String_t* value)
	{
		____FormatterAlgorithm_2 = value;
		Il2CppCodeGenWriteBarrier((&____FormatterAlgorithm_2), value);
	}

	inline static int32_t get_offset_of__KeyAlgorithm_3() { return static_cast<int32_t>(offsetof(SignatureDescription_t248587934, ____KeyAlgorithm_3)); }
	inline String_t* get__KeyAlgorithm_3() const { return ____KeyAlgorithm_3; }
	inline String_t** get_address_of__KeyAlgorithm_3() { return &____KeyAlgorithm_3; }
	inline void set__KeyAlgorithm_3(String_t* value)
	{
		____KeyAlgorithm_3 = value;
		Il2CppCodeGenWriteBarrier((&____KeyAlgorithm_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIGNATUREDESCRIPTION_T248587934_H
#ifndef ASYMMETRICALGORITHM_T270684444_H
#define ASYMMETRICALGORITHM_T270684444_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricAlgorithm
struct  AsymmetricAlgorithm_t270684444  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t888819165* ___LegalKeySizesValue_1;

public:
	inline static int32_t get_offset_of_KeySizeValue_0() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t270684444, ___KeySizeValue_0)); }
	inline int32_t get_KeySizeValue_0() const { return ___KeySizeValue_0; }
	inline int32_t* get_address_of_KeySizeValue_0() { return &___KeySizeValue_0; }
	inline void set_KeySizeValue_0(int32_t value)
	{
		___KeySizeValue_0 = value;
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_1() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t270684444, ___LegalKeySizesValue_1)); }
	inline KeySizesU5BU5D_t888819165* get_LegalKeySizesValue_1() const { return ___LegalKeySizesValue_1; }
	inline KeySizesU5BU5D_t888819165** get_address_of_LegalKeySizesValue_1() { return &___LegalKeySizesValue_1; }
	inline void set_LegalKeySizesValue_1(KeySizesU5BU5D_t888819165* value)
	{
		___LegalKeySizesValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICALGORITHM_T270684444_H
#ifndef STRONGNAME_T500109384_H
#define STRONGNAME_T500109384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.StrongName
struct  StrongName_t500109384  : public RuntimeObject
{
public:
	// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongName::publickey
	StrongNamePublicKeyBlob_t2611943804 * ___publickey_0;
	// System.String System.Security.Policy.StrongName::name
	String_t* ___name_1;
	// System.Version System.Security.Policy.StrongName::version
	Version_t227327351 * ___version_2;

public:
	inline static int32_t get_offset_of_publickey_0() { return static_cast<int32_t>(offsetof(StrongName_t500109384, ___publickey_0)); }
	inline StrongNamePublicKeyBlob_t2611943804 * get_publickey_0() const { return ___publickey_0; }
	inline StrongNamePublicKeyBlob_t2611943804 ** get_address_of_publickey_0() { return &___publickey_0; }
	inline void set_publickey_0(StrongNamePublicKeyBlob_t2611943804 * value)
	{
		___publickey_0 = value;
		Il2CppCodeGenWriteBarrier((&___publickey_0), value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(StrongName_t500109384, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((&___name_1), value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(StrongName_t500109384, ___version_2)); }
	inline Version_t227327351 * get_version_2() const { return ___version_2; }
	inline Version_t227327351 ** get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(Version_t227327351 * value)
	{
		___version_2 = value;
		Il2CppCodeGenWriteBarrier((&___version_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAME_T500109384_H
#ifndef VALUETYPE_T3449469246_H
#define VALUETYPE_T3449469246_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3449469246  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3449469246_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3449469246_marshaled_com
{
};
#endif // VALUETYPE_T3449469246_H
#ifndef RANDOMNUMBERGENERATOR_T3143434466_H
#define RANDOMNUMBERGENERATOR_T3143434466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RandomNumberGenerator
struct  RandomNumberGenerator_t3143434466  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOMNUMBERGENERATOR_T3143434466_H
#ifndef ASYMMETRICSIGNATUREDEFORMATTER_T1515851892_H
#define ASYMMETRICSIGNATUREDEFORMATTER_T1515851892_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureDeformatter
struct  AsymmetricSignatureDeformatter_t1515851892  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREDEFORMATTER_T1515851892_H
#ifndef ASYMMETRICSIGNATUREFORMATTER_T1883936268_H
#define ASYMMETRICSIGNATUREFORMATTER_T1883936268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureFormatter
struct  AsymmetricSignatureFormatter_t1883936268  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREFORMATTER_T1883936268_H
#ifndef STRONGNAMEPUBLICKEYBLOB_T2611943804_H
#define STRONGNAMEPUBLICKEYBLOB_T2611943804_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.StrongNamePublicKeyBlob
struct  StrongNamePublicKeyBlob_t2611943804  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Permissions.StrongNamePublicKeyBlob::pubkey
	ByteU5BU5D_t317375469* ___pubkey_0;

public:
	inline static int32_t get_offset_of_pubkey_0() { return static_cast<int32_t>(offsetof(StrongNamePublicKeyBlob_t2611943804, ___pubkey_0)); }
	inline ByteU5BU5D_t317375469* get_pubkey_0() const { return ___pubkey_0; }
	inline ByteU5BU5D_t317375469** get_address_of_pubkey_0() { return &___pubkey_0; }
	inline void set_pubkey_0(ByteU5BU5D_t317375469* value)
	{
		___pubkey_0 = value;
		Il2CppCodeGenWriteBarrier((&___pubkey_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRONGNAMEPUBLICKEYBLOB_T2611943804_H
#ifndef ASYMMETRICKEYEXCHANGEFORMATTER_T518555973_H
#define ASYMMETRICKEYEXCHANGEFORMATTER_T518555973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricKeyExchangeFormatter
struct  AsymmetricKeyExchangeFormatter_t518555973  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICKEYEXCHANGEFORMATTER_T518555973_H
#ifndef TOBASE64TRANSFORM_T1796674501_H
#define TOBASE64TRANSFORM_T1796674501_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.ToBase64Transform
struct  ToBase64Transform_t1796674501  : public RuntimeObject
{
public:
	// System.Boolean System.Security.Cryptography.ToBase64Transform::m_disposed
	bool ___m_disposed_0;

public:
	inline static int32_t get_offset_of_m_disposed_0() { return static_cast<int32_t>(offsetof(ToBase64Transform_t1796674501, ___m_disposed_0)); }
	inline bool get_m_disposed_0() const { return ___m_disposed_0; }
	inline bool* get_address_of_m_disposed_0() { return &___m_disposed_0; }
	inline void set_m_disposed_0(bool value)
	{
		___m_disposed_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOBASE64TRANSFORM_T1796674501_H
#ifndef CRYPTOCONFIG_T1838124194_H
#define CRYPTOCONFIG_T1838124194_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoConfig
struct  CryptoConfig_t1838124194  : public RuntimeObject
{
public:

public:
};

struct CryptoConfig_t1838124194_StaticFields
{
public:
	// System.Object System.Security.Cryptography.CryptoConfig::lockObject
	RuntimeObject * ___lockObject_0;
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig::algorithms
	Hashtable_t1283080349 * ___algorithms_1;
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig::oid
	Hashtable_t1283080349 * ___oid_2;

public:
	inline static int32_t get_offset_of_lockObject_0() { return static_cast<int32_t>(offsetof(CryptoConfig_t1838124194_StaticFields, ___lockObject_0)); }
	inline RuntimeObject * get_lockObject_0() const { return ___lockObject_0; }
	inline RuntimeObject ** get_address_of_lockObject_0() { return &___lockObject_0; }
	inline void set_lockObject_0(RuntimeObject * value)
	{
		___lockObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___lockObject_0), value);
	}

	inline static int32_t get_offset_of_algorithms_1() { return static_cast<int32_t>(offsetof(CryptoConfig_t1838124194_StaticFields, ___algorithms_1)); }
	inline Hashtable_t1283080349 * get_algorithms_1() const { return ___algorithms_1; }
	inline Hashtable_t1283080349 ** get_address_of_algorithms_1() { return &___algorithms_1; }
	inline void set_algorithms_1(Hashtable_t1283080349 * value)
	{
		___algorithms_1 = value;
		Il2CppCodeGenWriteBarrier((&___algorithms_1), value);
	}

	inline static int32_t get_offset_of_oid_2() { return static_cast<int32_t>(offsetof(CryptoConfig_t1838124194_StaticFields, ___oid_2)); }
	inline Hashtable_t1283080349 * get_oid_2() const { return ___oid_2; }
	inline Hashtable_t1283080349 ** get_address_of_oid_2() { return &___oid_2; }
	inline void set_oid_2(Hashtable_t1283080349 * value)
	{
		___oid_2 = value;
		Il2CppCodeGenWriteBarrier((&___oid_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOCONFIG_T1838124194_H
#ifndef APPLICATIONTRUST_T3648106563_H
#define APPLICATIONTRUST_T3648106563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.ApplicationTrust
struct  ApplicationTrust_t3648106563  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<System.Security.Policy.StrongName> System.Security.Policy.ApplicationTrust::fullTrustAssemblies
	RuntimeObject* ___fullTrustAssemblies_0;

public:
	inline static int32_t get_offset_of_fullTrustAssemblies_0() { return static_cast<int32_t>(offsetof(ApplicationTrust_t3648106563, ___fullTrustAssemblies_0)); }
	inline RuntimeObject* get_fullTrustAssemblies_0() const { return ___fullTrustAssemblies_0; }
	inline RuntimeObject** get_address_of_fullTrustAssemblies_0() { return &___fullTrustAssemblies_0; }
	inline void set_fullTrustAssemblies_0(RuntimeObject* value)
	{
		___fullTrustAssemblies_0 = value;
		Il2CppCodeGenWriteBarrier((&___fullTrustAssemblies_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONTRUST_T3648106563_H
#ifndef PERMISSIONSET_T2481005838_H
#define PERMISSIONSET_T2481005838_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.PermissionSet
struct  PermissionSet_t2481005838  : public RuntimeObject
{
public:
	// System.Boolean System.Security.PermissionSet::<DeclarativeSecurity>k__BackingField
	bool ___U3CDeclarativeSecurityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CDeclarativeSecurityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PermissionSet_t2481005838, ___U3CDeclarativeSecurityU3Ek__BackingField_0)); }
	inline bool get_U3CDeclarativeSecurityU3Ek__BackingField_0() const { return ___U3CDeclarativeSecurityU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CDeclarativeSecurityU3Ek__BackingField_0() { return &___U3CDeclarativeSecurityU3Ek__BackingField_0; }
	inline void set_U3CDeclarativeSecurityU3Ek__BackingField_0(bool value)
	{
		___U3CDeclarativeSecurityU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERMISSIONSET_T2481005838_H
#ifndef RIJNDAELTRANSFORM_T4036756015_H
#define RIJNDAELTRANSFORM_T4036756015_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RijndaelTransform
struct  RijndaelTransform_t4036756015  : public SymmetricTransform_t2886634140
{
public:
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::expandedKey
	UInt32U5BU5D_t1435100350* ___expandedKey_12;
	// System.Int32 System.Security.Cryptography.RijndaelTransform::Nb
	int32_t ___Nb_13;
	// System.Int32 System.Security.Cryptography.RijndaelTransform::Nk
	int32_t ___Nk_14;
	// System.Int32 System.Security.Cryptography.RijndaelTransform::Nr
	int32_t ___Nr_15;

public:
	inline static int32_t get_offset_of_expandedKey_12() { return static_cast<int32_t>(offsetof(RijndaelTransform_t4036756015, ___expandedKey_12)); }
	inline UInt32U5BU5D_t1435100350* get_expandedKey_12() const { return ___expandedKey_12; }
	inline UInt32U5BU5D_t1435100350** get_address_of_expandedKey_12() { return &___expandedKey_12; }
	inline void set_expandedKey_12(UInt32U5BU5D_t1435100350* value)
	{
		___expandedKey_12 = value;
		Il2CppCodeGenWriteBarrier((&___expandedKey_12), value);
	}

	inline static int32_t get_offset_of_Nb_13() { return static_cast<int32_t>(offsetof(RijndaelTransform_t4036756015, ___Nb_13)); }
	inline int32_t get_Nb_13() const { return ___Nb_13; }
	inline int32_t* get_address_of_Nb_13() { return &___Nb_13; }
	inline void set_Nb_13(int32_t value)
	{
		___Nb_13 = value;
	}

	inline static int32_t get_offset_of_Nk_14() { return static_cast<int32_t>(offsetof(RijndaelTransform_t4036756015, ___Nk_14)); }
	inline int32_t get_Nk_14() const { return ___Nk_14; }
	inline int32_t* get_address_of_Nk_14() { return &___Nk_14; }
	inline void set_Nk_14(int32_t value)
	{
		___Nk_14 = value;
	}

	inline static int32_t get_offset_of_Nr_15() { return static_cast<int32_t>(offsetof(RijndaelTransform_t4036756015, ___Nr_15)); }
	inline int32_t get_Nr_15() const { return ___Nr_15; }
	inline int32_t* get_address_of_Nr_15() { return &___Nr_15; }
	inline void set_Nr_15(int32_t value)
	{
		___Nr_15 = value;
	}
};

struct RijndaelTransform_t4036756015_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::Rcon
	UInt32U5BU5D_t1435100350* ___Rcon_16;
	// System.Byte[] System.Security.Cryptography.RijndaelTransform::SBox
	ByteU5BU5D_t317375469* ___SBox_17;
	// System.Byte[] System.Security.Cryptography.RijndaelTransform::iSBox
	ByteU5BU5D_t317375469* ___iSBox_18;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T0
	UInt32U5BU5D_t1435100350* ___T0_19;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T1
	UInt32U5BU5D_t1435100350* ___T1_20;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T2
	UInt32U5BU5D_t1435100350* ___T2_21;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T3
	UInt32U5BU5D_t1435100350* ___T3_22;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT0
	UInt32U5BU5D_t1435100350* ___iT0_23;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT1
	UInt32U5BU5D_t1435100350* ___iT1_24;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT2
	UInt32U5BU5D_t1435100350* ___iT2_25;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT3
	UInt32U5BU5D_t1435100350* ___iT3_26;

public:
	inline static int32_t get_offset_of_Rcon_16() { return static_cast<int32_t>(offsetof(RijndaelTransform_t4036756015_StaticFields, ___Rcon_16)); }
	inline UInt32U5BU5D_t1435100350* get_Rcon_16() const { return ___Rcon_16; }
	inline UInt32U5BU5D_t1435100350** get_address_of_Rcon_16() { return &___Rcon_16; }
	inline void set_Rcon_16(UInt32U5BU5D_t1435100350* value)
	{
		___Rcon_16 = value;
		Il2CppCodeGenWriteBarrier((&___Rcon_16), value);
	}

	inline static int32_t get_offset_of_SBox_17() { return static_cast<int32_t>(offsetof(RijndaelTransform_t4036756015_StaticFields, ___SBox_17)); }
	inline ByteU5BU5D_t317375469* get_SBox_17() const { return ___SBox_17; }
	inline ByteU5BU5D_t317375469** get_address_of_SBox_17() { return &___SBox_17; }
	inline void set_SBox_17(ByteU5BU5D_t317375469* value)
	{
		___SBox_17 = value;
		Il2CppCodeGenWriteBarrier((&___SBox_17), value);
	}

	inline static int32_t get_offset_of_iSBox_18() { return static_cast<int32_t>(offsetof(RijndaelTransform_t4036756015_StaticFields, ___iSBox_18)); }
	inline ByteU5BU5D_t317375469* get_iSBox_18() const { return ___iSBox_18; }
	inline ByteU5BU5D_t317375469** get_address_of_iSBox_18() { return &___iSBox_18; }
	inline void set_iSBox_18(ByteU5BU5D_t317375469* value)
	{
		___iSBox_18 = value;
		Il2CppCodeGenWriteBarrier((&___iSBox_18), value);
	}

	inline static int32_t get_offset_of_T0_19() { return static_cast<int32_t>(offsetof(RijndaelTransform_t4036756015_StaticFields, ___T0_19)); }
	inline UInt32U5BU5D_t1435100350* get_T0_19() const { return ___T0_19; }
	inline UInt32U5BU5D_t1435100350** get_address_of_T0_19() { return &___T0_19; }
	inline void set_T0_19(UInt32U5BU5D_t1435100350* value)
	{
		___T0_19 = value;
		Il2CppCodeGenWriteBarrier((&___T0_19), value);
	}

	inline static int32_t get_offset_of_T1_20() { return static_cast<int32_t>(offsetof(RijndaelTransform_t4036756015_StaticFields, ___T1_20)); }
	inline UInt32U5BU5D_t1435100350* get_T1_20() const { return ___T1_20; }
	inline UInt32U5BU5D_t1435100350** get_address_of_T1_20() { return &___T1_20; }
	inline void set_T1_20(UInt32U5BU5D_t1435100350* value)
	{
		___T1_20 = value;
		Il2CppCodeGenWriteBarrier((&___T1_20), value);
	}

	inline static int32_t get_offset_of_T2_21() { return static_cast<int32_t>(offsetof(RijndaelTransform_t4036756015_StaticFields, ___T2_21)); }
	inline UInt32U5BU5D_t1435100350* get_T2_21() const { return ___T2_21; }
	inline UInt32U5BU5D_t1435100350** get_address_of_T2_21() { return &___T2_21; }
	inline void set_T2_21(UInt32U5BU5D_t1435100350* value)
	{
		___T2_21 = value;
		Il2CppCodeGenWriteBarrier((&___T2_21), value);
	}

	inline static int32_t get_offset_of_T3_22() { return static_cast<int32_t>(offsetof(RijndaelTransform_t4036756015_StaticFields, ___T3_22)); }
	inline UInt32U5BU5D_t1435100350* get_T3_22() const { return ___T3_22; }
	inline UInt32U5BU5D_t1435100350** get_address_of_T3_22() { return &___T3_22; }
	inline void set_T3_22(UInt32U5BU5D_t1435100350* value)
	{
		___T3_22 = value;
		Il2CppCodeGenWriteBarrier((&___T3_22), value);
	}

	inline static int32_t get_offset_of_iT0_23() { return static_cast<int32_t>(offsetof(RijndaelTransform_t4036756015_StaticFields, ___iT0_23)); }
	inline UInt32U5BU5D_t1435100350* get_iT0_23() const { return ___iT0_23; }
	inline UInt32U5BU5D_t1435100350** get_address_of_iT0_23() { return &___iT0_23; }
	inline void set_iT0_23(UInt32U5BU5D_t1435100350* value)
	{
		___iT0_23 = value;
		Il2CppCodeGenWriteBarrier((&___iT0_23), value);
	}

	inline static int32_t get_offset_of_iT1_24() { return static_cast<int32_t>(offsetof(RijndaelTransform_t4036756015_StaticFields, ___iT1_24)); }
	inline UInt32U5BU5D_t1435100350* get_iT1_24() const { return ___iT1_24; }
	inline UInt32U5BU5D_t1435100350** get_address_of_iT1_24() { return &___iT1_24; }
	inline void set_iT1_24(UInt32U5BU5D_t1435100350* value)
	{
		___iT1_24 = value;
		Il2CppCodeGenWriteBarrier((&___iT1_24), value);
	}

	inline static int32_t get_offset_of_iT2_25() { return static_cast<int32_t>(offsetof(RijndaelTransform_t4036756015_StaticFields, ___iT2_25)); }
	inline UInt32U5BU5D_t1435100350* get_iT2_25() const { return ___iT2_25; }
	inline UInt32U5BU5D_t1435100350** get_address_of_iT2_25() { return &___iT2_25; }
	inline void set_iT2_25(UInt32U5BU5D_t1435100350* value)
	{
		___iT2_25 = value;
		Il2CppCodeGenWriteBarrier((&___iT2_25), value);
	}

	inline static int32_t get_offset_of_iT3_26() { return static_cast<int32_t>(offsetof(RijndaelTransform_t4036756015_StaticFields, ___iT3_26)); }
	inline UInt32U5BU5D_t1435100350* get_iT3_26() const { return ___iT3_26; }
	inline UInt32U5BU5D_t1435100350** get_address_of_iT3_26() { return &___iT3_26; }
	inline void set_iT3_26(UInt32U5BU5D_t1435100350* value)
	{
		___iT3_26 = value;
		Il2CppCodeGenWriteBarrier((&___iT3_26), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAELTRANSFORM_T4036756015_H
#ifndef SHA384_T3926899676_H
#define SHA384_T3926899676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA384
struct  SHA384_t3926899676  : public HashAlgorithm_t1249475727
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA384_T3926899676_H
#ifndef SHA256_T368553972_H
#define SHA256_T368553972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA256
struct  SHA256_t368553972  : public HashAlgorithm_t1249475727
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA256_T368553972_H
#ifndef RSAPARAMETERS_T734515625_H
#define RSAPARAMETERS_T734515625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAParameters
struct  RSAParameters_t734515625 
{
public:
	// System.Byte[] System.Security.Cryptography.RSAParameters::P
	ByteU5BU5D_t317375469* ___P_0;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Q
	ByteU5BU5D_t317375469* ___Q_1;
	// System.Byte[] System.Security.Cryptography.RSAParameters::D
	ByteU5BU5D_t317375469* ___D_2;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DP
	ByteU5BU5D_t317375469* ___DP_3;
	// System.Byte[] System.Security.Cryptography.RSAParameters::DQ
	ByteU5BU5D_t317375469* ___DQ_4;
	// System.Byte[] System.Security.Cryptography.RSAParameters::InverseQ
	ByteU5BU5D_t317375469* ___InverseQ_5;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Modulus
	ByteU5BU5D_t317375469* ___Modulus_6;
	// System.Byte[] System.Security.Cryptography.RSAParameters::Exponent
	ByteU5BU5D_t317375469* ___Exponent_7;

public:
	inline static int32_t get_offset_of_P_0() { return static_cast<int32_t>(offsetof(RSAParameters_t734515625, ___P_0)); }
	inline ByteU5BU5D_t317375469* get_P_0() const { return ___P_0; }
	inline ByteU5BU5D_t317375469** get_address_of_P_0() { return &___P_0; }
	inline void set_P_0(ByteU5BU5D_t317375469* value)
	{
		___P_0 = value;
		Il2CppCodeGenWriteBarrier((&___P_0), value);
	}

	inline static int32_t get_offset_of_Q_1() { return static_cast<int32_t>(offsetof(RSAParameters_t734515625, ___Q_1)); }
	inline ByteU5BU5D_t317375469* get_Q_1() const { return ___Q_1; }
	inline ByteU5BU5D_t317375469** get_address_of_Q_1() { return &___Q_1; }
	inline void set_Q_1(ByteU5BU5D_t317375469* value)
	{
		___Q_1 = value;
		Il2CppCodeGenWriteBarrier((&___Q_1), value);
	}

	inline static int32_t get_offset_of_D_2() { return static_cast<int32_t>(offsetof(RSAParameters_t734515625, ___D_2)); }
	inline ByteU5BU5D_t317375469* get_D_2() const { return ___D_2; }
	inline ByteU5BU5D_t317375469** get_address_of_D_2() { return &___D_2; }
	inline void set_D_2(ByteU5BU5D_t317375469* value)
	{
		___D_2 = value;
		Il2CppCodeGenWriteBarrier((&___D_2), value);
	}

	inline static int32_t get_offset_of_DP_3() { return static_cast<int32_t>(offsetof(RSAParameters_t734515625, ___DP_3)); }
	inline ByteU5BU5D_t317375469* get_DP_3() const { return ___DP_3; }
	inline ByteU5BU5D_t317375469** get_address_of_DP_3() { return &___DP_3; }
	inline void set_DP_3(ByteU5BU5D_t317375469* value)
	{
		___DP_3 = value;
		Il2CppCodeGenWriteBarrier((&___DP_3), value);
	}

	inline static int32_t get_offset_of_DQ_4() { return static_cast<int32_t>(offsetof(RSAParameters_t734515625, ___DQ_4)); }
	inline ByteU5BU5D_t317375469* get_DQ_4() const { return ___DQ_4; }
	inline ByteU5BU5D_t317375469** get_address_of_DQ_4() { return &___DQ_4; }
	inline void set_DQ_4(ByteU5BU5D_t317375469* value)
	{
		___DQ_4 = value;
		Il2CppCodeGenWriteBarrier((&___DQ_4), value);
	}

	inline static int32_t get_offset_of_InverseQ_5() { return static_cast<int32_t>(offsetof(RSAParameters_t734515625, ___InverseQ_5)); }
	inline ByteU5BU5D_t317375469* get_InverseQ_5() const { return ___InverseQ_5; }
	inline ByteU5BU5D_t317375469** get_address_of_InverseQ_5() { return &___InverseQ_5; }
	inline void set_InverseQ_5(ByteU5BU5D_t317375469* value)
	{
		___InverseQ_5 = value;
		Il2CppCodeGenWriteBarrier((&___InverseQ_5), value);
	}

	inline static int32_t get_offset_of_Modulus_6() { return static_cast<int32_t>(offsetof(RSAParameters_t734515625, ___Modulus_6)); }
	inline ByteU5BU5D_t317375469* get_Modulus_6() const { return ___Modulus_6; }
	inline ByteU5BU5D_t317375469** get_address_of_Modulus_6() { return &___Modulus_6; }
	inline void set_Modulus_6(ByteU5BU5D_t317375469* value)
	{
		___Modulus_6 = value;
		Il2CppCodeGenWriteBarrier((&___Modulus_6), value);
	}

	inline static int32_t get_offset_of_Exponent_7() { return static_cast<int32_t>(offsetof(RSAParameters_t734515625, ___Exponent_7)); }
	inline ByteU5BU5D_t317375469* get_Exponent_7() const { return ___Exponent_7; }
	inline ByteU5BU5D_t317375469** get_address_of_Exponent_7() { return &___Exponent_7; }
	inline void set_Exponent_7(ByteU5BU5D_t317375469* value)
	{
		___Exponent_7 = value;
		Il2CppCodeGenWriteBarrier((&___Exponent_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_t734515625_marshaled_pinvoke
{
	uint8_t* ___P_0;
	uint8_t* ___Q_1;
	uint8_t* ___D_2;
	uint8_t* ___DP_3;
	uint8_t* ___DQ_4;
	uint8_t* ___InverseQ_5;
	uint8_t* ___Modulus_6;
	uint8_t* ___Exponent_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.RSAParameters
struct RSAParameters_t734515625_marshaled_com
{
	uint8_t* ___P_0;
	uint8_t* ___Q_1;
	uint8_t* ___D_2;
	uint8_t* ___DP_3;
	uint8_t* ___DQ_4;
	uint8_t* ___InverseQ_5;
	uint8_t* ___Modulus_6;
	uint8_t* ___Exponent_7;
};
#endif // RSAPARAMETERS_T734515625_H
#ifndef SHA512_T3936875870_H
#define SHA512_T3936875870_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA512
struct  SHA512_t3936875870  : public HashAlgorithm_t1249475727
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA512_T3936875870_H
#ifndef DSASIGNATUREDESCRIPTION_T2672988213_H
#define DSASIGNATUREDESCRIPTION_T2672988213_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSASignatureDescription
struct  DSASignatureDescription_t2672988213  : public SignatureDescription_t248587934
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSASIGNATUREDESCRIPTION_T2672988213_H
#ifndef RSAPKCS1SHA1SIGNATUREDESCRIPTION_T2429984183_H
#define RSAPKCS1SHA1SIGNATUREDESCRIPTION_T2429984183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SHA1SignatureDescription
struct  RSAPKCS1SHA1SignatureDescription_t2429984183  : public SignatureDescription_t248587934
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SHA1SIGNATUREDESCRIPTION_T2429984183_H
#ifndef SHA1_T821729488_H
#define SHA1_T821729488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1
struct  SHA1_t821729488  : public HashAlgorithm_t1249475727
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1_T821729488_H
#ifndef RSAPKCS1SIGNATUREFORMATTER_T2510939034_H
#define RSAPKCS1SIGNATUREFORMATTER_T2510939034_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SignatureFormatter
struct  RSAPKCS1SignatureFormatter_t2510939034  : public AsymmetricSignatureFormatter_t1883936268
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureFormatter::rsa
	RSA_t1050577473 * ___rsa_0;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.RSAPKCS1SignatureFormatter::hash
	HashAlgorithm_t1249475727 * ___hash_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureFormatter_t2510939034, ___rsa_0)); }
	inline RSA_t1050577473 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t1050577473 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t1050577473 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_hash_1() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureFormatter_t2510939034, ___hash_1)); }
	inline HashAlgorithm_t1249475727 * get_hash_1() const { return ___hash_1; }
	inline HashAlgorithm_t1249475727 ** get_address_of_hash_1() { return &___hash_1; }
	inline void set_hash_1(HashAlgorithm_t1249475727 * value)
	{
		___hash_1 = value;
		Il2CppCodeGenWriteBarrier((&___hash_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SIGNATUREFORMATTER_T2510939034_H
#ifndef RIPEMD160_T3430000695_H
#define RIPEMD160_T3430000695_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RIPEMD160
struct  RIPEMD160_t3430000695  : public HashAlgorithm_t1249475727
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIPEMD160_T3430000695_H
#ifndef RSAPKCS1KEYEXCHANGEFORMATTER_T1560369721_H
#define RSAPKCS1KEYEXCHANGEFORMATTER_T1560369721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct  RSAPKCS1KeyExchangeFormatter_t1560369721  : public AsymmetricKeyExchangeFormatter_t518555973
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::rsa
	RSA_t1050577473 * ___rsa_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::random
	RandomNumberGenerator_t3143434466 * ___random_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeFormatter_t1560369721, ___rsa_0)); }
	inline RSA_t1050577473 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t1050577473 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t1050577473 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_random_1() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeFormatter_t1560369721, ___random_1)); }
	inline RandomNumberGenerator_t3143434466 * get_random_1() const { return ___random_1; }
	inline RandomNumberGenerator_t3143434466 ** get_address_of_random_1() { return &___random_1; }
	inline void set_random_1(RandomNumberGenerator_t3143434466 * value)
	{
		___random_1 = value;
		Il2CppCodeGenWriteBarrier((&___random_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1KEYEXCHANGEFORMATTER_T1560369721_H
#ifndef SECURITYATTRIBUTE_T3088552299_H
#define SECURITYATTRIBUTE_T3088552299_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityAttribute
struct  SecurityAttribute_t3088552299  : public Attribute_t2885837796
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYATTRIBUTE_T3088552299_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef DESTRANSFORM_T4291006340_H
#define DESTRANSFORM_T4291006340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DESTransform
struct  DESTransform_t4291006340  : public SymmetricTransform_t2886634140
{
public:
	// System.Byte[] System.Security.Cryptography.DESTransform::keySchedule
	ByteU5BU5D_t317375469* ___keySchedule_16;
	// System.Byte[] System.Security.Cryptography.DESTransform::byteBuff
	ByteU5BU5D_t317375469* ___byteBuff_17;
	// System.UInt32[] System.Security.Cryptography.DESTransform::dwordBuff
	UInt32U5BU5D_t1435100350* ___dwordBuff_18;

public:
	inline static int32_t get_offset_of_keySchedule_16() { return static_cast<int32_t>(offsetof(DESTransform_t4291006340, ___keySchedule_16)); }
	inline ByteU5BU5D_t317375469* get_keySchedule_16() const { return ___keySchedule_16; }
	inline ByteU5BU5D_t317375469** get_address_of_keySchedule_16() { return &___keySchedule_16; }
	inline void set_keySchedule_16(ByteU5BU5D_t317375469* value)
	{
		___keySchedule_16 = value;
		Il2CppCodeGenWriteBarrier((&___keySchedule_16), value);
	}

	inline static int32_t get_offset_of_byteBuff_17() { return static_cast<int32_t>(offsetof(DESTransform_t4291006340, ___byteBuff_17)); }
	inline ByteU5BU5D_t317375469* get_byteBuff_17() const { return ___byteBuff_17; }
	inline ByteU5BU5D_t317375469** get_address_of_byteBuff_17() { return &___byteBuff_17; }
	inline void set_byteBuff_17(ByteU5BU5D_t317375469* value)
	{
		___byteBuff_17 = value;
		Il2CppCodeGenWriteBarrier((&___byteBuff_17), value);
	}

	inline static int32_t get_offset_of_dwordBuff_18() { return static_cast<int32_t>(offsetof(DESTransform_t4291006340, ___dwordBuff_18)); }
	inline UInt32U5BU5D_t1435100350* get_dwordBuff_18() const { return ___dwordBuff_18; }
	inline UInt32U5BU5D_t1435100350** get_address_of_dwordBuff_18() { return &___dwordBuff_18; }
	inline void set_dwordBuff_18(UInt32U5BU5D_t1435100350* value)
	{
		___dwordBuff_18 = value;
		Il2CppCodeGenWriteBarrier((&___dwordBuff_18), value);
	}
};

struct DESTransform_t4291006340_StaticFields
{
public:
	// System.Int32 System.Security.Cryptography.DESTransform::KEY_BIT_SIZE
	int32_t ___KEY_BIT_SIZE_12;
	// System.Int32 System.Security.Cryptography.DESTransform::KEY_BYTE_SIZE
	int32_t ___KEY_BYTE_SIZE_13;
	// System.Int32 System.Security.Cryptography.DESTransform::BLOCK_BIT_SIZE
	int32_t ___BLOCK_BIT_SIZE_14;
	// System.Int32 System.Security.Cryptography.DESTransform::BLOCK_BYTE_SIZE
	int32_t ___BLOCK_BYTE_SIZE_15;
	// System.UInt32[] System.Security.Cryptography.DESTransform::spBoxes
	UInt32U5BU5D_t1435100350* ___spBoxes_19;
	// System.Byte[] System.Security.Cryptography.DESTransform::PC1
	ByteU5BU5D_t317375469* ___PC1_20;
	// System.Byte[] System.Security.Cryptography.DESTransform::leftRotTotal
	ByteU5BU5D_t317375469* ___leftRotTotal_21;
	// System.Byte[] System.Security.Cryptography.DESTransform::PC2
	ByteU5BU5D_t317375469* ___PC2_22;
	// System.UInt32[] System.Security.Cryptography.DESTransform::ipTab
	UInt32U5BU5D_t1435100350* ___ipTab_23;
	// System.UInt32[] System.Security.Cryptography.DESTransform::fpTab
	UInt32U5BU5D_t1435100350* ___fpTab_24;

public:
	inline static int32_t get_offset_of_KEY_BIT_SIZE_12() { return static_cast<int32_t>(offsetof(DESTransform_t4291006340_StaticFields, ___KEY_BIT_SIZE_12)); }
	inline int32_t get_KEY_BIT_SIZE_12() const { return ___KEY_BIT_SIZE_12; }
	inline int32_t* get_address_of_KEY_BIT_SIZE_12() { return &___KEY_BIT_SIZE_12; }
	inline void set_KEY_BIT_SIZE_12(int32_t value)
	{
		___KEY_BIT_SIZE_12 = value;
	}

	inline static int32_t get_offset_of_KEY_BYTE_SIZE_13() { return static_cast<int32_t>(offsetof(DESTransform_t4291006340_StaticFields, ___KEY_BYTE_SIZE_13)); }
	inline int32_t get_KEY_BYTE_SIZE_13() const { return ___KEY_BYTE_SIZE_13; }
	inline int32_t* get_address_of_KEY_BYTE_SIZE_13() { return &___KEY_BYTE_SIZE_13; }
	inline void set_KEY_BYTE_SIZE_13(int32_t value)
	{
		___KEY_BYTE_SIZE_13 = value;
	}

	inline static int32_t get_offset_of_BLOCK_BIT_SIZE_14() { return static_cast<int32_t>(offsetof(DESTransform_t4291006340_StaticFields, ___BLOCK_BIT_SIZE_14)); }
	inline int32_t get_BLOCK_BIT_SIZE_14() const { return ___BLOCK_BIT_SIZE_14; }
	inline int32_t* get_address_of_BLOCK_BIT_SIZE_14() { return &___BLOCK_BIT_SIZE_14; }
	inline void set_BLOCK_BIT_SIZE_14(int32_t value)
	{
		___BLOCK_BIT_SIZE_14 = value;
	}

	inline static int32_t get_offset_of_BLOCK_BYTE_SIZE_15() { return static_cast<int32_t>(offsetof(DESTransform_t4291006340_StaticFields, ___BLOCK_BYTE_SIZE_15)); }
	inline int32_t get_BLOCK_BYTE_SIZE_15() const { return ___BLOCK_BYTE_SIZE_15; }
	inline int32_t* get_address_of_BLOCK_BYTE_SIZE_15() { return &___BLOCK_BYTE_SIZE_15; }
	inline void set_BLOCK_BYTE_SIZE_15(int32_t value)
	{
		___BLOCK_BYTE_SIZE_15 = value;
	}

	inline static int32_t get_offset_of_spBoxes_19() { return static_cast<int32_t>(offsetof(DESTransform_t4291006340_StaticFields, ___spBoxes_19)); }
	inline UInt32U5BU5D_t1435100350* get_spBoxes_19() const { return ___spBoxes_19; }
	inline UInt32U5BU5D_t1435100350** get_address_of_spBoxes_19() { return &___spBoxes_19; }
	inline void set_spBoxes_19(UInt32U5BU5D_t1435100350* value)
	{
		___spBoxes_19 = value;
		Il2CppCodeGenWriteBarrier((&___spBoxes_19), value);
	}

	inline static int32_t get_offset_of_PC1_20() { return static_cast<int32_t>(offsetof(DESTransform_t4291006340_StaticFields, ___PC1_20)); }
	inline ByteU5BU5D_t317375469* get_PC1_20() const { return ___PC1_20; }
	inline ByteU5BU5D_t317375469** get_address_of_PC1_20() { return &___PC1_20; }
	inline void set_PC1_20(ByteU5BU5D_t317375469* value)
	{
		___PC1_20 = value;
		Il2CppCodeGenWriteBarrier((&___PC1_20), value);
	}

	inline static int32_t get_offset_of_leftRotTotal_21() { return static_cast<int32_t>(offsetof(DESTransform_t4291006340_StaticFields, ___leftRotTotal_21)); }
	inline ByteU5BU5D_t317375469* get_leftRotTotal_21() const { return ___leftRotTotal_21; }
	inline ByteU5BU5D_t317375469** get_address_of_leftRotTotal_21() { return &___leftRotTotal_21; }
	inline void set_leftRotTotal_21(ByteU5BU5D_t317375469* value)
	{
		___leftRotTotal_21 = value;
		Il2CppCodeGenWriteBarrier((&___leftRotTotal_21), value);
	}

	inline static int32_t get_offset_of_PC2_22() { return static_cast<int32_t>(offsetof(DESTransform_t4291006340_StaticFields, ___PC2_22)); }
	inline ByteU5BU5D_t317375469* get_PC2_22() const { return ___PC2_22; }
	inline ByteU5BU5D_t317375469** get_address_of_PC2_22() { return &___PC2_22; }
	inline void set_PC2_22(ByteU5BU5D_t317375469* value)
	{
		___PC2_22 = value;
		Il2CppCodeGenWriteBarrier((&___PC2_22), value);
	}

	inline static int32_t get_offset_of_ipTab_23() { return static_cast<int32_t>(offsetof(DESTransform_t4291006340_StaticFields, ___ipTab_23)); }
	inline UInt32U5BU5D_t1435100350* get_ipTab_23() const { return ___ipTab_23; }
	inline UInt32U5BU5D_t1435100350** get_address_of_ipTab_23() { return &___ipTab_23; }
	inline void set_ipTab_23(UInt32U5BU5D_t1435100350* value)
	{
		___ipTab_23 = value;
		Il2CppCodeGenWriteBarrier((&___ipTab_23), value);
	}

	inline static int32_t get_offset_of_fpTab_24() { return static_cast<int32_t>(offsetof(DESTransform_t4291006340_StaticFields, ___fpTab_24)); }
	inline UInt32U5BU5D_t1435100350* get_fpTab_24() const { return ___fpTab_24; }
	inline UInt32U5BU5D_t1435100350** get_address_of_fpTab_24() { return &___fpTab_24; }
	inline void set_fpTab_24(UInt32U5BU5D_t1435100350* value)
	{
		___fpTab_24 = value;
		Il2CppCodeGenWriteBarrier((&___fpTab_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESTRANSFORM_T4291006340_H
#ifndef DSA_T28453765_H
#define DSA_T28453765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSA
struct  DSA_t28453765  : public AsymmetricAlgorithm_t270684444
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSA_T28453765_H
#ifndef DSAPARAMETERS_T1020338899_H
#define DSAPARAMETERS_T1020338899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSAParameters
struct  DSAParameters_t1020338899 
{
public:
	// System.Int32 System.Security.Cryptography.DSAParameters::Counter
	int32_t ___Counter_0;
	// System.Byte[] System.Security.Cryptography.DSAParameters::G
	ByteU5BU5D_t317375469* ___G_1;
	// System.Byte[] System.Security.Cryptography.DSAParameters::J
	ByteU5BU5D_t317375469* ___J_2;
	// System.Byte[] System.Security.Cryptography.DSAParameters::P
	ByteU5BU5D_t317375469* ___P_3;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Q
	ByteU5BU5D_t317375469* ___Q_4;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Seed
	ByteU5BU5D_t317375469* ___Seed_5;
	// System.Byte[] System.Security.Cryptography.DSAParameters::X
	ByteU5BU5D_t317375469* ___X_6;
	// System.Byte[] System.Security.Cryptography.DSAParameters::Y
	ByteU5BU5D_t317375469* ___Y_7;

public:
	inline static int32_t get_offset_of_Counter_0() { return static_cast<int32_t>(offsetof(DSAParameters_t1020338899, ___Counter_0)); }
	inline int32_t get_Counter_0() const { return ___Counter_0; }
	inline int32_t* get_address_of_Counter_0() { return &___Counter_0; }
	inline void set_Counter_0(int32_t value)
	{
		___Counter_0 = value;
	}

	inline static int32_t get_offset_of_G_1() { return static_cast<int32_t>(offsetof(DSAParameters_t1020338899, ___G_1)); }
	inline ByteU5BU5D_t317375469* get_G_1() const { return ___G_1; }
	inline ByteU5BU5D_t317375469** get_address_of_G_1() { return &___G_1; }
	inline void set_G_1(ByteU5BU5D_t317375469* value)
	{
		___G_1 = value;
		Il2CppCodeGenWriteBarrier((&___G_1), value);
	}

	inline static int32_t get_offset_of_J_2() { return static_cast<int32_t>(offsetof(DSAParameters_t1020338899, ___J_2)); }
	inline ByteU5BU5D_t317375469* get_J_2() const { return ___J_2; }
	inline ByteU5BU5D_t317375469** get_address_of_J_2() { return &___J_2; }
	inline void set_J_2(ByteU5BU5D_t317375469* value)
	{
		___J_2 = value;
		Il2CppCodeGenWriteBarrier((&___J_2), value);
	}

	inline static int32_t get_offset_of_P_3() { return static_cast<int32_t>(offsetof(DSAParameters_t1020338899, ___P_3)); }
	inline ByteU5BU5D_t317375469* get_P_3() const { return ___P_3; }
	inline ByteU5BU5D_t317375469** get_address_of_P_3() { return &___P_3; }
	inline void set_P_3(ByteU5BU5D_t317375469* value)
	{
		___P_3 = value;
		Il2CppCodeGenWriteBarrier((&___P_3), value);
	}

	inline static int32_t get_offset_of_Q_4() { return static_cast<int32_t>(offsetof(DSAParameters_t1020338899, ___Q_4)); }
	inline ByteU5BU5D_t317375469* get_Q_4() const { return ___Q_4; }
	inline ByteU5BU5D_t317375469** get_address_of_Q_4() { return &___Q_4; }
	inline void set_Q_4(ByteU5BU5D_t317375469* value)
	{
		___Q_4 = value;
		Il2CppCodeGenWriteBarrier((&___Q_4), value);
	}

	inline static int32_t get_offset_of_Seed_5() { return static_cast<int32_t>(offsetof(DSAParameters_t1020338899, ___Seed_5)); }
	inline ByteU5BU5D_t317375469* get_Seed_5() const { return ___Seed_5; }
	inline ByteU5BU5D_t317375469** get_address_of_Seed_5() { return &___Seed_5; }
	inline void set_Seed_5(ByteU5BU5D_t317375469* value)
	{
		___Seed_5 = value;
		Il2CppCodeGenWriteBarrier((&___Seed_5), value);
	}

	inline static int32_t get_offset_of_X_6() { return static_cast<int32_t>(offsetof(DSAParameters_t1020338899, ___X_6)); }
	inline ByteU5BU5D_t317375469* get_X_6() const { return ___X_6; }
	inline ByteU5BU5D_t317375469** get_address_of_X_6() { return &___X_6; }
	inline void set_X_6(ByteU5BU5D_t317375469* value)
	{
		___X_6 = value;
		Il2CppCodeGenWriteBarrier((&___X_6), value);
	}

	inline static int32_t get_offset_of_Y_7() { return static_cast<int32_t>(offsetof(DSAParameters_t1020338899, ___Y_7)); }
	inline ByteU5BU5D_t317375469* get_Y_7() const { return ___Y_7; }
	inline ByteU5BU5D_t317375469** get_address_of_Y_7() { return &___Y_7; }
	inline void set_Y_7(ByteU5BU5D_t317375469* value)
	{
		___Y_7 = value;
		Il2CppCodeGenWriteBarrier((&___Y_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.DSAParameters
struct DSAParameters_t1020338899_marshaled_pinvoke
{
	int32_t ___Counter_0;
	uint8_t* ___G_1;
	uint8_t* ___J_2;
	uint8_t* ___P_3;
	uint8_t* ___Q_4;
	uint8_t* ___Seed_5;
	uint8_t* ___X_6;
	uint8_t* ___Y_7;
};
// Native definition for COM marshalling of System.Security.Cryptography.DSAParameters
struct DSAParameters_t1020338899_marshaled_com
{
	int32_t ___Counter_0;
	uint8_t* ___G_1;
	uint8_t* ___J_2;
	uint8_t* ___P_3;
	uint8_t* ___Q_4;
	uint8_t* ___Seed_5;
	uint8_t* ___X_6;
	uint8_t* ___Y_7;
};
#endif // DSAPARAMETERS_T1020338899_H
#ifndef DSASIGNATUREDEFORMATTER_T1874368996_H
#define DSASIGNATUREDEFORMATTER_T1874368996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSASignatureDeformatter
struct  DSASignatureDeformatter_t1874368996  : public AsymmetricSignatureDeformatter_t1515851892
{
public:
	// System.Security.Cryptography.DSA System.Security.Cryptography.DSASignatureDeformatter::dsa
	DSA_t28453765 * ___dsa_0;

public:
	inline static int32_t get_offset_of_dsa_0() { return static_cast<int32_t>(offsetof(DSASignatureDeformatter_t1874368996, ___dsa_0)); }
	inline DSA_t28453765 * get_dsa_0() const { return ___dsa_0; }
	inline DSA_t28453765 ** get_address_of_dsa_0() { return &___dsa_0; }
	inline void set_dsa_0(DSA_t28453765 * value)
	{
		___dsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___dsa_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSASIGNATUREDEFORMATTER_T1874368996_H
#ifndef DSASIGNATUREFORMATTER_T1724117787_H
#define DSASIGNATUREFORMATTER_T1724117787_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSASignatureFormatter
struct  DSASignatureFormatter_t1724117787  : public AsymmetricSignatureFormatter_t1883936268
{
public:
	// System.Security.Cryptography.DSA System.Security.Cryptography.DSASignatureFormatter::dsa
	DSA_t28453765 * ___dsa_0;

public:
	inline static int32_t get_offset_of_dsa_0() { return static_cast<int32_t>(offsetof(DSASignatureFormatter_t1724117787, ___dsa_0)); }
	inline DSA_t28453765 * get_dsa_0() const { return ___dsa_0; }
	inline DSA_t28453765 ** get_address_of_dsa_0() { return &___dsa_0; }
	inline void set_dsa_0(DSA_t28453765 * value)
	{
		___dsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___dsa_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSASIGNATUREFORMATTER_T1724117787_H
#ifndef SYSTEMEXCEPTION_T2455424764_H
#define SYSTEMEXCEPTION_T2455424764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t2455424764  : public Exception_t1325901032
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T2455424764_H
#ifndef ENUM_T480184459_H
#define ENUM_T480184459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t480184459  : public ValueType_t3449469246
{
public:

public:
};

struct Enum_t480184459_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1085015499* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t480184459_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1085015499* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1085015499** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1085015499* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t480184459_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t480184459_marshaled_com
{
};
#endif // ENUM_T480184459_H
#ifndef SECURITYFRAME_T1226064848_H
#define SECURITYFRAME_T1226064848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityFrame
struct  SecurityFrame_t1226064848 
{
public:
	// System.AppDomain System.Security.SecurityFrame::_domain
	AppDomain_t2294927346 * ____domain_0;
	// System.Reflection.MethodInfo System.Security.SecurityFrame::_method
	MethodInfo_t * ____method_1;
	// System.Security.PermissionSet System.Security.SecurityFrame::_assert
	PermissionSet_t2481005838 * ____assert_2;
	// System.Security.PermissionSet System.Security.SecurityFrame::_deny
	PermissionSet_t2481005838 * ____deny_3;
	// System.Security.PermissionSet System.Security.SecurityFrame::_permitonly
	PermissionSet_t2481005838 * ____permitonly_4;

public:
	inline static int32_t get_offset_of__domain_0() { return static_cast<int32_t>(offsetof(SecurityFrame_t1226064848, ____domain_0)); }
	inline AppDomain_t2294927346 * get__domain_0() const { return ____domain_0; }
	inline AppDomain_t2294927346 ** get_address_of__domain_0() { return &____domain_0; }
	inline void set__domain_0(AppDomain_t2294927346 * value)
	{
		____domain_0 = value;
		Il2CppCodeGenWriteBarrier((&____domain_0), value);
	}

	inline static int32_t get_offset_of__method_1() { return static_cast<int32_t>(offsetof(SecurityFrame_t1226064848, ____method_1)); }
	inline MethodInfo_t * get__method_1() const { return ____method_1; }
	inline MethodInfo_t ** get_address_of__method_1() { return &____method_1; }
	inline void set__method_1(MethodInfo_t * value)
	{
		____method_1 = value;
		Il2CppCodeGenWriteBarrier((&____method_1), value);
	}

	inline static int32_t get_offset_of__assert_2() { return static_cast<int32_t>(offsetof(SecurityFrame_t1226064848, ____assert_2)); }
	inline PermissionSet_t2481005838 * get__assert_2() const { return ____assert_2; }
	inline PermissionSet_t2481005838 ** get_address_of__assert_2() { return &____assert_2; }
	inline void set__assert_2(PermissionSet_t2481005838 * value)
	{
		____assert_2 = value;
		Il2CppCodeGenWriteBarrier((&____assert_2), value);
	}

	inline static int32_t get_offset_of__deny_3() { return static_cast<int32_t>(offsetof(SecurityFrame_t1226064848, ____deny_3)); }
	inline PermissionSet_t2481005838 * get__deny_3() const { return ____deny_3; }
	inline PermissionSet_t2481005838 ** get_address_of__deny_3() { return &____deny_3; }
	inline void set__deny_3(PermissionSet_t2481005838 * value)
	{
		____deny_3 = value;
		Il2CppCodeGenWriteBarrier((&____deny_3), value);
	}

	inline static int32_t get_offset_of__permitonly_4() { return static_cast<int32_t>(offsetof(SecurityFrame_t1226064848, ____permitonly_4)); }
	inline PermissionSet_t2481005838 * get__permitonly_4() const { return ____permitonly_4; }
	inline PermissionSet_t2481005838 ** get_address_of__permitonly_4() { return &____permitonly_4; }
	inline void set__permitonly_4(PermissionSet_t2481005838 * value)
	{
		____permitonly_4 = value;
		Il2CppCodeGenWriteBarrier((&____permitonly_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.SecurityFrame
struct SecurityFrame_t1226064848_marshaled_pinvoke
{
	AppDomain_t2294927346 * ____domain_0;
	MethodInfo_t * ____method_1;
	PermissionSet_t2481005838 * ____assert_2;
	PermissionSet_t2481005838 * ____deny_3;
	PermissionSet_t2481005838 * ____permitonly_4;
};
// Native definition for COM marshalling of System.Security.SecurityFrame
struct SecurityFrame_t1226064848_marshaled_com
{
	AppDomain_t2294927346 * ____domain_0;
	MethodInfo_t * ____method_1;
	PermissionSet_t2481005838 * ____assert_2;
	PermissionSet_t2481005838 * ____deny_3;
	PermissionSet_t2481005838 * ____permitonly_4;
};
#endif // SECURITYFRAME_T1226064848_H
#ifndef RSAPKCS1SIGNATUREDEFORMATTER_T445289980_H
#define RSAPKCS1SIGNATUREDEFORMATTER_T445289980_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1SignatureDeformatter
struct  RSAPKCS1SignatureDeformatter_t445289980  : public AsymmetricSignatureDeformatter_t1515851892
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1SignatureDeformatter::rsa
	RSA_t1050577473 * ___rsa_0;
	// System.String System.Security.Cryptography.RSAPKCS1SignatureDeformatter::hashName
	String_t* ___hashName_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureDeformatter_t445289980, ___rsa_0)); }
	inline RSA_t1050577473 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t1050577473 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t1050577473 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_hashName_1() { return static_cast<int32_t>(offsetof(RSAPKCS1SignatureDeformatter_t445289980, ___hashName_1)); }
	inline String_t* get_hashName_1() const { return ___hashName_1; }
	inline String_t** get_address_of_hashName_1() { return &___hashName_1; }
	inline void set_hashName_1(String_t* value)
	{
		___hashName_1 = value;
		Il2CppCodeGenWriteBarrier((&___hashName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1SIGNATUREDEFORMATTER_T445289980_H
#ifndef TRIPLEDESTRANSFORM_T1546794956_H
#define TRIPLEDESTRANSFORM_T1546794956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.TripleDESTransform
struct  TripleDESTransform_t1546794956  : public SymmetricTransform_t2886634140
{
public:
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::E1
	DESTransform_t4291006340 * ___E1_12;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::D2
	DESTransform_t4291006340 * ___D2_13;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::E3
	DESTransform_t4291006340 * ___E3_14;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::D1
	DESTransform_t4291006340 * ___D1_15;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::E2
	DESTransform_t4291006340 * ___E2_16;
	// System.Security.Cryptography.DESTransform System.Security.Cryptography.TripleDESTransform::D3
	DESTransform_t4291006340 * ___D3_17;

public:
	inline static int32_t get_offset_of_E1_12() { return static_cast<int32_t>(offsetof(TripleDESTransform_t1546794956, ___E1_12)); }
	inline DESTransform_t4291006340 * get_E1_12() const { return ___E1_12; }
	inline DESTransform_t4291006340 ** get_address_of_E1_12() { return &___E1_12; }
	inline void set_E1_12(DESTransform_t4291006340 * value)
	{
		___E1_12 = value;
		Il2CppCodeGenWriteBarrier((&___E1_12), value);
	}

	inline static int32_t get_offset_of_D2_13() { return static_cast<int32_t>(offsetof(TripleDESTransform_t1546794956, ___D2_13)); }
	inline DESTransform_t4291006340 * get_D2_13() const { return ___D2_13; }
	inline DESTransform_t4291006340 ** get_address_of_D2_13() { return &___D2_13; }
	inline void set_D2_13(DESTransform_t4291006340 * value)
	{
		___D2_13 = value;
		Il2CppCodeGenWriteBarrier((&___D2_13), value);
	}

	inline static int32_t get_offset_of_E3_14() { return static_cast<int32_t>(offsetof(TripleDESTransform_t1546794956, ___E3_14)); }
	inline DESTransform_t4291006340 * get_E3_14() const { return ___E3_14; }
	inline DESTransform_t4291006340 ** get_address_of_E3_14() { return &___E3_14; }
	inline void set_E3_14(DESTransform_t4291006340 * value)
	{
		___E3_14 = value;
		Il2CppCodeGenWriteBarrier((&___E3_14), value);
	}

	inline static int32_t get_offset_of_D1_15() { return static_cast<int32_t>(offsetof(TripleDESTransform_t1546794956, ___D1_15)); }
	inline DESTransform_t4291006340 * get_D1_15() const { return ___D1_15; }
	inline DESTransform_t4291006340 ** get_address_of_D1_15() { return &___D1_15; }
	inline void set_D1_15(DESTransform_t4291006340 * value)
	{
		___D1_15 = value;
		Il2CppCodeGenWriteBarrier((&___D1_15), value);
	}

	inline static int32_t get_offset_of_E2_16() { return static_cast<int32_t>(offsetof(TripleDESTransform_t1546794956, ___E2_16)); }
	inline DESTransform_t4291006340 * get_E2_16() const { return ___E2_16; }
	inline DESTransform_t4291006340 ** get_address_of_E2_16() { return &___E2_16; }
	inline void set_E2_16(DESTransform_t4291006340 * value)
	{
		___E2_16 = value;
		Il2CppCodeGenWriteBarrier((&___E2_16), value);
	}

	inline static int32_t get_offset_of_D3_17() { return static_cast<int32_t>(offsetof(TripleDESTransform_t1546794956, ___D3_17)); }
	inline DESTransform_t4291006340 * get_D3_17() const { return ___D3_17; }
	inline DESTransform_t4291006340 ** get_address_of_D3_17() { return &___D3_17; }
	inline void set_D3_17(DESTransform_t4291006340 * value)
	{
		___D3_17 = value;
		Il2CppCodeGenWriteBarrier((&___D3_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIPLEDESTRANSFORM_T1546794956_H
#ifndef KEYEDHASHALGORITHM_T2282618673_H
#define KEYEDHASHALGORITHM_T2282618673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.KeyedHashAlgorithm
struct  KeyedHashAlgorithm_t2282618673  : public HashAlgorithm_t1249475727
{
public:
	// System.Byte[] System.Security.Cryptography.KeyedHashAlgorithm::KeyValue
	ByteU5BU5D_t317375469* ___KeyValue_4;

public:
	inline static int32_t get_offset_of_KeyValue_4() { return static_cast<int32_t>(offsetof(KeyedHashAlgorithm_t2282618673, ___KeyValue_4)); }
	inline ByteU5BU5D_t317375469* get_KeyValue_4() const { return ___KeyValue_4; }
	inline ByteU5BU5D_t317375469** get_address_of_KeyValue_4() { return &___KeyValue_4; }
	inline void set_KeyValue_4(ByteU5BU5D_t317375469* value)
	{
		___KeyValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYEDHASHALGORITHM_T2282618673_H
#ifndef MD5_T3612848052_H
#define MD5_T3612848052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MD5
struct  MD5_t3612848052  : public HashAlgorithm_t1249475727
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD5_T3612848052_H
#ifndef RC2TRANSFORM_T2244013379_H
#define RC2TRANSFORM_T2244013379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RC2Transform
struct  RC2Transform_t2244013379  : public SymmetricTransform_t2886634140
{
public:
	// System.UInt16 System.Security.Cryptography.RC2Transform::R0
	uint16_t ___R0_12;
	// System.UInt16 System.Security.Cryptography.RC2Transform::R1
	uint16_t ___R1_13;
	// System.UInt16 System.Security.Cryptography.RC2Transform::R2
	uint16_t ___R2_14;
	// System.UInt16 System.Security.Cryptography.RC2Transform::R3
	uint16_t ___R3_15;
	// System.UInt16[] System.Security.Cryptography.RC2Transform::K
	UInt16U5BU5D_t3499399594* ___K_16;
	// System.Int32 System.Security.Cryptography.RC2Transform::j
	int32_t ___j_17;

public:
	inline static int32_t get_offset_of_R0_12() { return static_cast<int32_t>(offsetof(RC2Transform_t2244013379, ___R0_12)); }
	inline uint16_t get_R0_12() const { return ___R0_12; }
	inline uint16_t* get_address_of_R0_12() { return &___R0_12; }
	inline void set_R0_12(uint16_t value)
	{
		___R0_12 = value;
	}

	inline static int32_t get_offset_of_R1_13() { return static_cast<int32_t>(offsetof(RC2Transform_t2244013379, ___R1_13)); }
	inline uint16_t get_R1_13() const { return ___R1_13; }
	inline uint16_t* get_address_of_R1_13() { return &___R1_13; }
	inline void set_R1_13(uint16_t value)
	{
		___R1_13 = value;
	}

	inline static int32_t get_offset_of_R2_14() { return static_cast<int32_t>(offsetof(RC2Transform_t2244013379, ___R2_14)); }
	inline uint16_t get_R2_14() const { return ___R2_14; }
	inline uint16_t* get_address_of_R2_14() { return &___R2_14; }
	inline void set_R2_14(uint16_t value)
	{
		___R2_14 = value;
	}

	inline static int32_t get_offset_of_R3_15() { return static_cast<int32_t>(offsetof(RC2Transform_t2244013379, ___R3_15)); }
	inline uint16_t get_R3_15() const { return ___R3_15; }
	inline uint16_t* get_address_of_R3_15() { return &___R3_15; }
	inline void set_R3_15(uint16_t value)
	{
		___R3_15 = value;
	}

	inline static int32_t get_offset_of_K_16() { return static_cast<int32_t>(offsetof(RC2Transform_t2244013379, ___K_16)); }
	inline UInt16U5BU5D_t3499399594* get_K_16() const { return ___K_16; }
	inline UInt16U5BU5D_t3499399594** get_address_of_K_16() { return &___K_16; }
	inline void set_K_16(UInt16U5BU5D_t3499399594* value)
	{
		___K_16 = value;
		Il2CppCodeGenWriteBarrier((&___K_16), value);
	}

	inline static int32_t get_offset_of_j_17() { return static_cast<int32_t>(offsetof(RC2Transform_t2244013379, ___j_17)); }
	inline int32_t get_j_17() const { return ___j_17; }
	inline int32_t* get_address_of_j_17() { return &___j_17; }
	inline void set_j_17(int32_t value)
	{
		___j_17 = value;
	}
};

struct RC2Transform_t2244013379_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.RC2Transform::pitable
	ByteU5BU5D_t317375469* ___pitable_18;

public:
	inline static int32_t get_offset_of_pitable_18() { return static_cast<int32_t>(offsetof(RC2Transform_t2244013379_StaticFields, ___pitable_18)); }
	inline ByteU5BU5D_t317375469* get_pitable_18() const { return ___pitable_18; }
	inline ByteU5BU5D_t317375469** get_address_of_pitable_18() { return &___pitable_18; }
	inline void set_pitable_18(ByteU5BU5D_t317375469* value)
	{
		___pitable_18 = value;
		Il2CppCodeGenWriteBarrier((&___pitable_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC2TRANSFORM_T2244013379_H
#ifndef ALLOWPARTIALLYTRUSTEDCALLERSATTRIBUTE_T3247703654_H
#define ALLOWPARTIALLYTRUSTEDCALLERSATTRIBUTE_T3247703654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.AllowPartiallyTrustedCallersAttribute
struct  AllowPartiallyTrustedCallersAttribute_t3247703654  : public Attribute_t2885837796
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALLOWPARTIALLYTRUSTEDCALLERSATTRIBUTE_T3247703654_H
#ifndef RSA_T1050577473_H
#define RSA_T1050577473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSA
struct  RSA_t1050577473  : public AsymmetricAlgorithm_t270684444
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSA_T1050577473_H
#ifndef SECURITYCRITICALSCOPE_T1774892986_H
#define SECURITYCRITICALSCOPE_T1774892986_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityCriticalScope
struct  SecurityCriticalScope_t1774892986 
{
public:
	// System.Int32 System.Security.SecurityCriticalScope::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityCriticalScope_t1774892986, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYCRITICALSCOPE_T1774892986_H
#ifndef SECURITYCONTEXT_T2284490264_H
#define SECURITYCONTEXT_T2284490264_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityContext
struct  SecurityContext_t2284490264  : public RuntimeObject
{
public:
	// System.Boolean System.Security.SecurityContext::_capture
	bool ____capture_0;
	// System.IntPtr System.Security.SecurityContext::_winid
	IntPtr_t ____winid_1;
	// System.Threading.CompressedStack System.Security.SecurityContext::_stack
	CompressedStack_t3821793422 * ____stack_2;
	// System.Boolean System.Security.SecurityContext::_suppressFlow
	bool ____suppressFlow_3;

public:
	inline static int32_t get_offset_of__capture_0() { return static_cast<int32_t>(offsetof(SecurityContext_t2284490264, ____capture_0)); }
	inline bool get__capture_0() const { return ____capture_0; }
	inline bool* get_address_of__capture_0() { return &____capture_0; }
	inline void set__capture_0(bool value)
	{
		____capture_0 = value;
	}

	inline static int32_t get_offset_of__winid_1() { return static_cast<int32_t>(offsetof(SecurityContext_t2284490264, ____winid_1)); }
	inline IntPtr_t get__winid_1() const { return ____winid_1; }
	inline IntPtr_t* get_address_of__winid_1() { return &____winid_1; }
	inline void set__winid_1(IntPtr_t value)
	{
		____winid_1 = value;
	}

	inline static int32_t get_offset_of__stack_2() { return static_cast<int32_t>(offsetof(SecurityContext_t2284490264, ____stack_2)); }
	inline CompressedStack_t3821793422 * get__stack_2() const { return ____stack_2; }
	inline CompressedStack_t3821793422 ** get_address_of__stack_2() { return &____stack_2; }
	inline void set__stack_2(CompressedStack_t3821793422 * value)
	{
		____stack_2 = value;
		Il2CppCodeGenWriteBarrier((&____stack_2), value);
	}

	inline static int32_t get_offset_of__suppressFlow_3() { return static_cast<int32_t>(offsetof(SecurityContext_t2284490264, ____suppressFlow_3)); }
	inline bool get__suppressFlow_3() const { return ____suppressFlow_3; }
	inline bool* get_address_of__suppressFlow_3() { return &____suppressFlow_3; }
	inline void set__suppressFlow_3(bool value)
	{
		____suppressFlow_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYCONTEXT_T2284490264_H
#ifndef CODEACCESSSECURITYATTRIBUTE_T972729232_H
#define CODEACCESSSECURITYATTRIBUTE_T972729232_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.CodeAccessSecurityAttribute
struct  CodeAccessSecurityAttribute_t972729232  : public SecurityAttribute_t3088552299
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CODEACCESSSECURITYATTRIBUTE_T972729232_H
#ifndef PRINCIPALPOLICY_T4255473229_H
#define PRINCIPALPOLICY_T4255473229_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.PrincipalPolicy
struct  PrincipalPolicy_t4255473229 
{
public:
	// System.Int32 System.Security.Principal.PrincipalPolicy::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PrincipalPolicy_t4255473229, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRINCIPALPOLICY_T4255473229_H
#ifndef WINDOWSACCOUNTTYPE_T399573456_H
#define WINDOWSACCOUNTTYPE_T399573456_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.WindowsAccountType
struct  WindowsAccountType_t399573456 
{
public:
	// System.Int32 System.Security.Principal.WindowsAccountType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WindowsAccountType_t399573456, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSACCOUNTTYPE_T399573456_H
#ifndef SECURITYPERMISSIONFLAG_T1035165784_H
#define SECURITYPERMISSIONFLAG_T1035165784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermissionFlag
struct  SecurityPermissionFlag_t1035165784 
{
public:
	// System.Int32 System.Security.Permissions.SecurityPermissionFlag::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityPermissionFlag_t1035165784, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPERMISSIONFLAG_T1035165784_H
#ifndef SECURITYEXCEPTION_T1990041383_H
#define SECURITYEXCEPTION_T1990041383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityException
struct  SecurityException_t1990041383  : public SystemException_t2455424764
{
public:
	// System.String System.Security.SecurityException::permissionState
	String_t* ___permissionState_11;
	// System.Type System.Security.SecurityException::permissionType
	Type_t * ___permissionType_12;
	// System.String System.Security.SecurityException::_granted
	String_t* ____granted_13;
	// System.String System.Security.SecurityException::_refused
	String_t* ____refused_14;
	// System.Object System.Security.SecurityException::_demanded
	RuntimeObject * ____demanded_15;
	// System.Security.IPermission System.Security.SecurityException::_firstperm
	RuntimeObject* ____firstperm_16;
	// System.Reflection.MethodInfo System.Security.SecurityException::_method
	MethodInfo_t * ____method_17;
	// System.Security.Policy.Evidence System.Security.SecurityException::_evidence
	Evidence_t2966650440 * ____evidence_18;

public:
	inline static int32_t get_offset_of_permissionState_11() { return static_cast<int32_t>(offsetof(SecurityException_t1990041383, ___permissionState_11)); }
	inline String_t* get_permissionState_11() const { return ___permissionState_11; }
	inline String_t** get_address_of_permissionState_11() { return &___permissionState_11; }
	inline void set_permissionState_11(String_t* value)
	{
		___permissionState_11 = value;
		Il2CppCodeGenWriteBarrier((&___permissionState_11), value);
	}

	inline static int32_t get_offset_of_permissionType_12() { return static_cast<int32_t>(offsetof(SecurityException_t1990041383, ___permissionType_12)); }
	inline Type_t * get_permissionType_12() const { return ___permissionType_12; }
	inline Type_t ** get_address_of_permissionType_12() { return &___permissionType_12; }
	inline void set_permissionType_12(Type_t * value)
	{
		___permissionType_12 = value;
		Il2CppCodeGenWriteBarrier((&___permissionType_12), value);
	}

	inline static int32_t get_offset_of__granted_13() { return static_cast<int32_t>(offsetof(SecurityException_t1990041383, ____granted_13)); }
	inline String_t* get__granted_13() const { return ____granted_13; }
	inline String_t** get_address_of__granted_13() { return &____granted_13; }
	inline void set__granted_13(String_t* value)
	{
		____granted_13 = value;
		Il2CppCodeGenWriteBarrier((&____granted_13), value);
	}

	inline static int32_t get_offset_of__refused_14() { return static_cast<int32_t>(offsetof(SecurityException_t1990041383, ____refused_14)); }
	inline String_t* get__refused_14() const { return ____refused_14; }
	inline String_t** get_address_of__refused_14() { return &____refused_14; }
	inline void set__refused_14(String_t* value)
	{
		____refused_14 = value;
		Il2CppCodeGenWriteBarrier((&____refused_14), value);
	}

	inline static int32_t get_offset_of__demanded_15() { return static_cast<int32_t>(offsetof(SecurityException_t1990041383, ____demanded_15)); }
	inline RuntimeObject * get__demanded_15() const { return ____demanded_15; }
	inline RuntimeObject ** get_address_of__demanded_15() { return &____demanded_15; }
	inline void set__demanded_15(RuntimeObject * value)
	{
		____demanded_15 = value;
		Il2CppCodeGenWriteBarrier((&____demanded_15), value);
	}

	inline static int32_t get_offset_of__firstperm_16() { return static_cast<int32_t>(offsetof(SecurityException_t1990041383, ____firstperm_16)); }
	inline RuntimeObject* get__firstperm_16() const { return ____firstperm_16; }
	inline RuntimeObject** get_address_of__firstperm_16() { return &____firstperm_16; }
	inline void set__firstperm_16(RuntimeObject* value)
	{
		____firstperm_16 = value;
		Il2CppCodeGenWriteBarrier((&____firstperm_16), value);
	}

	inline static int32_t get_offset_of__method_17() { return static_cast<int32_t>(offsetof(SecurityException_t1990041383, ____method_17)); }
	inline MethodInfo_t * get__method_17() const { return ____method_17; }
	inline MethodInfo_t ** get_address_of__method_17() { return &____method_17; }
	inline void set__method_17(MethodInfo_t * value)
	{
		____method_17 = value;
		Il2CppCodeGenWriteBarrier((&____method_17), value);
	}

	inline static int32_t get_offset_of__evidence_18() { return static_cast<int32_t>(offsetof(SecurityException_t1990041383, ____evidence_18)); }
	inline Evidence_t2966650440 * get__evidence_18() const { return ____evidence_18; }
	inline Evidence_t2966650440 ** get_address_of__evidence_18() { return &____evidence_18; }
	inline void set__evidence_18(Evidence_t2966650440 * value)
	{
		____evidence_18 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYEXCEPTION_T1990041383_H
#ifndef RUNTIMEDECLSECURITYENTRY_T2549996473_H
#define RUNTIMEDECLSECURITYENTRY_T2549996473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.RuntimeDeclSecurityEntry
struct  RuntimeDeclSecurityEntry_t2549996473 
{
public:
	// System.IntPtr System.Security.RuntimeDeclSecurityEntry::blob
	IntPtr_t ___blob_0;
	// System.Int32 System.Security.RuntimeDeclSecurityEntry::size
	int32_t ___size_1;
	// System.Int32 System.Security.RuntimeDeclSecurityEntry::index
	int32_t ___index_2;

public:
	inline static int32_t get_offset_of_blob_0() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityEntry_t2549996473, ___blob_0)); }
	inline IntPtr_t get_blob_0() const { return ___blob_0; }
	inline IntPtr_t* get_address_of_blob_0() { return &___blob_0; }
	inline void set_blob_0(IntPtr_t value)
	{
		___blob_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityEntry_t2549996473, ___size_1)); }
	inline int32_t get_size_1() const { return ___size_1; }
	inline int32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int32_t value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(RuntimeDeclSecurityEntry_t2549996473, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEDECLSECURITYENTRY_T2549996473_H
#ifndef SHA256MANAGED_T3300309131_H
#define SHA256MANAGED_T3300309131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA256Managed
struct  SHA256Managed_t3300309131  : public SHA256_t368553972
{
public:
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::_H
	UInt32U5BU5D_t1435100350* ____H_4;
	// System.UInt64 System.Security.Cryptography.SHA256Managed::count
	uint64_t ___count_5;
	// System.Byte[] System.Security.Cryptography.SHA256Managed::_ProcessingBuffer
	ByteU5BU5D_t317375469* ____ProcessingBuffer_6;
	// System.Int32 System.Security.Cryptography.SHA256Managed::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_7;
	// System.UInt32[] System.Security.Cryptography.SHA256Managed::buff
	UInt32U5BU5D_t1435100350* ___buff_8;

public:
	inline static int32_t get_offset_of__H_4() { return static_cast<int32_t>(offsetof(SHA256Managed_t3300309131, ____H_4)); }
	inline UInt32U5BU5D_t1435100350* get__H_4() const { return ____H_4; }
	inline UInt32U5BU5D_t1435100350** get_address_of__H_4() { return &____H_4; }
	inline void set__H_4(UInt32U5BU5D_t1435100350* value)
	{
		____H_4 = value;
		Il2CppCodeGenWriteBarrier((&____H_4), value);
	}

	inline static int32_t get_offset_of_count_5() { return static_cast<int32_t>(offsetof(SHA256Managed_t3300309131, ___count_5)); }
	inline uint64_t get_count_5() const { return ___count_5; }
	inline uint64_t* get_address_of_count_5() { return &___count_5; }
	inline void set_count_5(uint64_t value)
	{
		___count_5 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_6() { return static_cast<int32_t>(offsetof(SHA256Managed_t3300309131, ____ProcessingBuffer_6)); }
	inline ByteU5BU5D_t317375469* get__ProcessingBuffer_6() const { return ____ProcessingBuffer_6; }
	inline ByteU5BU5D_t317375469** get_address_of__ProcessingBuffer_6() { return &____ProcessingBuffer_6; }
	inline void set__ProcessingBuffer_6(ByteU5BU5D_t317375469* value)
	{
		____ProcessingBuffer_6 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_6), value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_7() { return static_cast<int32_t>(offsetof(SHA256Managed_t3300309131, ____ProcessingBufferCount_7)); }
	inline int32_t get__ProcessingBufferCount_7() const { return ____ProcessingBufferCount_7; }
	inline int32_t* get_address_of__ProcessingBufferCount_7() { return &____ProcessingBufferCount_7; }
	inline void set__ProcessingBufferCount_7(int32_t value)
	{
		____ProcessingBufferCount_7 = value;
	}

	inline static int32_t get_offset_of_buff_8() { return static_cast<int32_t>(offsetof(SHA256Managed_t3300309131, ___buff_8)); }
	inline UInt32U5BU5D_t1435100350* get_buff_8() const { return ___buff_8; }
	inline UInt32U5BU5D_t1435100350** get_address_of_buff_8() { return &___buff_8; }
	inline void set_buff_8(UInt32U5BU5D_t1435100350* value)
	{
		___buff_8 = value;
		Il2CppCodeGenWriteBarrier((&___buff_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA256MANAGED_T3300309131_H
#ifndef MD5CRYPTOSERVICEPROVIDER_T793791708_H
#define MD5CRYPTOSERVICEPROVIDER_T793791708_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MD5CryptoServiceProvider
struct  MD5CryptoServiceProvider_t793791708  : public MD5_t3612848052
{
public:
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::_H
	UInt32U5BU5D_t1435100350* ____H_4;
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::buff
	UInt32U5BU5D_t1435100350* ___buff_5;
	// System.UInt64 System.Security.Cryptography.MD5CryptoServiceProvider::count
	uint64_t ___count_6;
	// System.Byte[] System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBuffer
	ByteU5BU5D_t317375469* ____ProcessingBuffer_7;
	// System.Int32 System.Security.Cryptography.MD5CryptoServiceProvider::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_8;

public:
	inline static int32_t get_offset_of__H_4() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t793791708, ____H_4)); }
	inline UInt32U5BU5D_t1435100350* get__H_4() const { return ____H_4; }
	inline UInt32U5BU5D_t1435100350** get_address_of__H_4() { return &____H_4; }
	inline void set__H_4(UInt32U5BU5D_t1435100350* value)
	{
		____H_4 = value;
		Il2CppCodeGenWriteBarrier((&____H_4), value);
	}

	inline static int32_t get_offset_of_buff_5() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t793791708, ___buff_5)); }
	inline UInt32U5BU5D_t1435100350* get_buff_5() const { return ___buff_5; }
	inline UInt32U5BU5D_t1435100350** get_address_of_buff_5() { return &___buff_5; }
	inline void set_buff_5(UInt32U5BU5D_t1435100350* value)
	{
		___buff_5 = value;
		Il2CppCodeGenWriteBarrier((&___buff_5), value);
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t793791708, ___count_6)); }
	inline uint64_t get_count_6() const { return ___count_6; }
	inline uint64_t* get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(uint64_t value)
	{
		___count_6 = value;
	}

	inline static int32_t get_offset_of__ProcessingBuffer_7() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t793791708, ____ProcessingBuffer_7)); }
	inline ByteU5BU5D_t317375469* get__ProcessingBuffer_7() const { return ____ProcessingBuffer_7; }
	inline ByteU5BU5D_t317375469** get_address_of__ProcessingBuffer_7() { return &____ProcessingBuffer_7; }
	inline void set__ProcessingBuffer_7(ByteU5BU5D_t317375469* value)
	{
		____ProcessingBuffer_7 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_7), value);
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_8() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t793791708, ____ProcessingBufferCount_8)); }
	inline int32_t get__ProcessingBufferCount_8() const { return ____ProcessingBufferCount_8; }
	inline int32_t* get_address_of__ProcessingBufferCount_8() { return &____ProcessingBufferCount_8; }
	inline void set__ProcessingBufferCount_8(int32_t value)
	{
		____ProcessingBufferCount_8 = value;
	}
};

struct MD5CryptoServiceProvider_t793791708_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.MD5CryptoServiceProvider::K
	UInt32U5BU5D_t1435100350* ___K_9;

public:
	inline static int32_t get_offset_of_K_9() { return static_cast<int32_t>(offsetof(MD5CryptoServiceProvider_t793791708_StaticFields, ___K_9)); }
	inline UInt32U5BU5D_t1435100350* get_K_9() const { return ___K_9; }
	inline UInt32U5BU5D_t1435100350** get_address_of_K_9() { return &___K_9; }
	inline void set_K_9(UInt32U5BU5D_t1435100350* value)
	{
		___K_9 = value;
		Il2CppCodeGenWriteBarrier((&___K_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD5CRYPTOSERVICEPROVIDER_T793791708_H
#ifndef CRYPTOGRAPHICEXCEPTION_T3712973458_H
#define CRYPTOGRAPHICEXCEPTION_T3712973458_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptographicException
struct  CryptographicException_t3712973458  : public SystemException_t2455424764
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOGRAPHICEXCEPTION_T3712973458_H
#ifndef CSPPROVIDERFLAGS_T2062850836_H
#define CSPPROVIDERFLAGS_T2062850836_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CspProviderFlags
struct  CspProviderFlags_t2062850836 
{
public:
	// System.Int32 System.Security.Cryptography.CspProviderFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CspProviderFlags_t2062850836, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSPPROVIDERFLAGS_T2062850836_H
#ifndef DSACRYPTOSERVICEPROVIDER_T3565431618_H
#define DSACRYPTOSERVICEPROVIDER_T3565431618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSACryptoServiceProvider
struct  DSACryptoServiceProvider_t3565431618  : public DSA_t28453765
{
public:
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.DSACryptoServiceProvider::store
	KeyPairPersistence_t3212350790 * ___store_2;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::persistKey
	bool ___persistKey_3;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::persisted
	bool ___persisted_4;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_5;
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::m_disposed
	bool ___m_disposed_6;
	// Mono.Security.Cryptography.DSAManaged System.Security.Cryptography.DSACryptoServiceProvider::dsa
	DSAManaged_t1478013134 * ___dsa_7;

public:
	inline static int32_t get_offset_of_store_2() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t3565431618, ___store_2)); }
	inline KeyPairPersistence_t3212350790 * get_store_2() const { return ___store_2; }
	inline KeyPairPersistence_t3212350790 ** get_address_of_store_2() { return &___store_2; }
	inline void set_store_2(KeyPairPersistence_t3212350790 * value)
	{
		___store_2 = value;
		Il2CppCodeGenWriteBarrier((&___store_2), value);
	}

	inline static int32_t get_offset_of_persistKey_3() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t3565431618, ___persistKey_3)); }
	inline bool get_persistKey_3() const { return ___persistKey_3; }
	inline bool* get_address_of_persistKey_3() { return &___persistKey_3; }
	inline void set_persistKey_3(bool value)
	{
		___persistKey_3 = value;
	}

	inline static int32_t get_offset_of_persisted_4() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t3565431618, ___persisted_4)); }
	inline bool get_persisted_4() const { return ___persisted_4; }
	inline bool* get_address_of_persisted_4() { return &___persisted_4; }
	inline void set_persisted_4(bool value)
	{
		___persisted_4 = value;
	}

	inline static int32_t get_offset_of_privateKeyExportable_5() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t3565431618, ___privateKeyExportable_5)); }
	inline bool get_privateKeyExportable_5() const { return ___privateKeyExportable_5; }
	inline bool* get_address_of_privateKeyExportable_5() { return &___privateKeyExportable_5; }
	inline void set_privateKeyExportable_5(bool value)
	{
		___privateKeyExportable_5 = value;
	}

	inline static int32_t get_offset_of_m_disposed_6() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t3565431618, ___m_disposed_6)); }
	inline bool get_m_disposed_6() const { return ___m_disposed_6; }
	inline bool* get_address_of_m_disposed_6() { return &___m_disposed_6; }
	inline void set_m_disposed_6(bool value)
	{
		___m_disposed_6 = value;
	}

	inline static int32_t get_offset_of_dsa_7() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t3565431618, ___dsa_7)); }
	inline DSAManaged_t1478013134 * get_dsa_7() const { return ___dsa_7; }
	inline DSAManaged_t1478013134 ** get_address_of_dsa_7() { return &___dsa_7; }
	inline void set_dsa_7(DSAManaged_t1478013134 * value)
	{
		___dsa_7 = value;
		Il2CppCodeGenWriteBarrier((&___dsa_7), value);
	}
};

struct DSACryptoServiceProvider_t3565431618_StaticFields
{
public:
	// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::useMachineKeyStore
	bool ___useMachineKeyStore_8;

public:
	inline static int32_t get_offset_of_useMachineKeyStore_8() { return static_cast<int32_t>(offsetof(DSACryptoServiceProvider_t3565431618_StaticFields, ___useMachineKeyStore_8)); }
	inline bool get_useMachineKeyStore_8() const { return ___useMachineKeyStore_8; }
	inline bool* get_address_of_useMachineKeyStore_8() { return &___useMachineKeyStore_8; }
	inline void set_useMachineKeyStore_8(bool value)
	{
		___useMachineKeyStore_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSACRYPTOSERVICEPROVIDER_T3565431618_H
#ifndef HMAC_T1292688981_H
#define HMAC_T1292688981_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMAC
struct  HMAC_t1292688981  : public KeyedHashAlgorithm_t2282618673
{
public:
	// System.Boolean System.Security.Cryptography.HMAC::_disposed
	bool ____disposed_5;
	// System.String System.Security.Cryptography.HMAC::_hashName
	String_t* ____hashName_6;
	// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HMAC::_algo
	HashAlgorithm_t1249475727 * ____algo_7;
	// Mono.Security.Cryptography.BlockProcessor System.Security.Cryptography.HMAC::_block
	BlockProcessor_t3031103089 * ____block_8;
	// System.Int32 System.Security.Cryptography.HMAC::_blockSizeValue
	int32_t ____blockSizeValue_9;

public:
	inline static int32_t get_offset_of__disposed_5() { return static_cast<int32_t>(offsetof(HMAC_t1292688981, ____disposed_5)); }
	inline bool get__disposed_5() const { return ____disposed_5; }
	inline bool* get_address_of__disposed_5() { return &____disposed_5; }
	inline void set__disposed_5(bool value)
	{
		____disposed_5 = value;
	}

	inline static int32_t get_offset_of__hashName_6() { return static_cast<int32_t>(offsetof(HMAC_t1292688981, ____hashName_6)); }
	inline String_t* get__hashName_6() const { return ____hashName_6; }
	inline String_t** get_address_of__hashName_6() { return &____hashName_6; }
	inline void set__hashName_6(String_t* value)
	{
		____hashName_6 = value;
		Il2CppCodeGenWriteBarrier((&____hashName_6), value);
	}

	inline static int32_t get_offset_of__algo_7() { return static_cast<int32_t>(offsetof(HMAC_t1292688981, ____algo_7)); }
	inline HashAlgorithm_t1249475727 * get__algo_7() const { return ____algo_7; }
	inline HashAlgorithm_t1249475727 ** get_address_of__algo_7() { return &____algo_7; }
	inline void set__algo_7(HashAlgorithm_t1249475727 * value)
	{
		____algo_7 = value;
		Il2CppCodeGenWriteBarrier((&____algo_7), value);
	}

	inline static int32_t get_offset_of__block_8() { return static_cast<int32_t>(offsetof(HMAC_t1292688981, ____block_8)); }
	inline BlockProcessor_t3031103089 * get__block_8() const { return ____block_8; }
	inline BlockProcessor_t3031103089 ** get_address_of__block_8() { return &____block_8; }
	inline void set__block_8(BlockProcessor_t3031103089 * value)
	{
		____block_8 = value;
		Il2CppCodeGenWriteBarrier((&____block_8), value);
	}

	inline static int32_t get_offset_of__blockSizeValue_9() { return static_cast<int32_t>(offsetof(HMAC_t1292688981, ____blockSizeValue_9)); }
	inline int32_t get__blockSizeValue_9() const { return ____blockSizeValue_9; }
	inline int32_t* get_address_of__blockSizeValue_9() { return &____blockSizeValue_9; }
	inline void set__blockSizeValue_9(int32_t value)
	{
		____blockSizeValue_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMAC_T1292688981_H
#ifndef MACTRIPLEDES_T1421907319_H
#define MACTRIPLEDES_T1421907319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MACTripleDES
struct  MACTripleDES_t1421907319  : public KeyedHashAlgorithm_t2282618673
{
public:
	// System.Security.Cryptography.TripleDES System.Security.Cryptography.MACTripleDES::tdes
	TripleDES_t2260975313 * ___tdes_5;
	// Mono.Security.Cryptography.MACAlgorithm System.Security.Cryptography.MACTripleDES::mac
	MACAlgorithm_t1963790851 * ___mac_6;
	// System.Boolean System.Security.Cryptography.MACTripleDES::m_disposed
	bool ___m_disposed_7;

public:
	inline static int32_t get_offset_of_tdes_5() { return static_cast<int32_t>(offsetof(MACTripleDES_t1421907319, ___tdes_5)); }
	inline TripleDES_t2260975313 * get_tdes_5() const { return ___tdes_5; }
	inline TripleDES_t2260975313 ** get_address_of_tdes_5() { return &___tdes_5; }
	inline void set_tdes_5(TripleDES_t2260975313 * value)
	{
		___tdes_5 = value;
		Il2CppCodeGenWriteBarrier((&___tdes_5), value);
	}

	inline static int32_t get_offset_of_mac_6() { return static_cast<int32_t>(offsetof(MACTripleDES_t1421907319, ___mac_6)); }
	inline MACAlgorithm_t1963790851 * get_mac_6() const { return ___mac_6; }
	inline MACAlgorithm_t1963790851 ** get_address_of_mac_6() { return &___mac_6; }
	inline void set_mac_6(MACAlgorithm_t1963790851 * value)
	{
		___mac_6 = value;
		Il2CppCodeGenWriteBarrier((&___mac_6), value);
	}

	inline static int32_t get_offset_of_m_disposed_7() { return static_cast<int32_t>(offsetof(MACTripleDES_t1421907319, ___m_disposed_7)); }
	inline bool get_m_disposed_7() const { return ___m_disposed_7; }
	inline bool* get_address_of_m_disposed_7() { return &___m_disposed_7; }
	inline void set_m_disposed_7(bool value)
	{
		___m_disposed_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MACTRIPLEDES_T1421907319_H
#ifndef PADDINGMODE_T2371064963_H
#define PADDINGMODE_T2371064963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t2371064963 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PaddingMode_t2371064963, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PADDINGMODE_T2371064963_H
#ifndef RIPEMD160MANAGED_T2738948607_H
#define RIPEMD160MANAGED_T2738948607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RIPEMD160Managed
struct  RIPEMD160Managed_t2738948607  : public RIPEMD160_t3430000695
{
public:
	// System.Byte[] System.Security.Cryptography.RIPEMD160Managed::_ProcessingBuffer
	ByteU5BU5D_t317375469* ____ProcessingBuffer_4;
	// System.UInt32[] System.Security.Cryptography.RIPEMD160Managed::_X
	UInt32U5BU5D_t1435100350* ____X_5;
	// System.UInt32[] System.Security.Cryptography.RIPEMD160Managed::_HashValue
	UInt32U5BU5D_t1435100350* ____HashValue_6;
	// System.UInt64 System.Security.Cryptography.RIPEMD160Managed::_Length
	uint64_t ____Length_7;
	// System.Int32 System.Security.Cryptography.RIPEMD160Managed::_ProcessingBufferCount
	int32_t ____ProcessingBufferCount_8;

public:
	inline static int32_t get_offset_of__ProcessingBuffer_4() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t2738948607, ____ProcessingBuffer_4)); }
	inline ByteU5BU5D_t317375469* get__ProcessingBuffer_4() const { return ____ProcessingBuffer_4; }
	inline ByteU5BU5D_t317375469** get_address_of__ProcessingBuffer_4() { return &____ProcessingBuffer_4; }
	inline void set__ProcessingBuffer_4(ByteU5BU5D_t317375469* value)
	{
		____ProcessingBuffer_4 = value;
		Il2CppCodeGenWriteBarrier((&____ProcessingBuffer_4), value);
	}

	inline static int32_t get_offset_of__X_5() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t2738948607, ____X_5)); }
	inline UInt32U5BU5D_t1435100350* get__X_5() const { return ____X_5; }
	inline UInt32U5BU5D_t1435100350** get_address_of__X_5() { return &____X_5; }
	inline void set__X_5(UInt32U5BU5D_t1435100350* value)
	{
		____X_5 = value;
		Il2CppCodeGenWriteBarrier((&____X_5), value);
	}

	inline static int32_t get_offset_of__HashValue_6() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t2738948607, ____HashValue_6)); }
	inline UInt32U5BU5D_t1435100350* get__HashValue_6() const { return ____HashValue_6; }
	inline UInt32U5BU5D_t1435100350** get_address_of__HashValue_6() { return &____HashValue_6; }
	inline void set__HashValue_6(UInt32U5BU5D_t1435100350* value)
	{
		____HashValue_6 = value;
		Il2CppCodeGenWriteBarrier((&____HashValue_6), value);
	}

	inline static int32_t get_offset_of__Length_7() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t2738948607, ____Length_7)); }
	inline uint64_t get__Length_7() const { return ____Length_7; }
	inline uint64_t* get_address_of__Length_7() { return &____Length_7; }
	inline void set__Length_7(uint64_t value)
	{
		____Length_7 = value;
	}

	inline static int32_t get_offset_of__ProcessingBufferCount_8() { return static_cast<int32_t>(offsetof(RIPEMD160Managed_t2738948607, ____ProcessingBufferCount_8)); }
	inline int32_t get__ProcessingBufferCount_8() const { return ____ProcessingBufferCount_8; }
	inline int32_t* get_address_of__ProcessingBufferCount_8() { return &____ProcessingBufferCount_8; }
	inline void set__ProcessingBufferCount_8(int32_t value)
	{
		____ProcessingBufferCount_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIPEMD160MANAGED_T2738948607_H
#ifndef RNGCRYPTOSERVICEPROVIDER_T1754971555_H
#define RNGCRYPTOSERVICEPROVIDER_T1754971555_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RNGCryptoServiceProvider
struct  RNGCryptoServiceProvider_t1754971555  : public RandomNumberGenerator_t3143434466
{
public:
	// System.IntPtr System.Security.Cryptography.RNGCryptoServiceProvider::_handle
	IntPtr_t ____handle_1;

public:
	inline static int32_t get_offset_of__handle_1() { return static_cast<int32_t>(offsetof(RNGCryptoServiceProvider_t1754971555, ____handle_1)); }
	inline IntPtr_t get__handle_1() const { return ____handle_1; }
	inline IntPtr_t* get_address_of__handle_1() { return &____handle_1; }
	inline void set__handle_1(IntPtr_t value)
	{
		____handle_1 = value;
	}
};

struct RNGCryptoServiceProvider_t1754971555_StaticFields
{
public:
	// System.Object System.Security.Cryptography.RNGCryptoServiceProvider::_lock
	RuntimeObject * ____lock_0;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(RNGCryptoServiceProvider_t1754971555_StaticFields, ____lock_0)); }
	inline RuntimeObject * get__lock_0() const { return ____lock_0; }
	inline RuntimeObject ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(RuntimeObject * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier((&____lock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RNGCRYPTOSERVICEPROVIDER_T1754971555_H
#ifndef RSACRYPTOSERVICEPROVIDER_T3266812275_H
#define RSACRYPTOSERVICEPROVIDER_T3266812275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSACryptoServiceProvider
struct  RSACryptoServiceProvider_t3266812275  : public RSA_t1050577473
{
public:
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.RSACryptoServiceProvider::store
	KeyPairPersistence_t3212350790 * ___store_2;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persistKey
	bool ___persistKey_3;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persisted
	bool ___persisted_4;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_5;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::m_disposed
	bool ___m_disposed_6;
	// Mono.Security.Cryptography.RSAManaged System.Security.Cryptography.RSACryptoServiceProvider::rsa
	RSAManaged_t421323775 * ___rsa_7;

public:
	inline static int32_t get_offset_of_store_2() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t3266812275, ___store_2)); }
	inline KeyPairPersistence_t3212350790 * get_store_2() const { return ___store_2; }
	inline KeyPairPersistence_t3212350790 ** get_address_of_store_2() { return &___store_2; }
	inline void set_store_2(KeyPairPersistence_t3212350790 * value)
	{
		___store_2 = value;
		Il2CppCodeGenWriteBarrier((&___store_2), value);
	}

	inline static int32_t get_offset_of_persistKey_3() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t3266812275, ___persistKey_3)); }
	inline bool get_persistKey_3() const { return ___persistKey_3; }
	inline bool* get_address_of_persistKey_3() { return &___persistKey_3; }
	inline void set_persistKey_3(bool value)
	{
		___persistKey_3 = value;
	}

	inline static int32_t get_offset_of_persisted_4() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t3266812275, ___persisted_4)); }
	inline bool get_persisted_4() const { return ___persisted_4; }
	inline bool* get_address_of_persisted_4() { return &___persisted_4; }
	inline void set_persisted_4(bool value)
	{
		___persisted_4 = value;
	}

	inline static int32_t get_offset_of_privateKeyExportable_5() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t3266812275, ___privateKeyExportable_5)); }
	inline bool get_privateKeyExportable_5() const { return ___privateKeyExportable_5; }
	inline bool* get_address_of_privateKeyExportable_5() { return &___privateKeyExportable_5; }
	inline void set_privateKeyExportable_5(bool value)
	{
		___privateKeyExportable_5 = value;
	}

	inline static int32_t get_offset_of_m_disposed_6() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t3266812275, ___m_disposed_6)); }
	inline bool get_m_disposed_6() const { return ___m_disposed_6; }
	inline bool* get_address_of_m_disposed_6() { return &___m_disposed_6; }
	inline void set_m_disposed_6(bool value)
	{
		___m_disposed_6 = value;
	}

	inline static int32_t get_offset_of_rsa_7() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t3266812275, ___rsa_7)); }
	inline RSAManaged_t421323775 * get_rsa_7() const { return ___rsa_7; }
	inline RSAManaged_t421323775 ** get_address_of_rsa_7() { return &___rsa_7; }
	inline void set_rsa_7(RSAManaged_t421323775 * value)
	{
		___rsa_7 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_7), value);
	}
};

struct RSACryptoServiceProvider_t3266812275_StaticFields
{
public:
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::useMachineKeyStore
	bool ___useMachineKeyStore_8;

public:
	inline static int32_t get_offset_of_useMachineKeyStore_8() { return static_cast<int32_t>(offsetof(RSACryptoServiceProvider_t3266812275_StaticFields, ___useMachineKeyStore_8)); }
	inline bool get_useMachineKeyStore_8() const { return ___useMachineKeyStore_8; }
	inline bool* get_address_of_useMachineKeyStore_8() { return &___useMachineKeyStore_8; }
	inline void set_useMachineKeyStore_8(bool value)
	{
		___useMachineKeyStore_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSACRYPTOSERVICEPROVIDER_T3266812275_H
#ifndef CIPHERMODE_T2635436927_H
#define CIPHERMODE_T2635436927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t2635436927 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CipherMode_t2635436927, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CIPHERMODE_T2635436927_H
#ifndef SHA1CRYPTOSERVICEPROVIDER_T2816435419_H
#define SHA1CRYPTOSERVICEPROVIDER_T2816435419_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1CryptoServiceProvider
struct  SHA1CryptoServiceProvider_t2816435419  : public SHA1_t821729488
{
public:
	// System.Security.Cryptography.SHA1Internal System.Security.Cryptography.SHA1CryptoServiceProvider::sha
	SHA1Internal_t2955367709 * ___sha_4;

public:
	inline static int32_t get_offset_of_sha_4() { return static_cast<int32_t>(offsetof(SHA1CryptoServiceProvider_t2816435419, ___sha_4)); }
	inline SHA1Internal_t2955367709 * get_sha_4() const { return ___sha_4; }
	inline SHA1Internal_t2955367709 ** get_address_of_sha_4() { return &___sha_4; }
	inline void set_sha_4(SHA1Internal_t2955367709 * value)
	{
		___sha_4 = value;
		Il2CppCodeGenWriteBarrier((&___sha_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1CRYPTOSERVICEPROVIDER_T2816435419_H
#ifndef SHA1MANAGED_T2855901420_H
#define SHA1MANAGED_T2855901420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1Managed
struct  SHA1Managed_t2855901420  : public SHA1_t821729488
{
public:
	// System.Security.Cryptography.SHA1Internal System.Security.Cryptography.SHA1Managed::sha
	SHA1Internal_t2955367709 * ___sha_4;

public:
	inline static int32_t get_offset_of_sha_4() { return static_cast<int32_t>(offsetof(SHA1Managed_t2855901420, ___sha_4)); }
	inline SHA1Internal_t2955367709 * get_sha_4() const { return ___sha_4; }
	inline SHA1Internal_t2955367709 ** get_address_of_sha_4() { return &___sha_4; }
	inline void set_sha_4(SHA1Internal_t2955367709 * value)
	{
		___sha_4 = value;
		Il2CppCodeGenWriteBarrier((&___sha_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1MANAGED_T2855901420_H
#ifndef SHA512MANAGED_T40693926_H
#define SHA512MANAGED_T40693926_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA512Managed
struct  SHA512Managed_t40693926  : public SHA512_t3936875870
{
public:
	// System.Byte[] System.Security.Cryptography.SHA512Managed::xBuf
	ByteU5BU5D_t317375469* ___xBuf_4;
	// System.Int32 System.Security.Cryptography.SHA512Managed::xBufOff
	int32_t ___xBufOff_5;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::byteCount1
	uint64_t ___byteCount1_6;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::byteCount2
	uint64_t ___byteCount2_7;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H1
	uint64_t ___H1_8;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H2
	uint64_t ___H2_9;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H3
	uint64_t ___H3_10;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H4
	uint64_t ___H4_11;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H5
	uint64_t ___H5_12;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H6
	uint64_t ___H6_13;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H7
	uint64_t ___H7_14;
	// System.UInt64 System.Security.Cryptography.SHA512Managed::H8
	uint64_t ___H8_15;
	// System.UInt64[] System.Security.Cryptography.SHA512Managed::W
	UInt64U5BU5D_t1494213460* ___W_16;
	// System.Int32 System.Security.Cryptography.SHA512Managed::wOff
	int32_t ___wOff_17;

public:
	inline static int32_t get_offset_of_xBuf_4() { return static_cast<int32_t>(offsetof(SHA512Managed_t40693926, ___xBuf_4)); }
	inline ByteU5BU5D_t317375469* get_xBuf_4() const { return ___xBuf_4; }
	inline ByteU5BU5D_t317375469** get_address_of_xBuf_4() { return &___xBuf_4; }
	inline void set_xBuf_4(ByteU5BU5D_t317375469* value)
	{
		___xBuf_4 = value;
		Il2CppCodeGenWriteBarrier((&___xBuf_4), value);
	}

	inline static int32_t get_offset_of_xBufOff_5() { return static_cast<int32_t>(offsetof(SHA512Managed_t40693926, ___xBufOff_5)); }
	inline int32_t get_xBufOff_5() const { return ___xBufOff_5; }
	inline int32_t* get_address_of_xBufOff_5() { return &___xBufOff_5; }
	inline void set_xBufOff_5(int32_t value)
	{
		___xBufOff_5 = value;
	}

	inline static int32_t get_offset_of_byteCount1_6() { return static_cast<int32_t>(offsetof(SHA512Managed_t40693926, ___byteCount1_6)); }
	inline uint64_t get_byteCount1_6() const { return ___byteCount1_6; }
	inline uint64_t* get_address_of_byteCount1_6() { return &___byteCount1_6; }
	inline void set_byteCount1_6(uint64_t value)
	{
		___byteCount1_6 = value;
	}

	inline static int32_t get_offset_of_byteCount2_7() { return static_cast<int32_t>(offsetof(SHA512Managed_t40693926, ___byteCount2_7)); }
	inline uint64_t get_byteCount2_7() const { return ___byteCount2_7; }
	inline uint64_t* get_address_of_byteCount2_7() { return &___byteCount2_7; }
	inline void set_byteCount2_7(uint64_t value)
	{
		___byteCount2_7 = value;
	}

	inline static int32_t get_offset_of_H1_8() { return static_cast<int32_t>(offsetof(SHA512Managed_t40693926, ___H1_8)); }
	inline uint64_t get_H1_8() const { return ___H1_8; }
	inline uint64_t* get_address_of_H1_8() { return &___H1_8; }
	inline void set_H1_8(uint64_t value)
	{
		___H1_8 = value;
	}

	inline static int32_t get_offset_of_H2_9() { return static_cast<int32_t>(offsetof(SHA512Managed_t40693926, ___H2_9)); }
	inline uint64_t get_H2_9() const { return ___H2_9; }
	inline uint64_t* get_address_of_H2_9() { return &___H2_9; }
	inline void set_H2_9(uint64_t value)
	{
		___H2_9 = value;
	}

	inline static int32_t get_offset_of_H3_10() { return static_cast<int32_t>(offsetof(SHA512Managed_t40693926, ___H3_10)); }
	inline uint64_t get_H3_10() const { return ___H3_10; }
	inline uint64_t* get_address_of_H3_10() { return &___H3_10; }
	inline void set_H3_10(uint64_t value)
	{
		___H3_10 = value;
	}

	inline static int32_t get_offset_of_H4_11() { return static_cast<int32_t>(offsetof(SHA512Managed_t40693926, ___H4_11)); }
	inline uint64_t get_H4_11() const { return ___H4_11; }
	inline uint64_t* get_address_of_H4_11() { return &___H4_11; }
	inline void set_H4_11(uint64_t value)
	{
		___H4_11 = value;
	}

	inline static int32_t get_offset_of_H5_12() { return static_cast<int32_t>(offsetof(SHA512Managed_t40693926, ___H5_12)); }
	inline uint64_t get_H5_12() const { return ___H5_12; }
	inline uint64_t* get_address_of_H5_12() { return &___H5_12; }
	inline void set_H5_12(uint64_t value)
	{
		___H5_12 = value;
	}

	inline static int32_t get_offset_of_H6_13() { return static_cast<int32_t>(offsetof(SHA512Managed_t40693926, ___H6_13)); }
	inline uint64_t get_H6_13() const { return ___H6_13; }
	inline uint64_t* get_address_of_H6_13() { return &___H6_13; }
	inline void set_H6_13(uint64_t value)
	{
		___H6_13 = value;
	}

	inline static int32_t get_offset_of_H7_14() { return static_cast<int32_t>(offsetof(SHA512Managed_t40693926, ___H7_14)); }
	inline uint64_t get_H7_14() const { return ___H7_14; }
	inline uint64_t* get_address_of_H7_14() { return &___H7_14; }
	inline void set_H7_14(uint64_t value)
	{
		___H7_14 = value;
	}

	inline static int32_t get_offset_of_H8_15() { return static_cast<int32_t>(offsetof(SHA512Managed_t40693926, ___H8_15)); }
	inline uint64_t get_H8_15() const { return ___H8_15; }
	inline uint64_t* get_address_of_H8_15() { return &___H8_15; }
	inline void set_H8_15(uint64_t value)
	{
		___H8_15 = value;
	}

	inline static int32_t get_offset_of_W_16() { return static_cast<int32_t>(offsetof(SHA512Managed_t40693926, ___W_16)); }
	inline UInt64U5BU5D_t1494213460* get_W_16() const { return ___W_16; }
	inline UInt64U5BU5D_t1494213460** get_address_of_W_16() { return &___W_16; }
	inline void set_W_16(UInt64U5BU5D_t1494213460* value)
	{
		___W_16 = value;
		Il2CppCodeGenWriteBarrier((&___W_16), value);
	}

	inline static int32_t get_offset_of_wOff_17() { return static_cast<int32_t>(offsetof(SHA512Managed_t40693926, ___wOff_17)); }
	inline int32_t get_wOff_17() const { return ___wOff_17; }
	inline int32_t* get_address_of_wOff_17() { return &___wOff_17; }
	inline void set_wOff_17(int32_t value)
	{
		___wOff_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA512MANAGED_T40693926_H
#ifndef SHA384MANAGED_T391678993_H
#define SHA384MANAGED_T391678993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA384Managed
struct  SHA384Managed_t391678993  : public SHA384_t3926899676
{
public:
	// System.Byte[] System.Security.Cryptography.SHA384Managed::xBuf
	ByteU5BU5D_t317375469* ___xBuf_4;
	// System.Int32 System.Security.Cryptography.SHA384Managed::xBufOff
	int32_t ___xBufOff_5;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::byteCount1
	uint64_t ___byteCount1_6;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::byteCount2
	uint64_t ___byteCount2_7;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H1
	uint64_t ___H1_8;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H2
	uint64_t ___H2_9;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H3
	uint64_t ___H3_10;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H4
	uint64_t ___H4_11;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H5
	uint64_t ___H5_12;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H6
	uint64_t ___H6_13;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H7
	uint64_t ___H7_14;
	// System.UInt64 System.Security.Cryptography.SHA384Managed::H8
	uint64_t ___H8_15;
	// System.UInt64[] System.Security.Cryptography.SHA384Managed::W
	UInt64U5BU5D_t1494213460* ___W_16;
	// System.Int32 System.Security.Cryptography.SHA384Managed::wOff
	int32_t ___wOff_17;

public:
	inline static int32_t get_offset_of_xBuf_4() { return static_cast<int32_t>(offsetof(SHA384Managed_t391678993, ___xBuf_4)); }
	inline ByteU5BU5D_t317375469* get_xBuf_4() const { return ___xBuf_4; }
	inline ByteU5BU5D_t317375469** get_address_of_xBuf_4() { return &___xBuf_4; }
	inline void set_xBuf_4(ByteU5BU5D_t317375469* value)
	{
		___xBuf_4 = value;
		Il2CppCodeGenWriteBarrier((&___xBuf_4), value);
	}

	inline static int32_t get_offset_of_xBufOff_5() { return static_cast<int32_t>(offsetof(SHA384Managed_t391678993, ___xBufOff_5)); }
	inline int32_t get_xBufOff_5() const { return ___xBufOff_5; }
	inline int32_t* get_address_of_xBufOff_5() { return &___xBufOff_5; }
	inline void set_xBufOff_5(int32_t value)
	{
		___xBufOff_5 = value;
	}

	inline static int32_t get_offset_of_byteCount1_6() { return static_cast<int32_t>(offsetof(SHA384Managed_t391678993, ___byteCount1_6)); }
	inline uint64_t get_byteCount1_6() const { return ___byteCount1_6; }
	inline uint64_t* get_address_of_byteCount1_6() { return &___byteCount1_6; }
	inline void set_byteCount1_6(uint64_t value)
	{
		___byteCount1_6 = value;
	}

	inline static int32_t get_offset_of_byteCount2_7() { return static_cast<int32_t>(offsetof(SHA384Managed_t391678993, ___byteCount2_7)); }
	inline uint64_t get_byteCount2_7() const { return ___byteCount2_7; }
	inline uint64_t* get_address_of_byteCount2_7() { return &___byteCount2_7; }
	inline void set_byteCount2_7(uint64_t value)
	{
		___byteCount2_7 = value;
	}

	inline static int32_t get_offset_of_H1_8() { return static_cast<int32_t>(offsetof(SHA384Managed_t391678993, ___H1_8)); }
	inline uint64_t get_H1_8() const { return ___H1_8; }
	inline uint64_t* get_address_of_H1_8() { return &___H1_8; }
	inline void set_H1_8(uint64_t value)
	{
		___H1_8 = value;
	}

	inline static int32_t get_offset_of_H2_9() { return static_cast<int32_t>(offsetof(SHA384Managed_t391678993, ___H2_9)); }
	inline uint64_t get_H2_9() const { return ___H2_9; }
	inline uint64_t* get_address_of_H2_9() { return &___H2_9; }
	inline void set_H2_9(uint64_t value)
	{
		___H2_9 = value;
	}

	inline static int32_t get_offset_of_H3_10() { return static_cast<int32_t>(offsetof(SHA384Managed_t391678993, ___H3_10)); }
	inline uint64_t get_H3_10() const { return ___H3_10; }
	inline uint64_t* get_address_of_H3_10() { return &___H3_10; }
	inline void set_H3_10(uint64_t value)
	{
		___H3_10 = value;
	}

	inline static int32_t get_offset_of_H4_11() { return static_cast<int32_t>(offsetof(SHA384Managed_t391678993, ___H4_11)); }
	inline uint64_t get_H4_11() const { return ___H4_11; }
	inline uint64_t* get_address_of_H4_11() { return &___H4_11; }
	inline void set_H4_11(uint64_t value)
	{
		___H4_11 = value;
	}

	inline static int32_t get_offset_of_H5_12() { return static_cast<int32_t>(offsetof(SHA384Managed_t391678993, ___H5_12)); }
	inline uint64_t get_H5_12() const { return ___H5_12; }
	inline uint64_t* get_address_of_H5_12() { return &___H5_12; }
	inline void set_H5_12(uint64_t value)
	{
		___H5_12 = value;
	}

	inline static int32_t get_offset_of_H6_13() { return static_cast<int32_t>(offsetof(SHA384Managed_t391678993, ___H6_13)); }
	inline uint64_t get_H6_13() const { return ___H6_13; }
	inline uint64_t* get_address_of_H6_13() { return &___H6_13; }
	inline void set_H6_13(uint64_t value)
	{
		___H6_13 = value;
	}

	inline static int32_t get_offset_of_H7_14() { return static_cast<int32_t>(offsetof(SHA384Managed_t391678993, ___H7_14)); }
	inline uint64_t get_H7_14() const { return ___H7_14; }
	inline uint64_t* get_address_of_H7_14() { return &___H7_14; }
	inline void set_H7_14(uint64_t value)
	{
		___H7_14 = value;
	}

	inline static int32_t get_offset_of_H8_15() { return static_cast<int32_t>(offsetof(SHA384Managed_t391678993, ___H8_15)); }
	inline uint64_t get_H8_15() const { return ___H8_15; }
	inline uint64_t* get_address_of_H8_15() { return &___H8_15; }
	inline void set_H8_15(uint64_t value)
	{
		___H8_15 = value;
	}

	inline static int32_t get_offset_of_W_16() { return static_cast<int32_t>(offsetof(SHA384Managed_t391678993, ___W_16)); }
	inline UInt64U5BU5D_t1494213460* get_W_16() const { return ___W_16; }
	inline UInt64U5BU5D_t1494213460** get_address_of_W_16() { return &___W_16; }
	inline void set_W_16(UInt64U5BU5D_t1494213460* value)
	{
		___W_16 = value;
		Il2CppCodeGenWriteBarrier((&___W_16), value);
	}

	inline static int32_t get_offset_of_wOff_17() { return static_cast<int32_t>(offsetof(SHA384Managed_t391678993, ___wOff_17)); }
	inline int32_t get_wOff_17() const { return ___wOff_17; }
	inline int32_t* get_address_of_wOff_17() { return &___wOff_17; }
	inline void set_wOff_17(int32_t value)
	{
		___wOff_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA384MANAGED_T391678993_H
#ifndef WINDOWSIDENTITY_T676169376_H
#define WINDOWSIDENTITY_T676169376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Principal.WindowsIdentity
struct  WindowsIdentity_t676169376  : public RuntimeObject
{
public:
	// System.IntPtr System.Security.Principal.WindowsIdentity::_token
	IntPtr_t ____token_0;
	// System.String System.Security.Principal.WindowsIdentity::_type
	String_t* ____type_1;
	// System.Security.Principal.WindowsAccountType System.Security.Principal.WindowsIdentity::_account
	int32_t ____account_2;
	// System.Boolean System.Security.Principal.WindowsIdentity::_authenticated
	bool ____authenticated_3;
	// System.String System.Security.Principal.WindowsIdentity::_name
	String_t* ____name_4;
	// System.Runtime.Serialization.SerializationInfo System.Security.Principal.WindowsIdentity::_info
	SerializationInfo_t1901961291 * ____info_5;

public:
	inline static int32_t get_offset_of__token_0() { return static_cast<int32_t>(offsetof(WindowsIdentity_t676169376, ____token_0)); }
	inline IntPtr_t get__token_0() const { return ____token_0; }
	inline IntPtr_t* get_address_of__token_0() { return &____token_0; }
	inline void set__token_0(IntPtr_t value)
	{
		____token_0 = value;
	}

	inline static int32_t get_offset_of__type_1() { return static_cast<int32_t>(offsetof(WindowsIdentity_t676169376, ____type_1)); }
	inline String_t* get__type_1() const { return ____type_1; }
	inline String_t** get_address_of__type_1() { return &____type_1; }
	inline void set__type_1(String_t* value)
	{
		____type_1 = value;
		Il2CppCodeGenWriteBarrier((&____type_1), value);
	}

	inline static int32_t get_offset_of__account_2() { return static_cast<int32_t>(offsetof(WindowsIdentity_t676169376, ____account_2)); }
	inline int32_t get__account_2() const { return ____account_2; }
	inline int32_t* get_address_of__account_2() { return &____account_2; }
	inline void set__account_2(int32_t value)
	{
		____account_2 = value;
	}

	inline static int32_t get_offset_of__authenticated_3() { return static_cast<int32_t>(offsetof(WindowsIdentity_t676169376, ____authenticated_3)); }
	inline bool get__authenticated_3() const { return ____authenticated_3; }
	inline bool* get_address_of__authenticated_3() { return &____authenticated_3; }
	inline void set__authenticated_3(bool value)
	{
		____authenticated_3 = value;
	}

	inline static int32_t get_offset_of__name_4() { return static_cast<int32_t>(offsetof(WindowsIdentity_t676169376, ____name_4)); }
	inline String_t* get__name_4() const { return ____name_4; }
	inline String_t** get_address_of__name_4() { return &____name_4; }
	inline void set__name_4(String_t* value)
	{
		____name_4 = value;
		Il2CppCodeGenWriteBarrier((&____name_4), value);
	}

	inline static int32_t get_offset_of__info_5() { return static_cast<int32_t>(offsetof(WindowsIdentity_t676169376, ____info_5)); }
	inline SerializationInfo_t1901961291 * get__info_5() const { return ____info_5; }
	inline SerializationInfo_t1901961291 ** get_address_of__info_5() { return &____info_5; }
	inline void set__info_5(SerializationInfo_t1901961291 * value)
	{
		____info_5 = value;
		Il2CppCodeGenWriteBarrier((&____info_5), value);
	}
};

struct WindowsIdentity_t676169376_StaticFields
{
public:
	// System.IntPtr System.Security.Principal.WindowsIdentity::invalidWindows
	IntPtr_t ___invalidWindows_6;

public:
	inline static int32_t get_offset_of_invalidWindows_6() { return static_cast<int32_t>(offsetof(WindowsIdentity_t676169376_StaticFields, ___invalidWindows_6)); }
	inline IntPtr_t get_invalidWindows_6() const { return ___invalidWindows_6; }
	inline IntPtr_t* get_address_of_invalidWindows_6() { return &___invalidWindows_6; }
	inline void set_invalidWindows_6(IntPtr_t value)
	{
		___invalidWindows_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSIDENTITY_T676169376_H
#ifndef SECURITYPERMISSIONATTRIBUTE_T1327626412_H
#define SECURITYPERMISSIONATTRIBUTE_T1327626412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermissionAttribute
struct  SecurityPermissionAttribute_t1327626412  : public CodeAccessSecurityAttribute_t972729232
{
public:
	// System.Security.Permissions.SecurityPermissionFlag System.Security.Permissions.SecurityPermissionAttribute::m_Flags
	int32_t ___m_Flags_0;

public:
	inline static int32_t get_offset_of_m_Flags_0() { return static_cast<int32_t>(offsetof(SecurityPermissionAttribute_t1327626412, ___m_Flags_0)); }
	inline int32_t get_m_Flags_0() const { return ___m_Flags_0; }
	inline int32_t* get_address_of_m_Flags_0() { return &___m_Flags_0; }
	inline void set_m_Flags_0(int32_t value)
	{
		___m_Flags_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPERMISSIONATTRIBUTE_T1327626412_H
#ifndef CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_T3601168462_H
#define CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_T3601168462_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptographicUnexpectedOperationException
struct  CryptographicUnexpectedOperationException_t3601168462  : public CryptographicException_t3712973458
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_T3601168462_H
#ifndef CSPPARAMETERS_T3649395015_H
#define CSPPARAMETERS_T3649395015_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CspParameters
struct  CspParameters_t3649395015  : public RuntimeObject
{
public:
	// System.Security.Cryptography.CspProviderFlags System.Security.Cryptography.CspParameters::_Flags
	int32_t ____Flags_0;
	// System.String System.Security.Cryptography.CspParameters::KeyContainerName
	String_t* ___KeyContainerName_1;
	// System.Int32 System.Security.Cryptography.CspParameters::KeyNumber
	int32_t ___KeyNumber_2;
	// System.String System.Security.Cryptography.CspParameters::ProviderName
	String_t* ___ProviderName_3;
	// System.Int32 System.Security.Cryptography.CspParameters::ProviderType
	int32_t ___ProviderType_4;

public:
	inline static int32_t get_offset_of__Flags_0() { return static_cast<int32_t>(offsetof(CspParameters_t3649395015, ____Flags_0)); }
	inline int32_t get__Flags_0() const { return ____Flags_0; }
	inline int32_t* get_address_of__Flags_0() { return &____Flags_0; }
	inline void set__Flags_0(int32_t value)
	{
		____Flags_0 = value;
	}

	inline static int32_t get_offset_of_KeyContainerName_1() { return static_cast<int32_t>(offsetof(CspParameters_t3649395015, ___KeyContainerName_1)); }
	inline String_t* get_KeyContainerName_1() const { return ___KeyContainerName_1; }
	inline String_t** get_address_of_KeyContainerName_1() { return &___KeyContainerName_1; }
	inline void set_KeyContainerName_1(String_t* value)
	{
		___KeyContainerName_1 = value;
		Il2CppCodeGenWriteBarrier((&___KeyContainerName_1), value);
	}

	inline static int32_t get_offset_of_KeyNumber_2() { return static_cast<int32_t>(offsetof(CspParameters_t3649395015, ___KeyNumber_2)); }
	inline int32_t get_KeyNumber_2() const { return ___KeyNumber_2; }
	inline int32_t* get_address_of_KeyNumber_2() { return &___KeyNumber_2; }
	inline void set_KeyNumber_2(int32_t value)
	{
		___KeyNumber_2 = value;
	}

	inline static int32_t get_offset_of_ProviderName_3() { return static_cast<int32_t>(offsetof(CspParameters_t3649395015, ___ProviderName_3)); }
	inline String_t* get_ProviderName_3() const { return ___ProviderName_3; }
	inline String_t** get_address_of_ProviderName_3() { return &___ProviderName_3; }
	inline void set_ProviderName_3(String_t* value)
	{
		___ProviderName_3 = value;
		Il2CppCodeGenWriteBarrier((&___ProviderName_3), value);
	}

	inline static int32_t get_offset_of_ProviderType_4() { return static_cast<int32_t>(offsetof(CspParameters_t3649395015, ___ProviderType_4)); }
	inline int32_t get_ProviderType_4() const { return ___ProviderType_4; }
	inline int32_t* get_address_of_ProviderType_4() { return &___ProviderType_4; }
	inline void set_ProviderType_4(int32_t value)
	{
		___ProviderType_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSPPARAMETERS_T3649395015_H
#ifndef SYMMETRICALGORITHM_T704442840_H
#define SYMMETRICALGORITHM_T704442840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t704442840  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_t317375469* ___IVValue_1;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_t317375469* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t888819165* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t888819165* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
	// System.Boolean System.Security.Cryptography.SymmetricAlgorithm::m_disposed
	bool ___m_disposed_9;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t704442840, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_IVValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t704442840, ___IVValue_1)); }
	inline ByteU5BU5D_t317375469* get_IVValue_1() const { return ___IVValue_1; }
	inline ByteU5BU5D_t317375469** get_address_of_IVValue_1() { return &___IVValue_1; }
	inline void set_IVValue_1(ByteU5BU5D_t317375469* value)
	{
		___IVValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___IVValue_1), value);
	}

	inline static int32_t get_offset_of_KeySizeValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t704442840, ___KeySizeValue_2)); }
	inline int32_t get_KeySizeValue_2() const { return ___KeySizeValue_2; }
	inline int32_t* get_address_of_KeySizeValue_2() { return &___KeySizeValue_2; }
	inline void set_KeySizeValue_2(int32_t value)
	{
		___KeySizeValue_2 = value;
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t704442840, ___KeyValue_3)); }
	inline ByteU5BU5D_t317375469* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_t317375469** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_t317375469* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_3), value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t704442840, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t888819165* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t888819165** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t888819165* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___LegalBlockSizesValue_4), value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t704442840, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t888819165* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t888819165** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t888819165* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_5), value);
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t704442840, ___FeedbackSizeValue_6)); }
	inline int32_t get_FeedbackSizeValue_6() const { return ___FeedbackSizeValue_6; }
	inline int32_t* get_address_of_FeedbackSizeValue_6() { return &___FeedbackSizeValue_6; }
	inline void set_FeedbackSizeValue_6(int32_t value)
	{
		___FeedbackSizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t704442840, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t704442840, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t704442840, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICALGORITHM_T704442840_H
#ifndef HMACMD5_T4053788204_H
#define HMACMD5_T4053788204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACMD5
struct  HMACMD5_t4053788204  : public HMAC_t1292688981
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACMD5_T4053788204_H
#ifndef HMACRIPEMD160_T2688082484_H
#define HMACRIPEMD160_T2688082484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACRIPEMD160
struct  HMACRIPEMD160_t2688082484  : public HMAC_t1292688981
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACRIPEMD160_T2688082484_H
#ifndef HMACSHA1_T3480857901_H
#define HMACSHA1_T3480857901_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA1
struct  HMACSHA1_t3480857901  : public HMAC_t1292688981
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA1_T3480857901_H
#ifndef HMACSHA256_T3508468392_H
#define HMACSHA256_T3508468392_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA256
struct  HMACSHA256_t3508468392  : public HMAC_t1292688981
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA256_T3508468392_H
#ifndef RUNTIMESECURITYFRAME_T1630505945_H
#define RUNTIMESECURITYFRAME_T1630505945_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.RuntimeSecurityFrame
struct  RuntimeSecurityFrame_t1630505945  : public RuntimeObject
{
public:
	// System.AppDomain System.Security.RuntimeSecurityFrame::domain
	AppDomain_t2294927346 * ___domain_0;
	// System.Reflection.MethodInfo System.Security.RuntimeSecurityFrame::method
	MethodInfo_t * ___method_1;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::assert
	RuntimeDeclSecurityEntry_t2549996473  ___assert_2;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::deny
	RuntimeDeclSecurityEntry_t2549996473  ___deny_3;
	// System.Security.RuntimeDeclSecurityEntry System.Security.RuntimeSecurityFrame::permitonly
	RuntimeDeclSecurityEntry_t2549996473  ___permitonly_4;

public:
	inline static int32_t get_offset_of_domain_0() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t1630505945, ___domain_0)); }
	inline AppDomain_t2294927346 * get_domain_0() const { return ___domain_0; }
	inline AppDomain_t2294927346 ** get_address_of_domain_0() { return &___domain_0; }
	inline void set_domain_0(AppDomain_t2294927346 * value)
	{
		___domain_0 = value;
		Il2CppCodeGenWriteBarrier((&___domain_0), value);
	}

	inline static int32_t get_offset_of_method_1() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t1630505945, ___method_1)); }
	inline MethodInfo_t * get_method_1() const { return ___method_1; }
	inline MethodInfo_t ** get_address_of_method_1() { return &___method_1; }
	inline void set_method_1(MethodInfo_t * value)
	{
		___method_1 = value;
		Il2CppCodeGenWriteBarrier((&___method_1), value);
	}

	inline static int32_t get_offset_of_assert_2() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t1630505945, ___assert_2)); }
	inline RuntimeDeclSecurityEntry_t2549996473  get_assert_2() const { return ___assert_2; }
	inline RuntimeDeclSecurityEntry_t2549996473 * get_address_of_assert_2() { return &___assert_2; }
	inline void set_assert_2(RuntimeDeclSecurityEntry_t2549996473  value)
	{
		___assert_2 = value;
	}

	inline static int32_t get_offset_of_deny_3() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t1630505945, ___deny_3)); }
	inline RuntimeDeclSecurityEntry_t2549996473  get_deny_3() const { return ___deny_3; }
	inline RuntimeDeclSecurityEntry_t2549996473 * get_address_of_deny_3() { return &___deny_3; }
	inline void set_deny_3(RuntimeDeclSecurityEntry_t2549996473  value)
	{
		___deny_3 = value;
	}

	inline static int32_t get_offset_of_permitonly_4() { return static_cast<int32_t>(offsetof(RuntimeSecurityFrame_t1630505945, ___permitonly_4)); }
	inline RuntimeDeclSecurityEntry_t2549996473  get_permitonly_4() const { return ___permitonly_4; }
	inline RuntimeDeclSecurityEntry_t2549996473 * get_address_of_permitonly_4() { return &___permitonly_4; }
	inline void set_permitonly_4(RuntimeDeclSecurityEntry_t2549996473  value)
	{
		___permitonly_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMESECURITYFRAME_T1630505945_H
#ifndef HMACSHA384_T5448025_H
#define HMACSHA384_T5448025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA384
struct  HMACSHA384_t5448025  : public HMAC_t1292688981
{
public:
	// System.Boolean System.Security.Cryptography.HMACSHA384::legacy
	bool ___legacy_11;

public:
	inline static int32_t get_offset_of_legacy_11() { return static_cast<int32_t>(offsetof(HMACSHA384_t5448025, ___legacy_11)); }
	inline bool get_legacy_11() const { return ___legacy_11; }
	inline bool* get_address_of_legacy_11() { return &___legacy_11; }
	inline void set_legacy_11(bool value)
	{
		___legacy_11 = value;
	}
};

struct HMACSHA384_t5448025_StaticFields
{
public:
	// System.Boolean System.Security.Cryptography.HMACSHA384::legacy_mode
	bool ___legacy_mode_10;

public:
	inline static int32_t get_offset_of_legacy_mode_10() { return static_cast<int32_t>(offsetof(HMACSHA384_t5448025_StaticFields, ___legacy_mode_10)); }
	inline bool get_legacy_mode_10() const { return ___legacy_mode_10; }
	inline bool* get_address_of_legacy_mode_10() { return &___legacy_mode_10; }
	inline void set_legacy_mode_10(bool value)
	{
		___legacy_mode_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA384_T5448025_H
#ifndef HMACSHA512_T1494271385_H
#define HMACSHA512_T1494271385_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HMACSHA512
struct  HMACSHA512_t1494271385  : public HMAC_t1292688981
{
public:
	// System.Boolean System.Security.Cryptography.HMACSHA512::legacy
	bool ___legacy_11;

public:
	inline static int32_t get_offset_of_legacy_11() { return static_cast<int32_t>(offsetof(HMACSHA512_t1494271385, ___legacy_11)); }
	inline bool get_legacy_11() const { return ___legacy_11; }
	inline bool* get_address_of_legacy_11() { return &___legacy_11; }
	inline void set_legacy_11(bool value)
	{
		___legacy_11 = value;
	}
};

struct HMACSHA512_t1494271385_StaticFields
{
public:
	// System.Boolean System.Security.Cryptography.HMACSHA512::legacy_mode
	bool ___legacy_mode_10;

public:
	inline static int32_t get_offset_of_legacy_mode_10() { return static_cast<int32_t>(offsetof(HMACSHA512_t1494271385_StaticFields, ___legacy_mode_10)); }
	inline bool get_legacy_mode_10() const { return ___legacy_mode_10; }
	inline bool* get_address_of_legacy_mode_10() { return &___legacy_mode_10; }
	inline void set_legacy_mode_10(bool value)
	{
		___legacy_mode_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMACSHA512_T1494271385_H
#ifndef SECURITYCRITICALATTRIBUTE_T3674287780_H
#define SECURITYCRITICALATTRIBUTE_T3674287780_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityCriticalAttribute
struct  SecurityCriticalAttribute_t3674287780  : public Attribute_t2885837796
{
public:
	// System.Security.SecurityCriticalScope System.Security.SecurityCriticalAttribute::_scope
	int32_t ____scope_0;

public:
	inline static int32_t get_offset_of__scope_0() { return static_cast<int32_t>(offsetof(SecurityCriticalAttribute_t3674287780, ____scope_0)); }
	inline int32_t get__scope_0() const { return ____scope_0; }
	inline int32_t* get_address_of__scope_0() { return &____scope_0; }
	inline void set__scope_0(int32_t value)
	{
		____scope_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYCRITICALATTRIBUTE_T3674287780_H
#ifndef SECURITYPERMISSION_T940317633_H
#define SECURITYPERMISSION_T940317633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Permissions.SecurityPermission
struct  SecurityPermission_t940317633  : public CodeAccessPermission_t2613798098
{
public:
	// System.Security.Permissions.SecurityPermissionFlag System.Security.Permissions.SecurityPermission::flags
	int32_t ___flags_0;

public:
	inline static int32_t get_offset_of_flags_0() { return static_cast<int32_t>(offsetof(SecurityPermission_t940317633, ___flags_0)); }
	inline int32_t get_flags_0() const { return ___flags_0; }
	inline int32_t* get_address_of_flags_0() { return &___flags_0; }
	inline void set_flags_0(int32_t value)
	{
		___flags_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECURITYPERMISSION_T940317633_H
#ifndef DES_T2149456256_H
#define DES_T2149456256_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DES
struct  DES_t2149456256  : public SymmetricAlgorithm_t704442840
{
public:

public:
};

struct DES_t2149456256_StaticFields
{
public:
	// System.Byte[,] System.Security.Cryptography.DES::weakKeys
	ByteU5BU2CU5D_t317375470* ___weakKeys_10;
	// System.Byte[,] System.Security.Cryptography.DES::semiWeakKeys
	ByteU5BU2CU5D_t317375470* ___semiWeakKeys_11;

public:
	inline static int32_t get_offset_of_weakKeys_10() { return static_cast<int32_t>(offsetof(DES_t2149456256_StaticFields, ___weakKeys_10)); }
	inline ByteU5BU2CU5D_t317375470* get_weakKeys_10() const { return ___weakKeys_10; }
	inline ByteU5BU2CU5D_t317375470** get_address_of_weakKeys_10() { return &___weakKeys_10; }
	inline void set_weakKeys_10(ByteU5BU2CU5D_t317375470* value)
	{
		___weakKeys_10 = value;
		Il2CppCodeGenWriteBarrier((&___weakKeys_10), value);
	}

	inline static int32_t get_offset_of_semiWeakKeys_11() { return static_cast<int32_t>(offsetof(DES_t2149456256_StaticFields, ___semiWeakKeys_11)); }
	inline ByteU5BU2CU5D_t317375470* get_semiWeakKeys_11() const { return ___semiWeakKeys_11; }
	inline ByteU5BU2CU5D_t317375470** get_address_of_semiWeakKeys_11() { return &___semiWeakKeys_11; }
	inline void set_semiWeakKeys_11(ByteU5BU2CU5D_t317375470* value)
	{
		___semiWeakKeys_11 = value;
		Il2CppCodeGenWriteBarrier((&___semiWeakKeys_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DES_T2149456256_H
#ifndef TRIPLEDES_T2260975313_H
#define TRIPLEDES_T2260975313_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.TripleDES
struct  TripleDES_t2260975313  : public SymmetricAlgorithm_t704442840
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIPLEDES_T2260975313_H
#ifndef RC2_T1369561369_H
#define RC2_T1369561369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RC2
struct  RC2_t1369561369  : public SymmetricAlgorithm_t704442840
{
public:
	// System.Int32 System.Security.Cryptography.RC2::EffectiveKeySizeValue
	int32_t ___EffectiveKeySizeValue_10;

public:
	inline static int32_t get_offset_of_EffectiveKeySizeValue_10() { return static_cast<int32_t>(offsetof(RC2_t1369561369, ___EffectiveKeySizeValue_10)); }
	inline int32_t get_EffectiveKeySizeValue_10() const { return ___EffectiveKeySizeValue_10; }
	inline int32_t* get_address_of_EffectiveKeySizeValue_10() { return &___EffectiveKeySizeValue_10; }
	inline void set_EffectiveKeySizeValue_10(int32_t value)
	{
		___EffectiveKeySizeValue_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC2_T1369561369_H
#ifndef RIJNDAEL_T4242076431_H
#define RIJNDAEL_T4242076431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Rijndael
struct  Rijndael_t4242076431  : public SymmetricAlgorithm_t704442840
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAEL_T4242076431_H
#ifndef TRIPLEDESCRYPTOSERVICEPROVIDER_T1548641418_H
#define TRIPLEDESCRYPTOSERVICEPROVIDER_T1548641418_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.TripleDESCryptoServiceProvider
struct  TripleDESCryptoServiceProvider_t1548641418  : public TripleDES_t2260975313
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIPLEDESCRYPTOSERVICEPROVIDER_T1548641418_H
#ifndef DESCRYPTOSERVICEPROVIDER_T1004592689_H
#define DESCRYPTOSERVICEPROVIDER_T1004592689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DESCryptoServiceProvider
struct  DESCryptoServiceProvider_t1004592689  : public DES_t2149456256
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCRYPTOSERVICEPROVIDER_T1004592689_H
#ifndef RC2CRYPTOSERVICEPROVIDER_T204833890_H
#define RC2CRYPTOSERVICEPROVIDER_T204833890_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RC2CryptoServiceProvider
struct  RC2CryptoServiceProvider_t204833890  : public RC2_t1369561369
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC2CRYPTOSERVICEPROVIDER_T204833890_H
#ifndef RIJNDAELMANAGED_T1106782591_H
#define RIJNDAELMANAGED_T1106782591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RijndaelManaged
struct  RijndaelManaged_t1106782591  : public Rijndael_t4242076431
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAELMANAGED_T1106782591_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize600 = { sizeof (CipherMode_t2635436927)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable600[6] = 
{
	CipherMode_t2635436927::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize601 = { sizeof (CryptoConfig_t1838124194), -1, sizeof(CryptoConfig_t1838124194_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable601[3] = 
{
	CryptoConfig_t1838124194_StaticFields::get_offset_of_lockObject_0(),
	CryptoConfig_t1838124194_StaticFields::get_offset_of_algorithms_1(),
	CryptoConfig_t1838124194_StaticFields::get_offset_of_oid_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize602 = { sizeof (CryptographicException_t3712973458), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize603 = { sizeof (CryptographicUnexpectedOperationException_t3601168462), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize604 = { sizeof (CspParameters_t3649395015), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable604[5] = 
{
	CspParameters_t3649395015::get_offset_of__Flags_0(),
	CspParameters_t3649395015::get_offset_of_KeyContainerName_1(),
	CspParameters_t3649395015::get_offset_of_KeyNumber_2(),
	CspParameters_t3649395015::get_offset_of_ProviderName_3(),
	CspParameters_t3649395015::get_offset_of_ProviderType_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize605 = { sizeof (CspProviderFlags_t2062850836)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable605[9] = 
{
	CspProviderFlags_t2062850836::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize606 = { sizeof (DES_t2149456256), -1, sizeof(DES_t2149456256_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable606[2] = 
{
	DES_t2149456256_StaticFields::get_offset_of_weakKeys_10(),
	DES_t2149456256_StaticFields::get_offset_of_semiWeakKeys_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize607 = { sizeof (DESTransform_t4291006340), -1, sizeof(DESTransform_t4291006340_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable607[13] = 
{
	DESTransform_t4291006340_StaticFields::get_offset_of_KEY_BIT_SIZE_12(),
	DESTransform_t4291006340_StaticFields::get_offset_of_KEY_BYTE_SIZE_13(),
	DESTransform_t4291006340_StaticFields::get_offset_of_BLOCK_BIT_SIZE_14(),
	DESTransform_t4291006340_StaticFields::get_offset_of_BLOCK_BYTE_SIZE_15(),
	DESTransform_t4291006340::get_offset_of_keySchedule_16(),
	DESTransform_t4291006340::get_offset_of_byteBuff_17(),
	DESTransform_t4291006340::get_offset_of_dwordBuff_18(),
	DESTransform_t4291006340_StaticFields::get_offset_of_spBoxes_19(),
	DESTransform_t4291006340_StaticFields::get_offset_of_PC1_20(),
	DESTransform_t4291006340_StaticFields::get_offset_of_leftRotTotal_21(),
	DESTransform_t4291006340_StaticFields::get_offset_of_PC2_22(),
	DESTransform_t4291006340_StaticFields::get_offset_of_ipTab_23(),
	DESTransform_t4291006340_StaticFields::get_offset_of_fpTab_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize608 = { sizeof (DESCryptoServiceProvider_t1004592689), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize609 = { sizeof (DSA_t28453765), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize610 = { sizeof (DSACryptoServiceProvider_t3565431618), -1, sizeof(DSACryptoServiceProvider_t3565431618_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable610[7] = 
{
	DSACryptoServiceProvider_t3565431618::get_offset_of_store_2(),
	DSACryptoServiceProvider_t3565431618::get_offset_of_persistKey_3(),
	DSACryptoServiceProvider_t3565431618::get_offset_of_persisted_4(),
	DSACryptoServiceProvider_t3565431618::get_offset_of_privateKeyExportable_5(),
	DSACryptoServiceProvider_t3565431618::get_offset_of_m_disposed_6(),
	DSACryptoServiceProvider_t3565431618::get_offset_of_dsa_7(),
	DSACryptoServiceProvider_t3565431618_StaticFields::get_offset_of_useMachineKeyStore_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize611 = { sizeof (DSAParameters_t1020338899)+ sizeof (RuntimeObject), sizeof(DSAParameters_t1020338899_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable611[8] = 
{
	DSAParameters_t1020338899::get_offset_of_Counter_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1020338899::get_offset_of_G_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1020338899::get_offset_of_J_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1020338899::get_offset_of_P_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1020338899::get_offset_of_Q_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1020338899::get_offset_of_Seed_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1020338899::get_offset_of_X_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DSAParameters_t1020338899::get_offset_of_Y_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize612 = { sizeof (DSASignatureDeformatter_t1874368996), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable612[1] = 
{
	DSASignatureDeformatter_t1874368996::get_offset_of_dsa_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize613 = { sizeof (DSASignatureFormatter_t1724117787), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable613[1] = 
{
	DSASignatureFormatter_t1724117787::get_offset_of_dsa_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize614 = { sizeof (HMAC_t1292688981), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable614[5] = 
{
	HMAC_t1292688981::get_offset_of__disposed_5(),
	HMAC_t1292688981::get_offset_of__hashName_6(),
	HMAC_t1292688981::get_offset_of__algo_7(),
	HMAC_t1292688981::get_offset_of__block_8(),
	HMAC_t1292688981::get_offset_of__blockSizeValue_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize615 = { sizeof (HMACMD5_t4053788204), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize616 = { sizeof (HMACRIPEMD160_t2688082484), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize617 = { sizeof (HMACSHA1_t3480857901), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize618 = { sizeof (HMACSHA256_t3508468392), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize619 = { sizeof (HMACSHA384_t5448025), -1, sizeof(HMACSHA384_t5448025_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable619[2] = 
{
	HMACSHA384_t5448025_StaticFields::get_offset_of_legacy_mode_10(),
	HMACSHA384_t5448025::get_offset_of_legacy_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize620 = { sizeof (HMACSHA512_t1494271385), -1, sizeof(HMACSHA512_t1494271385_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable620[2] = 
{
	HMACSHA512_t1494271385_StaticFields::get_offset_of_legacy_mode_10(),
	HMACSHA512_t1494271385::get_offset_of_legacy_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize621 = { sizeof (HashAlgorithm_t1249475727), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable621[4] = 
{
	HashAlgorithm_t1249475727::get_offset_of_HashValue_0(),
	HashAlgorithm_t1249475727::get_offset_of_HashSizeValue_1(),
	HashAlgorithm_t1249475727::get_offset_of_State_2(),
	HashAlgorithm_t1249475727::get_offset_of_disposed_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize622 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize623 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize624 = { sizeof (KeySizes_t2181691988), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable624[3] = 
{
	KeySizes_t2181691988::get_offset_of__maxSize_0(),
	KeySizes_t2181691988::get_offset_of__minSize_1(),
	KeySizes_t2181691988::get_offset_of__skipSize_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize625 = { sizeof (KeyedHashAlgorithm_t2282618673), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable625[1] = 
{
	KeyedHashAlgorithm_t2282618673::get_offset_of_KeyValue_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize626 = { sizeof (MACTripleDES_t1421907319), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable626[3] = 
{
	MACTripleDES_t1421907319::get_offset_of_tdes_5(),
	MACTripleDES_t1421907319::get_offset_of_mac_6(),
	MACTripleDES_t1421907319::get_offset_of_m_disposed_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize627 = { sizeof (MD5_t3612848052), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize628 = { sizeof (MD5CryptoServiceProvider_t793791708), -1, sizeof(MD5CryptoServiceProvider_t793791708_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable628[6] = 
{
	MD5CryptoServiceProvider_t793791708::get_offset_of__H_4(),
	MD5CryptoServiceProvider_t793791708::get_offset_of_buff_5(),
	MD5CryptoServiceProvider_t793791708::get_offset_of_count_6(),
	MD5CryptoServiceProvider_t793791708::get_offset_of__ProcessingBuffer_7(),
	MD5CryptoServiceProvider_t793791708::get_offset_of__ProcessingBufferCount_8(),
	MD5CryptoServiceProvider_t793791708_StaticFields::get_offset_of_K_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize629 = { sizeof (PaddingMode_t2371064963)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable629[6] = 
{
	PaddingMode_t2371064963::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize630 = { sizeof (RC2_t1369561369), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable630[1] = 
{
	RC2_t1369561369::get_offset_of_EffectiveKeySizeValue_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize631 = { sizeof (RC2CryptoServiceProvider_t204833890), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize632 = { sizeof (RC2Transform_t2244013379), -1, sizeof(RC2Transform_t2244013379_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable632[7] = 
{
	RC2Transform_t2244013379::get_offset_of_R0_12(),
	RC2Transform_t2244013379::get_offset_of_R1_13(),
	RC2Transform_t2244013379::get_offset_of_R2_14(),
	RC2Transform_t2244013379::get_offset_of_R3_15(),
	RC2Transform_t2244013379::get_offset_of_K_16(),
	RC2Transform_t2244013379::get_offset_of_j_17(),
	RC2Transform_t2244013379_StaticFields::get_offset_of_pitable_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize633 = { sizeof (RIPEMD160_t3430000695), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize634 = { sizeof (RIPEMD160Managed_t2738948607), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable634[5] = 
{
	RIPEMD160Managed_t2738948607::get_offset_of__ProcessingBuffer_4(),
	RIPEMD160Managed_t2738948607::get_offset_of__X_5(),
	RIPEMD160Managed_t2738948607::get_offset_of__HashValue_6(),
	RIPEMD160Managed_t2738948607::get_offset_of__Length_7(),
	RIPEMD160Managed_t2738948607::get_offset_of__ProcessingBufferCount_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize635 = { sizeof (RNGCryptoServiceProvider_t1754971555), -1, sizeof(RNGCryptoServiceProvider_t1754971555_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable635[2] = 
{
	RNGCryptoServiceProvider_t1754971555_StaticFields::get_offset_of__lock_0(),
	RNGCryptoServiceProvider_t1754971555::get_offset_of__handle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize636 = { sizeof (RSA_t1050577473), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize637 = { sizeof (RSACryptoServiceProvider_t3266812275), -1, sizeof(RSACryptoServiceProvider_t3266812275_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable637[7] = 
{
	RSACryptoServiceProvider_t3266812275::get_offset_of_store_2(),
	RSACryptoServiceProvider_t3266812275::get_offset_of_persistKey_3(),
	RSACryptoServiceProvider_t3266812275::get_offset_of_persisted_4(),
	RSACryptoServiceProvider_t3266812275::get_offset_of_privateKeyExportable_5(),
	RSACryptoServiceProvider_t3266812275::get_offset_of_m_disposed_6(),
	RSACryptoServiceProvider_t3266812275::get_offset_of_rsa_7(),
	RSACryptoServiceProvider_t3266812275_StaticFields::get_offset_of_useMachineKeyStore_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize638 = { sizeof (RSAPKCS1KeyExchangeFormatter_t1560369721), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable638[2] = 
{
	RSAPKCS1KeyExchangeFormatter_t1560369721::get_offset_of_rsa_0(),
	RSAPKCS1KeyExchangeFormatter_t1560369721::get_offset_of_random_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize639 = { sizeof (RSAPKCS1SignatureDeformatter_t445289980), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable639[2] = 
{
	RSAPKCS1SignatureDeformatter_t445289980::get_offset_of_rsa_0(),
	RSAPKCS1SignatureDeformatter_t445289980::get_offset_of_hashName_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize640 = { sizeof (RSAPKCS1SignatureFormatter_t2510939034), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable640[2] = 
{
	RSAPKCS1SignatureFormatter_t2510939034::get_offset_of_rsa_0(),
	RSAPKCS1SignatureFormatter_t2510939034::get_offset_of_hash_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize641 = { sizeof (RSAParameters_t734515625)+ sizeof (RuntimeObject), sizeof(RSAParameters_t734515625_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable641[8] = 
{
	RSAParameters_t734515625::get_offset_of_P_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t734515625::get_offset_of_Q_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t734515625::get_offset_of_D_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t734515625::get_offset_of_DP_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t734515625::get_offset_of_DQ_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t734515625::get_offset_of_InverseQ_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t734515625::get_offset_of_Modulus_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RSAParameters_t734515625::get_offset_of_Exponent_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize642 = { sizeof (RandomNumberGenerator_t3143434466), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize643 = { sizeof (Rijndael_t4242076431), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize644 = { sizeof (RijndaelManaged_t1106782591), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize645 = { sizeof (RijndaelTransform_t4036756015), -1, sizeof(RijndaelTransform_t4036756015_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable645[15] = 
{
	RijndaelTransform_t4036756015::get_offset_of_expandedKey_12(),
	RijndaelTransform_t4036756015::get_offset_of_Nb_13(),
	RijndaelTransform_t4036756015::get_offset_of_Nk_14(),
	RijndaelTransform_t4036756015::get_offset_of_Nr_15(),
	RijndaelTransform_t4036756015_StaticFields::get_offset_of_Rcon_16(),
	RijndaelTransform_t4036756015_StaticFields::get_offset_of_SBox_17(),
	RijndaelTransform_t4036756015_StaticFields::get_offset_of_iSBox_18(),
	RijndaelTransform_t4036756015_StaticFields::get_offset_of_T0_19(),
	RijndaelTransform_t4036756015_StaticFields::get_offset_of_T1_20(),
	RijndaelTransform_t4036756015_StaticFields::get_offset_of_T2_21(),
	RijndaelTransform_t4036756015_StaticFields::get_offset_of_T3_22(),
	RijndaelTransform_t4036756015_StaticFields::get_offset_of_iT0_23(),
	RijndaelTransform_t4036756015_StaticFields::get_offset_of_iT1_24(),
	RijndaelTransform_t4036756015_StaticFields::get_offset_of_iT2_25(),
	RijndaelTransform_t4036756015_StaticFields::get_offset_of_iT3_26(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize646 = { sizeof (RijndaelManagedTransform_t4278362833), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable646[2] = 
{
	RijndaelManagedTransform_t4278362833::get_offset_of__st_0(),
	RijndaelManagedTransform_t4278362833::get_offset_of__bs_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize647 = { sizeof (SHA1_t821729488), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize648 = { sizeof (SHA1Internal_t2955367709), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable648[5] = 
{
	SHA1Internal_t2955367709::get_offset_of__H_0(),
	SHA1Internal_t2955367709::get_offset_of_count_1(),
	SHA1Internal_t2955367709::get_offset_of__ProcessingBuffer_2(),
	SHA1Internal_t2955367709::get_offset_of__ProcessingBufferCount_3(),
	SHA1Internal_t2955367709::get_offset_of_buff_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize649 = { sizeof (SHA1CryptoServiceProvider_t2816435419), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable649[1] = 
{
	SHA1CryptoServiceProvider_t2816435419::get_offset_of_sha_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize650 = { sizeof (SHA1Managed_t2855901420), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable650[1] = 
{
	SHA1Managed_t2855901420::get_offset_of_sha_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize651 = { sizeof (SHA256_t368553972), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize652 = { sizeof (SHA256Managed_t3300309131), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable652[5] = 
{
	SHA256Managed_t3300309131::get_offset_of__H_4(),
	SHA256Managed_t3300309131::get_offset_of_count_5(),
	SHA256Managed_t3300309131::get_offset_of__ProcessingBuffer_6(),
	SHA256Managed_t3300309131::get_offset_of__ProcessingBufferCount_7(),
	SHA256Managed_t3300309131::get_offset_of_buff_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize653 = { sizeof (SHA384_t3926899676), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize654 = { sizeof (SHA384Managed_t391678993), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable654[14] = 
{
	SHA384Managed_t391678993::get_offset_of_xBuf_4(),
	SHA384Managed_t391678993::get_offset_of_xBufOff_5(),
	SHA384Managed_t391678993::get_offset_of_byteCount1_6(),
	SHA384Managed_t391678993::get_offset_of_byteCount2_7(),
	SHA384Managed_t391678993::get_offset_of_H1_8(),
	SHA384Managed_t391678993::get_offset_of_H2_9(),
	SHA384Managed_t391678993::get_offset_of_H3_10(),
	SHA384Managed_t391678993::get_offset_of_H4_11(),
	SHA384Managed_t391678993::get_offset_of_H5_12(),
	SHA384Managed_t391678993::get_offset_of_H6_13(),
	SHA384Managed_t391678993::get_offset_of_H7_14(),
	SHA384Managed_t391678993::get_offset_of_H8_15(),
	SHA384Managed_t391678993::get_offset_of_W_16(),
	SHA384Managed_t391678993::get_offset_of_wOff_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize655 = { sizeof (SHA512_t3936875870), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize656 = { sizeof (SHA512Managed_t40693926), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable656[14] = 
{
	SHA512Managed_t40693926::get_offset_of_xBuf_4(),
	SHA512Managed_t40693926::get_offset_of_xBufOff_5(),
	SHA512Managed_t40693926::get_offset_of_byteCount1_6(),
	SHA512Managed_t40693926::get_offset_of_byteCount2_7(),
	SHA512Managed_t40693926::get_offset_of_H1_8(),
	SHA512Managed_t40693926::get_offset_of_H2_9(),
	SHA512Managed_t40693926::get_offset_of_H3_10(),
	SHA512Managed_t40693926::get_offset_of_H4_11(),
	SHA512Managed_t40693926::get_offset_of_H5_12(),
	SHA512Managed_t40693926::get_offset_of_H6_13(),
	SHA512Managed_t40693926::get_offset_of_H7_14(),
	SHA512Managed_t40693926::get_offset_of_H8_15(),
	SHA512Managed_t40693926::get_offset_of_W_16(),
	SHA512Managed_t40693926::get_offset_of_wOff_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize657 = { sizeof (SHAConstants_t2697207431), -1, sizeof(SHAConstants_t2697207431_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable657[2] = 
{
	SHAConstants_t2697207431_StaticFields::get_offset_of_K1_0(),
	SHAConstants_t2697207431_StaticFields::get_offset_of_K2_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize658 = { sizeof (SignatureDescription_t248587934), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable658[4] = 
{
	SignatureDescription_t248587934::get_offset_of__DeformatterAlgorithm_0(),
	SignatureDescription_t248587934::get_offset_of__DigestAlgorithm_1(),
	SignatureDescription_t248587934::get_offset_of__FormatterAlgorithm_2(),
	SignatureDescription_t248587934::get_offset_of__KeyAlgorithm_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize659 = { sizeof (DSASignatureDescription_t2672988213), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize660 = { sizeof (RSAPKCS1SHA1SignatureDescription_t2429984183), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize661 = { sizeof (SymmetricAlgorithm_t704442840), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable661[10] = 
{
	SymmetricAlgorithm_t704442840::get_offset_of_BlockSizeValue_0(),
	SymmetricAlgorithm_t704442840::get_offset_of_IVValue_1(),
	SymmetricAlgorithm_t704442840::get_offset_of_KeySizeValue_2(),
	SymmetricAlgorithm_t704442840::get_offset_of_KeyValue_3(),
	SymmetricAlgorithm_t704442840::get_offset_of_LegalBlockSizesValue_4(),
	SymmetricAlgorithm_t704442840::get_offset_of_LegalKeySizesValue_5(),
	SymmetricAlgorithm_t704442840::get_offset_of_FeedbackSizeValue_6(),
	SymmetricAlgorithm_t704442840::get_offset_of_ModeValue_7(),
	SymmetricAlgorithm_t704442840::get_offset_of_PaddingValue_8(),
	SymmetricAlgorithm_t704442840::get_offset_of_m_disposed_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize662 = { sizeof (ToBase64Transform_t1796674501), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable662[1] = 
{
	ToBase64Transform_t1796674501::get_offset_of_m_disposed_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize663 = { sizeof (TripleDES_t2260975313), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize664 = { sizeof (TripleDESCryptoServiceProvider_t1548641418), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize665 = { sizeof (TripleDESTransform_t1546794956), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable665[6] = 
{
	TripleDESTransform_t1546794956::get_offset_of_E1_12(),
	TripleDESTransform_t1546794956::get_offset_of_D2_13(),
	TripleDESTransform_t1546794956::get_offset_of_E3_14(),
	TripleDESTransform_t1546794956::get_offset_of_D1_15(),
	TripleDESTransform_t1546794956::get_offset_of_E2_16(),
	TripleDESTransform_t1546794956::get_offset_of_D3_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize666 = { sizeof (CodeAccessSecurityAttribute_t972729232), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize667 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize668 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize669 = { sizeof (SecurityPermission_t940317633), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable669[1] = 
{
	SecurityPermission_t940317633::get_offset_of_flags_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize670 = { sizeof (SecurityPermissionAttribute_t1327626412), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable670[1] = 
{
	SecurityPermissionAttribute_t1327626412::get_offset_of_m_Flags_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize671 = { sizeof (SecurityPermissionFlag_t1035165784)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable671[17] = 
{
	SecurityPermissionFlag_t1035165784::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize672 = { sizeof (StrongNamePublicKeyBlob_t2611943804), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable672[1] = 
{
	StrongNamePublicKeyBlob_t2611943804::get_offset_of_pubkey_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize673 = { sizeof (ApplicationTrust_t3648106563), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable673[1] = 
{
	ApplicationTrust_t3648106563::get_offset_of_fullTrustAssemblies_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize674 = { sizeof (Evidence_t2966650440), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable674[3] = 
{
	Evidence_t2966650440::get_offset_of_hostEvidenceList_0(),
	Evidence_t2966650440::get_offset_of_assemblyEvidenceList_1(),
	Evidence_t2966650440::get_offset_of__hashCode_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize675 = { sizeof (EvidenceEnumerator_t1433021778), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable675[3] = 
{
	EvidenceEnumerator_t1433021778::get_offset_of_currentEnum_0(),
	EvidenceEnumerator_t1433021778::get_offset_of_hostEnum_1(),
	EvidenceEnumerator_t1433021778::get_offset_of_assemblyEnum_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize676 = { sizeof (Hash_t2682973573), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable676[2] = 
{
	Hash_t2682973573::get_offset_of_assembly_0(),
	Hash_t2682973573::get_offset_of_data_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize677 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize678 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize679 = { sizeof (StrongName_t500109384), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable679[3] = 
{
	StrongName_t500109384::get_offset_of_publickey_0(),
	StrongName_t500109384::get_offset_of_name_1(),
	StrongName_t500109384::get_offset_of_version_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize680 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize681 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize682 = { sizeof (PrincipalPolicy_t4255473229)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable682[4] = 
{
	PrincipalPolicy_t4255473229::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize683 = { sizeof (WindowsAccountType_t399573456)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable683[5] = 
{
	WindowsAccountType_t399573456::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize684 = { sizeof (WindowsIdentity_t676169376), -1, sizeof(WindowsIdentity_t676169376_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable684[7] = 
{
	WindowsIdentity_t676169376::get_offset_of__token_0(),
	WindowsIdentity_t676169376::get_offset_of__type_1(),
	WindowsIdentity_t676169376::get_offset_of__account_2(),
	WindowsIdentity_t676169376::get_offset_of__authenticated_3(),
	WindowsIdentity_t676169376::get_offset_of__name_4(),
	WindowsIdentity_t676169376::get_offset_of__info_5(),
	WindowsIdentity_t676169376_StaticFields::get_offset_of_invalidWindows_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize685 = { sizeof (AllowPartiallyTrustedCallersAttribute_t3247703654), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize686 = { sizeof (CodeAccessPermission_t2613798098), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize687 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize688 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize689 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize690 = { sizeof (PermissionSet_t2481005838), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable690[1] = 
{
	PermissionSet_t2481005838::get_offset_of_U3CDeclarativeSecurityU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize691 = { sizeof (SecurityContext_t2284490264), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable691[4] = 
{
	SecurityContext_t2284490264::get_offset_of__capture_0(),
	SecurityContext_t2284490264::get_offset_of__winid_1(),
	SecurityContext_t2284490264::get_offset_of__stack_2(),
	SecurityContext_t2284490264::get_offset_of__suppressFlow_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize692 = { sizeof (SecurityCriticalAttribute_t3674287780), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable692[1] = 
{
	SecurityCriticalAttribute_t3674287780::get_offset_of__scope_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize693 = { sizeof (SecurityCriticalScope_t1774892986)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable693[3] = 
{
	SecurityCriticalScope_t1774892986::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize694 = { sizeof (SecurityElement_t3933983653), -1, sizeof(SecurityElement_t3933983653_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable694[9] = 
{
	SecurityElement_t3933983653::get_offset_of_text_0(),
	SecurityElement_t3933983653::get_offset_of_tag_1(),
	SecurityElement_t3933983653::get_offset_of_attributes_2(),
	SecurityElement_t3933983653::get_offset_of_children_3(),
	SecurityElement_t3933983653_StaticFields::get_offset_of_invalid_tag_chars_4(),
	SecurityElement_t3933983653_StaticFields::get_offset_of_invalid_text_chars_5(),
	SecurityElement_t3933983653_StaticFields::get_offset_of_invalid_attr_name_chars_6(),
	SecurityElement_t3933983653_StaticFields::get_offset_of_invalid_attr_value_chars_7(),
	SecurityElement_t3933983653_StaticFields::get_offset_of_invalid_chars_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize695 = { sizeof (SecurityAttribute_t2417636248), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable695[2] = 
{
	SecurityAttribute_t2417636248::get_offset_of__name_0(),
	SecurityAttribute_t2417636248::get_offset_of__value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize696 = { sizeof (SecurityException_t1990041383), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable696[8] = 
{
	SecurityException_t1990041383::get_offset_of_permissionState_11(),
	SecurityException_t1990041383::get_offset_of_permissionType_12(),
	SecurityException_t1990041383::get_offset_of__granted_13(),
	SecurityException_t1990041383::get_offset_of__refused_14(),
	SecurityException_t1990041383::get_offset_of__demanded_15(),
	SecurityException_t1990041383::get_offset_of__firstperm_16(),
	SecurityException_t1990041383::get_offset_of__method_17(),
	SecurityException_t1990041383::get_offset_of__evidence_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize697 = { sizeof (RuntimeDeclSecurityEntry_t2549996473)+ sizeof (RuntimeObject), sizeof(RuntimeDeclSecurityEntry_t2549996473 ), 0, 0 };
extern const int32_t g_FieldOffsetTable697[3] = 
{
	RuntimeDeclSecurityEntry_t2549996473::get_offset_of_blob_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RuntimeDeclSecurityEntry_t2549996473::get_offset_of_size_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RuntimeDeclSecurityEntry_t2549996473::get_offset_of_index_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize698 = { sizeof (RuntimeSecurityFrame_t1630505945), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable698[5] = 
{
	RuntimeSecurityFrame_t1630505945::get_offset_of_domain_0(),
	RuntimeSecurityFrame_t1630505945::get_offset_of_method_1(),
	RuntimeSecurityFrame_t1630505945::get_offset_of_assert_2(),
	RuntimeSecurityFrame_t1630505945::get_offset_of_deny_3(),
	RuntimeSecurityFrame_t1630505945::get_offset_of_permitonly_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize699 = { sizeof (SecurityFrame_t1226064848)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable699[5] = 
{
	SecurityFrame_t1226064848::get_offset_of__domain_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t1226064848::get_offset_of__method_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t1226064848::get_offset_of__assert_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t1226064848::get_offset_of__deny_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SecurityFrame_t1226064848::get_offset_of__permitonly_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
