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

// System.Collections.Hashtable
struct Hashtable_t1283080349;
// System.Text.RegularExpressions.MRUList
struct MRUList_t640488818;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t496025019;
// System.Byte[]
struct ByteU5BU5D_t317375469;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t861964270;
// System.Collections.ArrayList
struct ArrayList_t3465324181;
// Mono.Math.BigInteger
struct BigInteger_t1084564621;
// System.UInt32[]
struct UInt32U5BU5D_t1435100350;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t3143434466;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1330376034;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t415537980;
// System.Collections.IEnumerator
struct IEnumerator_t4106850227;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t888819165;
// System.Text.RegularExpressions.Regex
struct Regex_t3759448142;
// System.Uri/UriScheme[]
struct UriSchemeU5BU5D_t1534006459;
// System.UriParser
struct UriParser_t2799554438;
// System.IntPtr[]
struct IntPtrU5BU5D_t1910612814;
// System.Collections.IDictionary
struct IDictionary_t2080431949;
// System.UInt16[]
struct UInt16U5BU5D_t3499399594;
// System.String[]
struct StringU5BU5D_t623663148;
// System.Collections.IList
struct IList_t3333906613;
// System.Text.RegularExpressions.MRUList/Node
struct Node_t2498541648;
// System.Int32[]
struct Int32U5BU5D_t246198214;
// System.Collections.Stack
struct Stack_t732864929;
// System.Text.RegularExpressions.Syntax.ExpressionCollection
struct ExpressionCollection_t1923166166;
// System.Char[]
struct CharU5BU5D_t1085015499;
// System.Void
struct Void_t1196225232;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t1422070797;
// System.Collections.BitArray
struct BitArray_t1242506387;
// System.Text.RegularExpressions.IntervalCollection
struct IntervalCollection_t113444232;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t3634506307;
// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t3890555599;
// System.Text.RegularExpressions.QuickSearch
struct QuickSearch_t4207793344;
// System.Text.RegularExpressions.Interpreter/RepeatContext
struct RepeatContext_t3152651949;
// System.Text.RegularExpressions.Mark[]
struct MarkU5BU5D_t3128691501;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t223010983;
// System.Text.RegularExpressions.Syntax.Expression
struct Expression_t4065159133;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t2901620444;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t2851841497;
// System.Security.Cryptography.RSA
struct RSA_t1050577473;
// System.Security.Cryptography.DSA
struct DSA_t28453765;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t3871348741;
// System.IAsyncResult
struct IAsyncResult_t3376967475;
// System.AsyncCallback
struct AsyncCallback_t1077883780;
// System.EventArgs
struct EventArgs_t622610362;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1268424665;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t1160135209;




#ifndef U3CMODULEU3E_T2479626076_H
#define U3CMODULEU3E_T2479626076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t2479626076 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T2479626076_H
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
#ifndef FACTORYCACHE_T702031199_H
#define FACTORYCACHE_T702031199_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.FactoryCache
struct  FactoryCache_t702031199  : public RuntimeObject
{
public:
	// System.Int32 System.Text.RegularExpressions.FactoryCache::capacity
	int32_t ___capacity_0;
	// System.Collections.Hashtable System.Text.RegularExpressions.FactoryCache::factories
	Hashtable_t1283080349 * ___factories_1;
	// System.Text.RegularExpressions.MRUList System.Text.RegularExpressions.FactoryCache::mru_list
	MRUList_t640488818 * ___mru_list_2;

public:
	inline static int32_t get_offset_of_capacity_0() { return static_cast<int32_t>(offsetof(FactoryCache_t702031199, ___capacity_0)); }
	inline int32_t get_capacity_0() const { return ___capacity_0; }
	inline int32_t* get_address_of_capacity_0() { return &___capacity_0; }
	inline void set_capacity_0(int32_t value)
	{
		___capacity_0 = value;
	}

	inline static int32_t get_offset_of_factories_1() { return static_cast<int32_t>(offsetof(FactoryCache_t702031199, ___factories_1)); }
	inline Hashtable_t1283080349 * get_factories_1() const { return ___factories_1; }
	inline Hashtable_t1283080349 ** get_address_of_factories_1() { return &___factories_1; }
	inline void set_factories_1(Hashtable_t1283080349 * value)
	{
		___factories_1 = value;
		Il2CppCodeGenWriteBarrier((&___factories_1), value);
	}

	inline static int32_t get_offset_of_mru_list_2() { return static_cast<int32_t>(offsetof(FactoryCache_t702031199, ___mru_list_2)); }
	inline MRUList_t640488818 * get_mru_list_2() const { return ___mru_list_2; }
	inline MRUList_t640488818 ** get_address_of_mru_list_2() { return &___mru_list_2; }
	inline void set_mru_list_2(MRUList_t640488818 * value)
	{
		___mru_list_2 = value;
		Il2CppCodeGenWriteBarrier((&___mru_list_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FACTORYCACHE_T702031199_H
#ifndef CRYPTOCONVERT_T1355343436_H
#define CRYPTOCONVERT_T1355343436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.CryptoConvert
struct  CryptoConvert_t1355343436  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOCONVERT_T1355343436_H
#ifndef ENCRYPTEDDATA_T3189629989_H
#define ENCRYPTEDDATA_T3189629989_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/EncryptedData
struct  EncryptedData_t3189629989  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.PKCS7/EncryptedData::_version
	uint8_t ____version_0;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_content
	ContentInfo_t496025019 * ____content_1;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_encryptionAlgorithm
	ContentInfo_t496025019 * ____encryptionAlgorithm_2;
	// System.Byte[] Mono.Security.PKCS7/EncryptedData::_encrypted
	ByteU5BU5D_t317375469* ____encrypted_3;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(EncryptedData_t3189629989, ____version_0)); }
	inline uint8_t get__version_0() const { return ____version_0; }
	inline uint8_t* get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(uint8_t value)
	{
		____version_0 = value;
	}

	inline static int32_t get_offset_of__content_1() { return static_cast<int32_t>(offsetof(EncryptedData_t3189629989, ____content_1)); }
	inline ContentInfo_t496025019 * get__content_1() const { return ____content_1; }
	inline ContentInfo_t496025019 ** get_address_of__content_1() { return &____content_1; }
	inline void set__content_1(ContentInfo_t496025019 * value)
	{
		____content_1 = value;
		Il2CppCodeGenWriteBarrier((&____content_1), value);
	}

	inline static int32_t get_offset_of__encryptionAlgorithm_2() { return static_cast<int32_t>(offsetof(EncryptedData_t3189629989, ____encryptionAlgorithm_2)); }
	inline ContentInfo_t496025019 * get__encryptionAlgorithm_2() const { return ____encryptionAlgorithm_2; }
	inline ContentInfo_t496025019 ** get_address_of__encryptionAlgorithm_2() { return &____encryptionAlgorithm_2; }
	inline void set__encryptionAlgorithm_2(ContentInfo_t496025019 * value)
	{
		____encryptionAlgorithm_2 = value;
		Il2CppCodeGenWriteBarrier((&____encryptionAlgorithm_2), value);
	}

	inline static int32_t get_offset_of__encrypted_3() { return static_cast<int32_t>(offsetof(EncryptedData_t3189629989, ____encrypted_3)); }
	inline ByteU5BU5D_t317375469* get__encrypted_3() const { return ____encrypted_3; }
	inline ByteU5BU5D_t317375469** get_address_of__encrypted_3() { return &____encrypted_3; }
	inline void set__encrypted_3(ByteU5BU5D_t317375469* value)
	{
		____encrypted_3 = value;
		Il2CppCodeGenWriteBarrier((&____encrypted_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTEDDATA_T3189629989_H
#ifndef CONTENTINFO_T496025019_H
#define CONTENTINFO_T496025019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/ContentInfo
struct  ContentInfo_t496025019  : public RuntimeObject
{
public:
	// System.String Mono.Security.PKCS7/ContentInfo::contentType
	String_t* ___contentType_0;
	// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::content
	ASN1_t861964270 * ___content_1;

public:
	inline static int32_t get_offset_of_contentType_0() { return static_cast<int32_t>(offsetof(ContentInfo_t496025019, ___contentType_0)); }
	inline String_t* get_contentType_0() const { return ___contentType_0; }
	inline String_t** get_address_of_contentType_0() { return &___contentType_0; }
	inline void set_contentType_0(String_t* value)
	{
		___contentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___contentType_0), value);
	}

	inline static int32_t get_offset_of_content_1() { return static_cast<int32_t>(offsetof(ContentInfo_t496025019, ___content_1)); }
	inline ASN1_t861964270 * get_content_1() const { return ___content_1; }
	inline ASN1_t861964270 ** get_address_of_content_1() { return &___content_1; }
	inline void set_content_1(ASN1_t861964270 * value)
	{
		___content_1 = value;
		Il2CppCodeGenWriteBarrier((&___content_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTENTINFO_T496025019_H
#ifndef PKCS7_T333223809_H
#define PKCS7_T333223809_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7
struct  PKCS7_t333223809  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS7_T333223809_H
#ifndef BITCONVERTERLE_T2256943680_H
#define BITCONVERTERLE_T2256943680_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.BitConverterLE
struct  BitConverterLE_t2256943680  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITCONVERTERLE_T2256943680_H
#ifndef ASN1CONVERT_T1592239388_H
#define ASN1CONVERT_T1592239388_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1Convert
struct  ASN1Convert_t1592239388  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASN1CONVERT_T1592239388_H
#ifndef ASN1_T861964270_H
#define ASN1_T861964270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.ASN1
struct  ASN1_t861964270  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.ASN1::m_nTag
	uint8_t ___m_nTag_0;
	// System.Byte[] Mono.Security.ASN1::m_aValue
	ByteU5BU5D_t317375469* ___m_aValue_1;
	// System.Collections.ArrayList Mono.Security.ASN1::elist
	ArrayList_t3465324181 * ___elist_2;

public:
	inline static int32_t get_offset_of_m_nTag_0() { return static_cast<int32_t>(offsetof(ASN1_t861964270, ___m_nTag_0)); }
	inline uint8_t get_m_nTag_0() const { return ___m_nTag_0; }
	inline uint8_t* get_address_of_m_nTag_0() { return &___m_nTag_0; }
	inline void set_m_nTag_0(uint8_t value)
	{
		___m_nTag_0 = value;
	}

	inline static int32_t get_offset_of_m_aValue_1() { return static_cast<int32_t>(offsetof(ASN1_t861964270, ___m_aValue_1)); }
	inline ByteU5BU5D_t317375469* get_m_aValue_1() const { return ___m_aValue_1; }
	inline ByteU5BU5D_t317375469** get_address_of_m_aValue_1() { return &___m_aValue_1; }
	inline void set_m_aValue_1(ByteU5BU5D_t317375469* value)
	{
		___m_aValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_aValue_1), value);
	}

	inline static int32_t get_offset_of_elist_2() { return static_cast<int32_t>(offsetof(ASN1_t861964270, ___elist_2)); }
	inline ArrayList_t3465324181 * get_elist_2() const { return ___elist_2; }
	inline ArrayList_t3465324181 ** get_address_of_elist_2() { return &___elist_2; }
	inline void set_elist_2(ArrayList_t3465324181 * value)
	{
		___elist_2 = value;
		Il2CppCodeGenWriteBarrier((&___elist_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASN1_T861964270_H
#ifndef PRIMEGENERATORBASE_T116314699_H
#define PRIMEGENERATORBASE_T116314699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.Generator.PrimeGeneratorBase
struct  PrimeGeneratorBase_t116314699  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMEGENERATORBASE_T116314699_H
#ifndef PRIMALITYTESTS_T1291273643_H
#define PRIMALITYTESTS_T1291273643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.PrimalityTests
struct  PrimalityTests_t1291273643  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIMALITYTESTS_T1291273643_H
#ifndef MODULUSRING_T2465186821_H
#define MODULUSRING_T2465186821_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/ModulusRing
struct  ModulusRing_t2465186821  : public RuntimeObject
{
public:
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::mod
	BigInteger_t1084564621 * ___mod_0;
	// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::constant
	BigInteger_t1084564621 * ___constant_1;

public:
	inline static int32_t get_offset_of_mod_0() { return static_cast<int32_t>(offsetof(ModulusRing_t2465186821, ___mod_0)); }
	inline BigInteger_t1084564621 * get_mod_0() const { return ___mod_0; }
	inline BigInteger_t1084564621 ** get_address_of_mod_0() { return &___mod_0; }
	inline void set_mod_0(BigInteger_t1084564621 * value)
	{
		___mod_0 = value;
		Il2CppCodeGenWriteBarrier((&___mod_0), value);
	}

	inline static int32_t get_offset_of_constant_1() { return static_cast<int32_t>(offsetof(ModulusRing_t2465186821, ___constant_1)); }
	inline BigInteger_t1084564621 * get_constant_1() const { return ___constant_1; }
	inline BigInteger_t1084564621 ** get_address_of_constant_1() { return &___constant_1; }
	inline void set_constant_1(BigInteger_t1084564621 * value)
	{
		___constant_1 = value;
		Il2CppCodeGenWriteBarrier((&___constant_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULUSRING_T2465186821_H
#ifndef BIGINTEGER_T1084564621_H
#define BIGINTEGER_T1084564621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger
struct  BigInteger_t1084564621  : public RuntimeObject
{
public:
	// System.UInt32 Mono.Math.BigInteger::length
	uint32_t ___length_0;
	// System.UInt32[] Mono.Math.BigInteger::data
	UInt32U5BU5D_t1435100350* ___data_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(BigInteger_t1084564621, ___length_0)); }
	inline uint32_t get_length_0() const { return ___length_0; }
	inline uint32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(uint32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(BigInteger_t1084564621, ___data_1)); }
	inline UInt32U5BU5D_t1435100350* get_data_1() const { return ___data_1; }
	inline UInt32U5BU5D_t1435100350** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(UInt32U5BU5D_t1435100350* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier((&___data_1), value);
	}
};

struct BigInteger_t1084564621_StaticFields
{
public:
	// System.UInt32[] Mono.Math.BigInteger::smallPrimes
	UInt32U5BU5D_t1435100350* ___smallPrimes_2;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::rng
	RandomNumberGenerator_t3143434466 * ___rng_3;

public:
	inline static int32_t get_offset_of_smallPrimes_2() { return static_cast<int32_t>(offsetof(BigInteger_t1084564621_StaticFields, ___smallPrimes_2)); }
	inline UInt32U5BU5D_t1435100350* get_smallPrimes_2() const { return ___smallPrimes_2; }
	inline UInt32U5BU5D_t1435100350** get_address_of_smallPrimes_2() { return &___smallPrimes_2; }
	inline void set_smallPrimes_2(UInt32U5BU5D_t1435100350* value)
	{
		___smallPrimes_2 = value;
		Il2CppCodeGenWriteBarrier((&___smallPrimes_2), value);
	}

	inline static int32_t get_offset_of_rng_3() { return static_cast<int32_t>(offsetof(BigInteger_t1084564621_StaticFields, ___rng_3)); }
	inline RandomNumberGenerator_t3143434466 * get_rng_3() const { return ___rng_3; }
	inline RandomNumberGenerator_t3143434466 ** get_address_of_rng_3() { return &___rng_3; }
	inline void set_rng_3(RandomNumberGenerator_t3143434466 * value)
	{
		___rng_3 = value;
		Il2CppCodeGenWriteBarrier((&___rng_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BIGINTEGER_T1084564621_H
#ifndef LOCALE_T407866135_H
#define LOCALE_T407866135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Locale
struct  Locale_t407866135  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALE_T407866135_H
#ifndef KEYBUILDER_T1458420160_H
#define KEYBUILDER_T1458420160_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.KeyBuilder
struct  KeyBuilder_t1458420160  : public RuntimeObject
{
public:

public:
};

struct KeyBuilder_t1458420160_StaticFields
{
public:
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.KeyBuilder::rng
	RandomNumberGenerator_t3143434466 * ___rng_0;

public:
	inline static int32_t get_offset_of_rng_0() { return static_cast<int32_t>(offsetof(KeyBuilder_t1458420160_StaticFields, ___rng_0)); }
	inline RandomNumberGenerator_t3143434466 * get_rng_0() const { return ___rng_0; }
	inline RandomNumberGenerator_t3143434466 ** get_address_of_rng_0() { return &___rng_0; }
	inline void set_rng_0(RandomNumberGenerator_t3143434466 * value)
	{
		___rng_0 = value;
		Il2CppCodeGenWriteBarrier((&___rng_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYBUILDER_T1458420160_H
#ifndef PKCS1_T3171997226_H
#define PKCS1_T3171997226_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS1
struct  PKCS1_t3171997226  : public RuntimeObject
{
public:

public:
};

struct PKCS1_t3171997226_StaticFields
{
public:
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA1
	ByteU5BU5D_t317375469* ___emptySHA1_0;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA256
	ByteU5BU5D_t317375469* ___emptySHA256_1;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA384
	ByteU5BU5D_t317375469* ___emptySHA384_2;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA512
	ByteU5BU5D_t317375469* ___emptySHA512_3;

public:
	inline static int32_t get_offset_of_emptySHA1_0() { return static_cast<int32_t>(offsetof(PKCS1_t3171997226_StaticFields, ___emptySHA1_0)); }
	inline ByteU5BU5D_t317375469* get_emptySHA1_0() const { return ___emptySHA1_0; }
	inline ByteU5BU5D_t317375469** get_address_of_emptySHA1_0() { return &___emptySHA1_0; }
	inline void set_emptySHA1_0(ByteU5BU5D_t317375469* value)
	{
		___emptySHA1_0 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA1_0), value);
	}

	inline static int32_t get_offset_of_emptySHA256_1() { return static_cast<int32_t>(offsetof(PKCS1_t3171997226_StaticFields, ___emptySHA256_1)); }
	inline ByteU5BU5D_t317375469* get_emptySHA256_1() const { return ___emptySHA256_1; }
	inline ByteU5BU5D_t317375469** get_address_of_emptySHA256_1() { return &___emptySHA256_1; }
	inline void set_emptySHA256_1(ByteU5BU5D_t317375469* value)
	{
		___emptySHA256_1 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA256_1), value);
	}

	inline static int32_t get_offset_of_emptySHA384_2() { return static_cast<int32_t>(offsetof(PKCS1_t3171997226_StaticFields, ___emptySHA384_2)); }
	inline ByteU5BU5D_t317375469* get_emptySHA384_2() const { return ___emptySHA384_2; }
	inline ByteU5BU5D_t317375469** get_address_of_emptySHA384_2() { return &___emptySHA384_2; }
	inline void set_emptySHA384_2(ByteU5BU5D_t317375469* value)
	{
		___emptySHA384_2 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA384_2), value);
	}

	inline static int32_t get_offset_of_emptySHA512_3() { return static_cast<int32_t>(offsetof(PKCS1_t3171997226_StaticFields, ___emptySHA512_3)); }
	inline ByteU5BU5D_t317375469* get_emptySHA512_3() const { return ___emptySHA512_3; }
	inline ByteU5BU5D_t317375469** get_address_of_emptySHA512_3() { return &___emptySHA512_3; }
	inline void set_emptySHA512_3(ByteU5BU5D_t317375469* value)
	{
		___emptySHA512_3 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA512_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS1_T3171997226_H
#ifndef PKCS8_T2986338474_H
#define PKCS8_T2986338474_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8
struct  PKCS8_t2986338474  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS8_T2986338474_H
#ifndef PRIVATEKEYINFO_T1859457149_H
#define PRIVATEKEYINFO_T1859457149_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct  PrivateKeyInfo_t1859457149  : public RuntimeObject
{
public:
	// System.Int32 Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_version
	int32_t ____version_0;
	// System.String Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_algorithm
	String_t* ____algorithm_1;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_key
	ByteU5BU5D_t317375469* ____key_2;
	// System.Collections.ArrayList Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_list
	ArrayList_t3465324181 * ____list_3;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t1859457149, ____version_0)); }
	inline int32_t get__version_0() const { return ____version_0; }
	inline int32_t* get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(int32_t value)
	{
		____version_0 = value;
	}

	inline static int32_t get_offset_of__algorithm_1() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t1859457149, ____algorithm_1)); }
	inline String_t* get__algorithm_1() const { return ____algorithm_1; }
	inline String_t** get_address_of__algorithm_1() { return &____algorithm_1; }
	inline void set__algorithm_1(String_t* value)
	{
		____algorithm_1 = value;
		Il2CppCodeGenWriteBarrier((&____algorithm_1), value);
	}

	inline static int32_t get_offset_of__key_2() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t1859457149, ____key_2)); }
	inline ByteU5BU5D_t317375469* get__key_2() const { return ____key_2; }
	inline ByteU5BU5D_t317375469** get_address_of__key_2() { return &____key_2; }
	inline void set__key_2(ByteU5BU5D_t317375469* value)
	{
		____key_2 = value;
		Il2CppCodeGenWriteBarrier((&____key_2), value);
	}

	inline static int32_t get_offset_of__list_3() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t1859457149, ____list_3)); }
	inline ArrayList_t3465324181 * get__list_3() const { return ____list_3; }
	inline ArrayList_t3465324181 ** get_address_of__list_3() { return &____list_3; }
	inline void set__list_3(ArrayList_t3465324181 * value)
	{
		____list_3 = value;
		Il2CppCodeGenWriteBarrier((&____list_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIVATEKEYINFO_T1859457149_H
#ifndef ENCRYPTEDPRIVATEKEYINFO_T1654034337_H
#define ENCRYPTEDPRIVATEKEYINFO_T1654034337_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo
struct  EncryptedPrivateKeyInfo_t1654034337  : public RuntimeObject
{
public:
	// System.String Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_algorithm
	String_t* ____algorithm_0;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_salt
	ByteU5BU5D_t317375469* ____salt_1;
	// System.Int32 Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_iterations
	int32_t ____iterations_2;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_data
	ByteU5BU5D_t317375469* ____data_3;

public:
	inline static int32_t get_offset_of__algorithm_0() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t1654034337, ____algorithm_0)); }
	inline String_t* get__algorithm_0() const { return ____algorithm_0; }
	inline String_t** get_address_of__algorithm_0() { return &____algorithm_0; }
	inline void set__algorithm_0(String_t* value)
	{
		____algorithm_0 = value;
		Il2CppCodeGenWriteBarrier((&____algorithm_0), value);
	}

	inline static int32_t get_offset_of__salt_1() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t1654034337, ____salt_1)); }
	inline ByteU5BU5D_t317375469* get__salt_1() const { return ____salt_1; }
	inline ByteU5BU5D_t317375469** get_address_of__salt_1() { return &____salt_1; }
	inline void set__salt_1(ByteU5BU5D_t317375469* value)
	{
		____salt_1 = value;
		Il2CppCodeGenWriteBarrier((&____salt_1), value);
	}

	inline static int32_t get_offset_of__iterations_2() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t1654034337, ____iterations_2)); }
	inline int32_t get__iterations_2() const { return ____iterations_2; }
	inline int32_t* get_address_of__iterations_2() { return &____iterations_2; }
	inline void set__iterations_2(int32_t value)
	{
		____iterations_2 = value;
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t1654034337, ____data_3)); }
	inline ByteU5BU5D_t317375469* get__data_3() const { return ____data_3; }
	inline ByteU5BU5D_t317375469** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(ByteU5BU5D_t317375469* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTEDPRIVATEKEYINFO_T1654034337_H
#ifndef SAFEBAG_T2053266357_H
#define SAFEBAG_T2053266357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.SafeBag
struct  SafeBag_t2053266357  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.SafeBag::_bagOID
	String_t* ____bagOID_0;
	// Mono.Security.ASN1 Mono.Security.X509.SafeBag::_asn1
	ASN1_t861964270 * ____asn1_1;

public:
	inline static int32_t get_offset_of__bagOID_0() { return static_cast<int32_t>(offsetof(SafeBag_t2053266357, ____bagOID_0)); }
	inline String_t* get__bagOID_0() const { return ____bagOID_0; }
	inline String_t** get_address_of__bagOID_0() { return &____bagOID_0; }
	inline void set__bagOID_0(String_t* value)
	{
		____bagOID_0 = value;
		Il2CppCodeGenWriteBarrier((&____bagOID_0), value);
	}

	inline static int32_t get_offset_of__asn1_1() { return static_cast<int32_t>(offsetof(SafeBag_t2053266357, ____asn1_1)); }
	inline ASN1_t861964270 * get__asn1_1() const { return ____asn1_1; }
	inline ASN1_t861964270 ** get_address_of__asn1_1() { return &____asn1_1; }
	inline void set__asn1_1(ASN1_t861964270 * value)
	{
		____asn1_1 = value;
		Il2CppCodeGenWriteBarrier((&____asn1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEBAG_T2053266357_H
#ifndef PKCS12_T2998387735_H
#define PKCS12_T2998387735_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS12
struct  PKCS12_t2998387735  : public RuntimeObject
{
public:
	// System.Byte[] Mono.Security.X509.PKCS12::_password
	ByteU5BU5D_t317375469* ____password_1;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_keyBags
	ArrayList_t3465324181 * ____keyBags_2;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_secretBags
	ArrayList_t3465324181 * ____secretBags_3;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::_certs
	X509CertificateCollection_t1330376034 * ____certs_4;
	// System.Boolean Mono.Security.X509.PKCS12::_keyBagsChanged
	bool ____keyBagsChanged_5;
	// System.Boolean Mono.Security.X509.PKCS12::_secretBagsChanged
	bool ____secretBagsChanged_6;
	// System.Boolean Mono.Security.X509.PKCS12::_certsChanged
	bool ____certsChanged_7;
	// System.Int32 Mono.Security.X509.PKCS12::_iterations
	int32_t ____iterations_8;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_safeBags
	ArrayList_t3465324181 * ____safeBags_9;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.X509.PKCS12::_rng
	RandomNumberGenerator_t3143434466 * ____rng_10;

public:
	inline static int32_t get_offset_of__password_1() { return static_cast<int32_t>(offsetof(PKCS12_t2998387735, ____password_1)); }
	inline ByteU5BU5D_t317375469* get__password_1() const { return ____password_1; }
	inline ByteU5BU5D_t317375469** get_address_of__password_1() { return &____password_1; }
	inline void set__password_1(ByteU5BU5D_t317375469* value)
	{
		____password_1 = value;
		Il2CppCodeGenWriteBarrier((&____password_1), value);
	}

	inline static int32_t get_offset_of__keyBags_2() { return static_cast<int32_t>(offsetof(PKCS12_t2998387735, ____keyBags_2)); }
	inline ArrayList_t3465324181 * get__keyBags_2() const { return ____keyBags_2; }
	inline ArrayList_t3465324181 ** get_address_of__keyBags_2() { return &____keyBags_2; }
	inline void set__keyBags_2(ArrayList_t3465324181 * value)
	{
		____keyBags_2 = value;
		Il2CppCodeGenWriteBarrier((&____keyBags_2), value);
	}

	inline static int32_t get_offset_of__secretBags_3() { return static_cast<int32_t>(offsetof(PKCS12_t2998387735, ____secretBags_3)); }
	inline ArrayList_t3465324181 * get__secretBags_3() const { return ____secretBags_3; }
	inline ArrayList_t3465324181 ** get_address_of__secretBags_3() { return &____secretBags_3; }
	inline void set__secretBags_3(ArrayList_t3465324181 * value)
	{
		____secretBags_3 = value;
		Il2CppCodeGenWriteBarrier((&____secretBags_3), value);
	}

	inline static int32_t get_offset_of__certs_4() { return static_cast<int32_t>(offsetof(PKCS12_t2998387735, ____certs_4)); }
	inline X509CertificateCollection_t1330376034 * get__certs_4() const { return ____certs_4; }
	inline X509CertificateCollection_t1330376034 ** get_address_of__certs_4() { return &____certs_4; }
	inline void set__certs_4(X509CertificateCollection_t1330376034 * value)
	{
		____certs_4 = value;
		Il2CppCodeGenWriteBarrier((&____certs_4), value);
	}

	inline static int32_t get_offset_of__keyBagsChanged_5() { return static_cast<int32_t>(offsetof(PKCS12_t2998387735, ____keyBagsChanged_5)); }
	inline bool get__keyBagsChanged_5() const { return ____keyBagsChanged_5; }
	inline bool* get_address_of__keyBagsChanged_5() { return &____keyBagsChanged_5; }
	inline void set__keyBagsChanged_5(bool value)
	{
		____keyBagsChanged_5 = value;
	}

	inline static int32_t get_offset_of__secretBagsChanged_6() { return static_cast<int32_t>(offsetof(PKCS12_t2998387735, ____secretBagsChanged_6)); }
	inline bool get__secretBagsChanged_6() const { return ____secretBagsChanged_6; }
	inline bool* get_address_of__secretBagsChanged_6() { return &____secretBagsChanged_6; }
	inline void set__secretBagsChanged_6(bool value)
	{
		____secretBagsChanged_6 = value;
	}

	inline static int32_t get_offset_of__certsChanged_7() { return static_cast<int32_t>(offsetof(PKCS12_t2998387735, ____certsChanged_7)); }
	inline bool get__certsChanged_7() const { return ____certsChanged_7; }
	inline bool* get_address_of__certsChanged_7() { return &____certsChanged_7; }
	inline void set__certsChanged_7(bool value)
	{
		____certsChanged_7 = value;
	}

	inline static int32_t get_offset_of__iterations_8() { return static_cast<int32_t>(offsetof(PKCS12_t2998387735, ____iterations_8)); }
	inline int32_t get__iterations_8() const { return ____iterations_8; }
	inline int32_t* get_address_of__iterations_8() { return &____iterations_8; }
	inline void set__iterations_8(int32_t value)
	{
		____iterations_8 = value;
	}

	inline static int32_t get_offset_of__safeBags_9() { return static_cast<int32_t>(offsetof(PKCS12_t2998387735, ____safeBags_9)); }
	inline ArrayList_t3465324181 * get__safeBags_9() const { return ____safeBags_9; }
	inline ArrayList_t3465324181 ** get_address_of__safeBags_9() { return &____safeBags_9; }
	inline void set__safeBags_9(ArrayList_t3465324181 * value)
	{
		____safeBags_9 = value;
		Il2CppCodeGenWriteBarrier((&____safeBags_9), value);
	}

	inline static int32_t get_offset_of__rng_10() { return static_cast<int32_t>(offsetof(PKCS12_t2998387735, ____rng_10)); }
	inline RandomNumberGenerator_t3143434466 * get__rng_10() const { return ____rng_10; }
	inline RandomNumberGenerator_t3143434466 ** get_address_of__rng_10() { return &____rng_10; }
	inline void set__rng_10(RandomNumberGenerator_t3143434466 * value)
	{
		____rng_10 = value;
		Il2CppCodeGenWriteBarrier((&____rng_10), value);
	}
};

struct PKCS12_t2998387735_StaticFields
{
public:
	// System.Int32 Mono.Security.X509.PKCS12::recommendedIterationCount
	int32_t ___recommendedIterationCount_0;
	// System.Int32 Mono.Security.X509.PKCS12::password_max_length
	int32_t ___password_max_length_11;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map5
	Dictionary_2_t415537980 * ___U3CU3Ef__switchU24map5_12;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map6
	Dictionary_2_t415537980 * ___U3CU3Ef__switchU24map6_13;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map7
	Dictionary_2_t415537980 * ___U3CU3Ef__switchU24map7_14;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map8
	Dictionary_2_t415537980 * ___U3CU3Ef__switchU24map8_15;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$mapC
	Dictionary_2_t415537980 * ___U3CU3Ef__switchU24mapC_16;

public:
	inline static int32_t get_offset_of_recommendedIterationCount_0() { return static_cast<int32_t>(offsetof(PKCS12_t2998387735_StaticFields, ___recommendedIterationCount_0)); }
	inline int32_t get_recommendedIterationCount_0() const { return ___recommendedIterationCount_0; }
	inline int32_t* get_address_of_recommendedIterationCount_0() { return &___recommendedIterationCount_0; }
	inline void set_recommendedIterationCount_0(int32_t value)
	{
		___recommendedIterationCount_0 = value;
	}

	inline static int32_t get_offset_of_password_max_length_11() { return static_cast<int32_t>(offsetof(PKCS12_t2998387735_StaticFields, ___password_max_length_11)); }
	inline int32_t get_password_max_length_11() const { return ___password_max_length_11; }
	inline int32_t* get_address_of_password_max_length_11() { return &___password_max_length_11; }
	inline void set_password_max_length_11(int32_t value)
	{
		___password_max_length_11 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map5_12() { return static_cast<int32_t>(offsetof(PKCS12_t2998387735_StaticFields, ___U3CU3Ef__switchU24map5_12)); }
	inline Dictionary_2_t415537980 * get_U3CU3Ef__switchU24map5_12() const { return ___U3CU3Ef__switchU24map5_12; }
	inline Dictionary_2_t415537980 ** get_address_of_U3CU3Ef__switchU24map5_12() { return &___U3CU3Ef__switchU24map5_12; }
	inline void set_U3CU3Ef__switchU24map5_12(Dictionary_2_t415537980 * value)
	{
		___U3CU3Ef__switchU24map5_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map5_12), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map6_13() { return static_cast<int32_t>(offsetof(PKCS12_t2998387735_StaticFields, ___U3CU3Ef__switchU24map6_13)); }
	inline Dictionary_2_t415537980 * get_U3CU3Ef__switchU24map6_13() const { return ___U3CU3Ef__switchU24map6_13; }
	inline Dictionary_2_t415537980 ** get_address_of_U3CU3Ef__switchU24map6_13() { return &___U3CU3Ef__switchU24map6_13; }
	inline void set_U3CU3Ef__switchU24map6_13(Dictionary_2_t415537980 * value)
	{
		___U3CU3Ef__switchU24map6_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map6_13), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map7_14() { return static_cast<int32_t>(offsetof(PKCS12_t2998387735_StaticFields, ___U3CU3Ef__switchU24map7_14)); }
	inline Dictionary_2_t415537980 * get_U3CU3Ef__switchU24map7_14() const { return ___U3CU3Ef__switchU24map7_14; }
	inline Dictionary_2_t415537980 ** get_address_of_U3CU3Ef__switchU24map7_14() { return &___U3CU3Ef__switchU24map7_14; }
	inline void set_U3CU3Ef__switchU24map7_14(Dictionary_2_t415537980 * value)
	{
		___U3CU3Ef__switchU24map7_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map7_14), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map8_15() { return static_cast<int32_t>(offsetof(PKCS12_t2998387735_StaticFields, ___U3CU3Ef__switchU24map8_15)); }
	inline Dictionary_2_t415537980 * get_U3CU3Ef__switchU24map8_15() const { return ___U3CU3Ef__switchU24map8_15; }
	inline Dictionary_2_t415537980 ** get_address_of_U3CU3Ef__switchU24map8_15() { return &___U3CU3Ef__switchU24map8_15; }
	inline void set_U3CU3Ef__switchU24map8_15(Dictionary_2_t415537980 * value)
	{
		___U3CU3Ef__switchU24map8_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map8_15), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapC_16() { return static_cast<int32_t>(offsetof(PKCS12_t2998387735_StaticFields, ___U3CU3Ef__switchU24mapC_16)); }
	inline Dictionary_2_t415537980 * get_U3CU3Ef__switchU24mapC_16() const { return ___U3CU3Ef__switchU24mapC_16; }
	inline Dictionary_2_t415537980 ** get_address_of_U3CU3Ef__switchU24mapC_16() { return &___U3CU3Ef__switchU24mapC_16; }
	inline void set_U3CU3Ef__switchU24mapC_16(Dictionary_2_t415537980 * value)
	{
		___U3CU3Ef__switchU24mapC_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapC_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS12_T2998387735_H
#ifndef DERIVEBYTES_T2950817440_H
#define DERIVEBYTES_T2950817440_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS12/DeriveBytes
struct  DeriveBytes_t2950817440  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.PKCS12/DeriveBytes::_hashName
	String_t* ____hashName_3;
	// System.Int32 Mono.Security.X509.PKCS12/DeriveBytes::_iterations
	int32_t ____iterations_4;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::_password
	ByteU5BU5D_t317375469* ____password_5;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::_salt
	ByteU5BU5D_t317375469* ____salt_6;

public:
	inline static int32_t get_offset_of__hashName_3() { return static_cast<int32_t>(offsetof(DeriveBytes_t2950817440, ____hashName_3)); }
	inline String_t* get__hashName_3() const { return ____hashName_3; }
	inline String_t** get_address_of__hashName_3() { return &____hashName_3; }
	inline void set__hashName_3(String_t* value)
	{
		____hashName_3 = value;
		Il2CppCodeGenWriteBarrier((&____hashName_3), value);
	}

	inline static int32_t get_offset_of__iterations_4() { return static_cast<int32_t>(offsetof(DeriveBytes_t2950817440, ____iterations_4)); }
	inline int32_t get__iterations_4() const { return ____iterations_4; }
	inline int32_t* get_address_of__iterations_4() { return &____iterations_4; }
	inline void set__iterations_4(int32_t value)
	{
		____iterations_4 = value;
	}

	inline static int32_t get_offset_of__password_5() { return static_cast<int32_t>(offsetof(DeriveBytes_t2950817440, ____password_5)); }
	inline ByteU5BU5D_t317375469* get__password_5() const { return ____password_5; }
	inline ByteU5BU5D_t317375469** get_address_of__password_5() { return &____password_5; }
	inline void set__password_5(ByteU5BU5D_t317375469* value)
	{
		____password_5 = value;
		Il2CppCodeGenWriteBarrier((&____password_5), value);
	}

	inline static int32_t get_offset_of__salt_6() { return static_cast<int32_t>(offsetof(DeriveBytes_t2950817440, ____salt_6)); }
	inline ByteU5BU5D_t317375469* get__salt_6() const { return ____salt_6; }
	inline ByteU5BU5D_t317375469** get_address_of__salt_6() { return &____salt_6; }
	inline void set__salt_6(ByteU5BU5D_t317375469* value)
	{
		____salt_6 = value;
		Il2CppCodeGenWriteBarrier((&____salt_6), value);
	}
};

struct DeriveBytes_t2950817440_StaticFields
{
public:
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::keyDiversifier
	ByteU5BU5D_t317375469* ___keyDiversifier_0;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::ivDiversifier
	ByteU5BU5D_t317375469* ___ivDiversifier_1;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::macDiversifier
	ByteU5BU5D_t317375469* ___macDiversifier_2;

public:
	inline static int32_t get_offset_of_keyDiversifier_0() { return static_cast<int32_t>(offsetof(DeriveBytes_t2950817440_StaticFields, ___keyDiversifier_0)); }
	inline ByteU5BU5D_t317375469* get_keyDiversifier_0() const { return ___keyDiversifier_0; }
	inline ByteU5BU5D_t317375469** get_address_of_keyDiversifier_0() { return &___keyDiversifier_0; }
	inline void set_keyDiversifier_0(ByteU5BU5D_t317375469* value)
	{
		___keyDiversifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyDiversifier_0), value);
	}

	inline static int32_t get_offset_of_ivDiversifier_1() { return static_cast<int32_t>(offsetof(DeriveBytes_t2950817440_StaticFields, ___ivDiversifier_1)); }
	inline ByteU5BU5D_t317375469* get_ivDiversifier_1() const { return ___ivDiversifier_1; }
	inline ByteU5BU5D_t317375469** get_address_of_ivDiversifier_1() { return &___ivDiversifier_1; }
	inline void set_ivDiversifier_1(ByteU5BU5D_t317375469* value)
	{
		___ivDiversifier_1 = value;
		Il2CppCodeGenWriteBarrier((&___ivDiversifier_1), value);
	}

	inline static int32_t get_offset_of_macDiversifier_2() { return static_cast<int32_t>(offsetof(DeriveBytes_t2950817440_StaticFields, ___macDiversifier_2)); }
	inline ByteU5BU5D_t317375469* get_macDiversifier_2() const { return ___macDiversifier_2; }
	inline ByteU5BU5D_t317375469** get_address_of_macDiversifier_2() { return &___macDiversifier_2; }
	inline void set_macDiversifier_2(ByteU5BU5D_t317375469* value)
	{
		___macDiversifier_2 = value;
		Il2CppCodeGenWriteBarrier((&___macDiversifier_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DERIVEBYTES_T2950817440_H
#ifndef X501_T1982414714_H
#define X501_T1982414714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X501
struct  X501_t1982414714  : public RuntimeObject
{
public:

public:
};

struct X501_t1982414714_StaticFields
{
public:
	// System.Byte[] Mono.Security.X509.X501::countryName
	ByteU5BU5D_t317375469* ___countryName_0;
	// System.Byte[] Mono.Security.X509.X501::organizationName
	ByteU5BU5D_t317375469* ___organizationName_1;
	// System.Byte[] Mono.Security.X509.X501::organizationalUnitName
	ByteU5BU5D_t317375469* ___organizationalUnitName_2;
	// System.Byte[] Mono.Security.X509.X501::commonName
	ByteU5BU5D_t317375469* ___commonName_3;
	// System.Byte[] Mono.Security.X509.X501::localityName
	ByteU5BU5D_t317375469* ___localityName_4;
	// System.Byte[] Mono.Security.X509.X501::stateOrProvinceName
	ByteU5BU5D_t317375469* ___stateOrProvinceName_5;
	// System.Byte[] Mono.Security.X509.X501::streetAddress
	ByteU5BU5D_t317375469* ___streetAddress_6;
	// System.Byte[] Mono.Security.X509.X501::domainComponent
	ByteU5BU5D_t317375469* ___domainComponent_7;
	// System.Byte[] Mono.Security.X509.X501::userid
	ByteU5BU5D_t317375469* ___userid_8;
	// System.Byte[] Mono.Security.X509.X501::email
	ByteU5BU5D_t317375469* ___email_9;
	// System.Byte[] Mono.Security.X509.X501::dnQualifier
	ByteU5BU5D_t317375469* ___dnQualifier_10;
	// System.Byte[] Mono.Security.X509.X501::title
	ByteU5BU5D_t317375469* ___title_11;
	// System.Byte[] Mono.Security.X509.X501::surname
	ByteU5BU5D_t317375469* ___surname_12;
	// System.Byte[] Mono.Security.X509.X501::givenName
	ByteU5BU5D_t317375469* ___givenName_13;
	// System.Byte[] Mono.Security.X509.X501::initial
	ByteU5BU5D_t317375469* ___initial_14;

public:
	inline static int32_t get_offset_of_countryName_0() { return static_cast<int32_t>(offsetof(X501_t1982414714_StaticFields, ___countryName_0)); }
	inline ByteU5BU5D_t317375469* get_countryName_0() const { return ___countryName_0; }
	inline ByteU5BU5D_t317375469** get_address_of_countryName_0() { return &___countryName_0; }
	inline void set_countryName_0(ByteU5BU5D_t317375469* value)
	{
		___countryName_0 = value;
		Il2CppCodeGenWriteBarrier((&___countryName_0), value);
	}

	inline static int32_t get_offset_of_organizationName_1() { return static_cast<int32_t>(offsetof(X501_t1982414714_StaticFields, ___organizationName_1)); }
	inline ByteU5BU5D_t317375469* get_organizationName_1() const { return ___organizationName_1; }
	inline ByteU5BU5D_t317375469** get_address_of_organizationName_1() { return &___organizationName_1; }
	inline void set_organizationName_1(ByteU5BU5D_t317375469* value)
	{
		___organizationName_1 = value;
		Il2CppCodeGenWriteBarrier((&___organizationName_1), value);
	}

	inline static int32_t get_offset_of_organizationalUnitName_2() { return static_cast<int32_t>(offsetof(X501_t1982414714_StaticFields, ___organizationalUnitName_2)); }
	inline ByteU5BU5D_t317375469* get_organizationalUnitName_2() const { return ___organizationalUnitName_2; }
	inline ByteU5BU5D_t317375469** get_address_of_organizationalUnitName_2() { return &___organizationalUnitName_2; }
	inline void set_organizationalUnitName_2(ByteU5BU5D_t317375469* value)
	{
		___organizationalUnitName_2 = value;
		Il2CppCodeGenWriteBarrier((&___organizationalUnitName_2), value);
	}

	inline static int32_t get_offset_of_commonName_3() { return static_cast<int32_t>(offsetof(X501_t1982414714_StaticFields, ___commonName_3)); }
	inline ByteU5BU5D_t317375469* get_commonName_3() const { return ___commonName_3; }
	inline ByteU5BU5D_t317375469** get_address_of_commonName_3() { return &___commonName_3; }
	inline void set_commonName_3(ByteU5BU5D_t317375469* value)
	{
		___commonName_3 = value;
		Il2CppCodeGenWriteBarrier((&___commonName_3), value);
	}

	inline static int32_t get_offset_of_localityName_4() { return static_cast<int32_t>(offsetof(X501_t1982414714_StaticFields, ___localityName_4)); }
	inline ByteU5BU5D_t317375469* get_localityName_4() const { return ___localityName_4; }
	inline ByteU5BU5D_t317375469** get_address_of_localityName_4() { return &___localityName_4; }
	inline void set_localityName_4(ByteU5BU5D_t317375469* value)
	{
		___localityName_4 = value;
		Il2CppCodeGenWriteBarrier((&___localityName_4), value);
	}

	inline static int32_t get_offset_of_stateOrProvinceName_5() { return static_cast<int32_t>(offsetof(X501_t1982414714_StaticFields, ___stateOrProvinceName_5)); }
	inline ByteU5BU5D_t317375469* get_stateOrProvinceName_5() const { return ___stateOrProvinceName_5; }
	inline ByteU5BU5D_t317375469** get_address_of_stateOrProvinceName_5() { return &___stateOrProvinceName_5; }
	inline void set_stateOrProvinceName_5(ByteU5BU5D_t317375469* value)
	{
		___stateOrProvinceName_5 = value;
		Il2CppCodeGenWriteBarrier((&___stateOrProvinceName_5), value);
	}

	inline static int32_t get_offset_of_streetAddress_6() { return static_cast<int32_t>(offsetof(X501_t1982414714_StaticFields, ___streetAddress_6)); }
	inline ByteU5BU5D_t317375469* get_streetAddress_6() const { return ___streetAddress_6; }
	inline ByteU5BU5D_t317375469** get_address_of_streetAddress_6() { return &___streetAddress_6; }
	inline void set_streetAddress_6(ByteU5BU5D_t317375469* value)
	{
		___streetAddress_6 = value;
		Il2CppCodeGenWriteBarrier((&___streetAddress_6), value);
	}

	inline static int32_t get_offset_of_domainComponent_7() { return static_cast<int32_t>(offsetof(X501_t1982414714_StaticFields, ___domainComponent_7)); }
	inline ByteU5BU5D_t317375469* get_domainComponent_7() const { return ___domainComponent_7; }
	inline ByteU5BU5D_t317375469** get_address_of_domainComponent_7() { return &___domainComponent_7; }
	inline void set_domainComponent_7(ByteU5BU5D_t317375469* value)
	{
		___domainComponent_7 = value;
		Il2CppCodeGenWriteBarrier((&___domainComponent_7), value);
	}

	inline static int32_t get_offset_of_userid_8() { return static_cast<int32_t>(offsetof(X501_t1982414714_StaticFields, ___userid_8)); }
	inline ByteU5BU5D_t317375469* get_userid_8() const { return ___userid_8; }
	inline ByteU5BU5D_t317375469** get_address_of_userid_8() { return &___userid_8; }
	inline void set_userid_8(ByteU5BU5D_t317375469* value)
	{
		___userid_8 = value;
		Il2CppCodeGenWriteBarrier((&___userid_8), value);
	}

	inline static int32_t get_offset_of_email_9() { return static_cast<int32_t>(offsetof(X501_t1982414714_StaticFields, ___email_9)); }
	inline ByteU5BU5D_t317375469* get_email_9() const { return ___email_9; }
	inline ByteU5BU5D_t317375469** get_address_of_email_9() { return &___email_9; }
	inline void set_email_9(ByteU5BU5D_t317375469* value)
	{
		___email_9 = value;
		Il2CppCodeGenWriteBarrier((&___email_9), value);
	}

	inline static int32_t get_offset_of_dnQualifier_10() { return static_cast<int32_t>(offsetof(X501_t1982414714_StaticFields, ___dnQualifier_10)); }
	inline ByteU5BU5D_t317375469* get_dnQualifier_10() const { return ___dnQualifier_10; }
	inline ByteU5BU5D_t317375469** get_address_of_dnQualifier_10() { return &___dnQualifier_10; }
	inline void set_dnQualifier_10(ByteU5BU5D_t317375469* value)
	{
		___dnQualifier_10 = value;
		Il2CppCodeGenWriteBarrier((&___dnQualifier_10), value);
	}

	inline static int32_t get_offset_of_title_11() { return static_cast<int32_t>(offsetof(X501_t1982414714_StaticFields, ___title_11)); }
	inline ByteU5BU5D_t317375469* get_title_11() const { return ___title_11; }
	inline ByteU5BU5D_t317375469** get_address_of_title_11() { return &___title_11; }
	inline void set_title_11(ByteU5BU5D_t317375469* value)
	{
		___title_11 = value;
		Il2CppCodeGenWriteBarrier((&___title_11), value);
	}

	inline static int32_t get_offset_of_surname_12() { return static_cast<int32_t>(offsetof(X501_t1982414714_StaticFields, ___surname_12)); }
	inline ByteU5BU5D_t317375469* get_surname_12() const { return ___surname_12; }
	inline ByteU5BU5D_t317375469** get_address_of_surname_12() { return &___surname_12; }
	inline void set_surname_12(ByteU5BU5D_t317375469* value)
	{
		___surname_12 = value;
		Il2CppCodeGenWriteBarrier((&___surname_12), value);
	}

	inline static int32_t get_offset_of_givenName_13() { return static_cast<int32_t>(offsetof(X501_t1982414714_StaticFields, ___givenName_13)); }
	inline ByteU5BU5D_t317375469* get_givenName_13() const { return ___givenName_13; }
	inline ByteU5BU5D_t317375469** get_address_of_givenName_13() { return &___givenName_13; }
	inline void set_givenName_13(ByteU5BU5D_t317375469* value)
	{
		___givenName_13 = value;
		Il2CppCodeGenWriteBarrier((&___givenName_13), value);
	}

	inline static int32_t get_offset_of_initial_14() { return static_cast<int32_t>(offsetof(X501_t1982414714_StaticFields, ___initial_14)); }
	inline ByteU5BU5D_t317375469* get_initial_14() const { return ___initial_14; }
	inline ByteU5BU5D_t317375469** get_address_of_initial_14() { return &___initial_14; }
	inline void set_initial_14(ByteU5BU5D_t317375469* value)
	{
		___initial_14 = value;
		Il2CppCodeGenWriteBarrier((&___initial_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X501_T1982414714_H
#ifndef X509CERTIFICATEENUMERATOR_T3123198498_H
#define X509CERTIFICATEENUMERATOR_T3123198498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct  X509CertificateEnumerator_t3123198498  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(X509CertificateEnumerator_t3123198498, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATEENUMERATOR_T3123198498_H
#ifndef X509EXTENSION_T766436414_H
#define X509EXTENSION_T766436414_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Extension
struct  X509Extension_t766436414  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Extension::extnOid
	String_t* ___extnOid_0;
	// System.Boolean Mono.Security.X509.X509Extension::extnCritical
	bool ___extnCritical_1;
	// Mono.Security.ASN1 Mono.Security.X509.X509Extension::extnValue
	ASN1_t861964270 * ___extnValue_2;

public:
	inline static int32_t get_offset_of_extnOid_0() { return static_cast<int32_t>(offsetof(X509Extension_t766436414, ___extnOid_0)); }
	inline String_t* get_extnOid_0() const { return ___extnOid_0; }
	inline String_t** get_address_of_extnOid_0() { return &___extnOid_0; }
	inline void set_extnOid_0(String_t* value)
	{
		___extnOid_0 = value;
		Il2CppCodeGenWriteBarrier((&___extnOid_0), value);
	}

	inline static int32_t get_offset_of_extnCritical_1() { return static_cast<int32_t>(offsetof(X509Extension_t766436414, ___extnCritical_1)); }
	inline bool get_extnCritical_1() const { return ___extnCritical_1; }
	inline bool* get_address_of_extnCritical_1() { return &___extnCritical_1; }
	inline void set_extnCritical_1(bool value)
	{
		___extnCritical_1 = value;
	}

	inline static int32_t get_offset_of_extnValue_2() { return static_cast<int32_t>(offsetof(X509Extension_t766436414, ___extnValue_2)); }
	inline ASN1_t861964270 * get_extnValue_2() const { return ___extnValue_2; }
	inline ASN1_t861964270 ** get_address_of_extnValue_2() { return &___extnValue_2; }
	inline void set_extnValue_2(ASN1_t861964270 * value)
	{
		___extnValue_2 = value;
		Il2CppCodeGenWriteBarrier((&___extnValue_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSION_T766436414_H
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
#ifndef BASEMACHINE_T370348258_H
#define BASEMACHINE_T370348258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.BaseMachine
struct  BaseMachine_t370348258  : public RuntimeObject
{
public:
	// System.Boolean System.Text.RegularExpressions.BaseMachine::needs_groups_or_captures
	bool ___needs_groups_or_captures_0;

public:
	inline static int32_t get_offset_of_needs_groups_or_captures_0() { return static_cast<int32_t>(offsetof(BaseMachine_t370348258, ___needs_groups_or_captures_0)); }
	inline bool get_needs_groups_or_captures_0() const { return ___needs_groups_or_captures_0; }
	inline bool* get_address_of_needs_groups_or_captures_0() { return &___needs_groups_or_captures_0; }
	inline void set_needs_groups_or_captures_0(bool value)
	{
		___needs_groups_or_captures_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEMACHINE_T370348258_H
#ifndef COLLECTIONBASE_T4052965684_H
#define COLLECTIONBASE_T4052965684_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CollectionBase
struct  CollectionBase_t4052965684  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t3465324181 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_t4052965684, ___list_0)); }
	inline ArrayList_t3465324181 * get_list_0() const { return ___list_0; }
	inline ArrayList_t3465324181 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t3465324181 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONBASE_T4052965684_H
#ifndef TYPECONVERTER_T2706085193_H
#define TYPECONVERTER_T2706085193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t2706085193  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T2706085193_H
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
#ifndef URIPARSER_T2799554438_H
#define URIPARSER_T2799554438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriParser
struct  UriParser_t2799554438  : public RuntimeObject
{
public:
	// System.String System.UriParser::scheme_name
	String_t* ___scheme_name_2;
	// System.Int32 System.UriParser::default_port
	int32_t ___default_port_3;

public:
	inline static int32_t get_offset_of_scheme_name_2() { return static_cast<int32_t>(offsetof(UriParser_t2799554438, ___scheme_name_2)); }
	inline String_t* get_scheme_name_2() const { return ___scheme_name_2; }
	inline String_t** get_address_of_scheme_name_2() { return &___scheme_name_2; }
	inline void set_scheme_name_2(String_t* value)
	{
		___scheme_name_2 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_name_2), value);
	}

	inline static int32_t get_offset_of_default_port_3() { return static_cast<int32_t>(offsetof(UriParser_t2799554438, ___default_port_3)); }
	inline int32_t get_default_port_3() const { return ___default_port_3; }
	inline int32_t* get_address_of_default_port_3() { return &___default_port_3; }
	inline void set_default_port_3(int32_t value)
	{
		___default_port_3 = value;
	}
};

struct UriParser_t2799554438_StaticFields
{
public:
	// System.Object System.UriParser::lock_object
	RuntimeObject * ___lock_object_0;
	// System.Collections.Hashtable System.UriParser::table
	Hashtable_t1283080349 * ___table_1;
	// System.Text.RegularExpressions.Regex System.UriParser::uri_regex
	Regex_t3759448142 * ___uri_regex_4;
	// System.Text.RegularExpressions.Regex System.UriParser::auth_regex
	Regex_t3759448142 * ___auth_regex_5;

public:
	inline static int32_t get_offset_of_lock_object_0() { return static_cast<int32_t>(offsetof(UriParser_t2799554438_StaticFields, ___lock_object_0)); }
	inline RuntimeObject * get_lock_object_0() const { return ___lock_object_0; }
	inline RuntimeObject ** get_address_of_lock_object_0() { return &___lock_object_0; }
	inline void set_lock_object_0(RuntimeObject * value)
	{
		___lock_object_0 = value;
		Il2CppCodeGenWriteBarrier((&___lock_object_0), value);
	}

	inline static int32_t get_offset_of_table_1() { return static_cast<int32_t>(offsetof(UriParser_t2799554438_StaticFields, ___table_1)); }
	inline Hashtable_t1283080349 * get_table_1() const { return ___table_1; }
	inline Hashtable_t1283080349 ** get_address_of_table_1() { return &___table_1; }
	inline void set_table_1(Hashtable_t1283080349 * value)
	{
		___table_1 = value;
		Il2CppCodeGenWriteBarrier((&___table_1), value);
	}

	inline static int32_t get_offset_of_uri_regex_4() { return static_cast<int32_t>(offsetof(UriParser_t2799554438_StaticFields, ___uri_regex_4)); }
	inline Regex_t3759448142 * get_uri_regex_4() const { return ___uri_regex_4; }
	inline Regex_t3759448142 ** get_address_of_uri_regex_4() { return &___uri_regex_4; }
	inline void set_uri_regex_4(Regex_t3759448142 * value)
	{
		___uri_regex_4 = value;
		Il2CppCodeGenWriteBarrier((&___uri_regex_4), value);
	}

	inline static int32_t get_offset_of_auth_regex_5() { return static_cast<int32_t>(offsetof(UriParser_t2799554438_StaticFields, ___auth_regex_5)); }
	inline Regex_t3759448142 * get_auth_regex_5() const { return ___auth_regex_5; }
	inline Regex_t3759448142 ** get_address_of_auth_regex_5() { return &___auth_regex_5; }
	inline void set_auth_regex_5(Regex_t3759448142 * value)
	{
		___auth_regex_5 = value;
		Il2CppCodeGenWriteBarrier((&___auth_regex_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIPARSER_T2799554438_H
#ifndef URI_T1342966606_H
#define URI_T1342966606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri
struct  Uri_t1342966606  : public RuntimeObject
{
public:
	// System.Boolean System.Uri::isUnixFilePath
	bool ___isUnixFilePath_0;
	// System.String System.Uri::source
	String_t* ___source_1;
	// System.String System.Uri::scheme
	String_t* ___scheme_2;
	// System.String System.Uri::host
	String_t* ___host_3;
	// System.Int32 System.Uri::port
	int32_t ___port_4;
	// System.String System.Uri::path
	String_t* ___path_5;
	// System.String System.Uri::query
	String_t* ___query_6;
	// System.String System.Uri::fragment
	String_t* ___fragment_7;
	// System.String System.Uri::userinfo
	String_t* ___userinfo_8;
	// System.Boolean System.Uri::isUnc
	bool ___isUnc_9;
	// System.Boolean System.Uri::isOpaquePart
	bool ___isOpaquePart_10;
	// System.Boolean System.Uri::isAbsoluteUri
	bool ___isAbsoluteUri_11;
	// System.Boolean System.Uri::userEscaped
	bool ___userEscaped_12;
	// System.String System.Uri::cachedAbsoluteUri
	String_t* ___cachedAbsoluteUri_13;
	// System.String System.Uri::cachedToString
	String_t* ___cachedToString_14;
	// System.Int32 System.Uri::cachedHashCode
	int32_t ___cachedHashCode_15;
	// System.UriParser System.Uri::parser
	UriParser_t2799554438 * ___parser_29;

public:
	inline static int32_t get_offset_of_isUnixFilePath_0() { return static_cast<int32_t>(offsetof(Uri_t1342966606, ___isUnixFilePath_0)); }
	inline bool get_isUnixFilePath_0() const { return ___isUnixFilePath_0; }
	inline bool* get_address_of_isUnixFilePath_0() { return &___isUnixFilePath_0; }
	inline void set_isUnixFilePath_0(bool value)
	{
		___isUnixFilePath_0 = value;
	}

	inline static int32_t get_offset_of_source_1() { return static_cast<int32_t>(offsetof(Uri_t1342966606, ___source_1)); }
	inline String_t* get_source_1() const { return ___source_1; }
	inline String_t** get_address_of_source_1() { return &___source_1; }
	inline void set_source_1(String_t* value)
	{
		___source_1 = value;
		Il2CppCodeGenWriteBarrier((&___source_1), value);
	}

	inline static int32_t get_offset_of_scheme_2() { return static_cast<int32_t>(offsetof(Uri_t1342966606, ___scheme_2)); }
	inline String_t* get_scheme_2() const { return ___scheme_2; }
	inline String_t** get_address_of_scheme_2() { return &___scheme_2; }
	inline void set_scheme_2(String_t* value)
	{
		___scheme_2 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_2), value);
	}

	inline static int32_t get_offset_of_host_3() { return static_cast<int32_t>(offsetof(Uri_t1342966606, ___host_3)); }
	inline String_t* get_host_3() const { return ___host_3; }
	inline String_t** get_address_of_host_3() { return &___host_3; }
	inline void set_host_3(String_t* value)
	{
		___host_3 = value;
		Il2CppCodeGenWriteBarrier((&___host_3), value);
	}

	inline static int32_t get_offset_of_port_4() { return static_cast<int32_t>(offsetof(Uri_t1342966606, ___port_4)); }
	inline int32_t get_port_4() const { return ___port_4; }
	inline int32_t* get_address_of_port_4() { return &___port_4; }
	inline void set_port_4(int32_t value)
	{
		___port_4 = value;
	}

	inline static int32_t get_offset_of_path_5() { return static_cast<int32_t>(offsetof(Uri_t1342966606, ___path_5)); }
	inline String_t* get_path_5() const { return ___path_5; }
	inline String_t** get_address_of_path_5() { return &___path_5; }
	inline void set_path_5(String_t* value)
	{
		___path_5 = value;
		Il2CppCodeGenWriteBarrier((&___path_5), value);
	}

	inline static int32_t get_offset_of_query_6() { return static_cast<int32_t>(offsetof(Uri_t1342966606, ___query_6)); }
	inline String_t* get_query_6() const { return ___query_6; }
	inline String_t** get_address_of_query_6() { return &___query_6; }
	inline void set_query_6(String_t* value)
	{
		___query_6 = value;
		Il2CppCodeGenWriteBarrier((&___query_6), value);
	}

	inline static int32_t get_offset_of_fragment_7() { return static_cast<int32_t>(offsetof(Uri_t1342966606, ___fragment_7)); }
	inline String_t* get_fragment_7() const { return ___fragment_7; }
	inline String_t** get_address_of_fragment_7() { return &___fragment_7; }
	inline void set_fragment_7(String_t* value)
	{
		___fragment_7 = value;
		Il2CppCodeGenWriteBarrier((&___fragment_7), value);
	}

	inline static int32_t get_offset_of_userinfo_8() { return static_cast<int32_t>(offsetof(Uri_t1342966606, ___userinfo_8)); }
	inline String_t* get_userinfo_8() const { return ___userinfo_8; }
	inline String_t** get_address_of_userinfo_8() { return &___userinfo_8; }
	inline void set_userinfo_8(String_t* value)
	{
		___userinfo_8 = value;
		Il2CppCodeGenWriteBarrier((&___userinfo_8), value);
	}

	inline static int32_t get_offset_of_isUnc_9() { return static_cast<int32_t>(offsetof(Uri_t1342966606, ___isUnc_9)); }
	inline bool get_isUnc_9() const { return ___isUnc_9; }
	inline bool* get_address_of_isUnc_9() { return &___isUnc_9; }
	inline void set_isUnc_9(bool value)
	{
		___isUnc_9 = value;
	}

	inline static int32_t get_offset_of_isOpaquePart_10() { return static_cast<int32_t>(offsetof(Uri_t1342966606, ___isOpaquePart_10)); }
	inline bool get_isOpaquePart_10() const { return ___isOpaquePart_10; }
	inline bool* get_address_of_isOpaquePart_10() { return &___isOpaquePart_10; }
	inline void set_isOpaquePart_10(bool value)
	{
		___isOpaquePart_10 = value;
	}

	inline static int32_t get_offset_of_isAbsoluteUri_11() { return static_cast<int32_t>(offsetof(Uri_t1342966606, ___isAbsoluteUri_11)); }
	inline bool get_isAbsoluteUri_11() const { return ___isAbsoluteUri_11; }
	inline bool* get_address_of_isAbsoluteUri_11() { return &___isAbsoluteUri_11; }
	inline void set_isAbsoluteUri_11(bool value)
	{
		___isAbsoluteUri_11 = value;
	}

	inline static int32_t get_offset_of_userEscaped_12() { return static_cast<int32_t>(offsetof(Uri_t1342966606, ___userEscaped_12)); }
	inline bool get_userEscaped_12() const { return ___userEscaped_12; }
	inline bool* get_address_of_userEscaped_12() { return &___userEscaped_12; }
	inline void set_userEscaped_12(bool value)
	{
		___userEscaped_12 = value;
	}

	inline static int32_t get_offset_of_cachedAbsoluteUri_13() { return static_cast<int32_t>(offsetof(Uri_t1342966606, ___cachedAbsoluteUri_13)); }
	inline String_t* get_cachedAbsoluteUri_13() const { return ___cachedAbsoluteUri_13; }
	inline String_t** get_address_of_cachedAbsoluteUri_13() { return &___cachedAbsoluteUri_13; }
	inline void set_cachedAbsoluteUri_13(String_t* value)
	{
		___cachedAbsoluteUri_13 = value;
		Il2CppCodeGenWriteBarrier((&___cachedAbsoluteUri_13), value);
	}

	inline static int32_t get_offset_of_cachedToString_14() { return static_cast<int32_t>(offsetof(Uri_t1342966606, ___cachedToString_14)); }
	inline String_t* get_cachedToString_14() const { return ___cachedToString_14; }
	inline String_t** get_address_of_cachedToString_14() { return &___cachedToString_14; }
	inline void set_cachedToString_14(String_t* value)
	{
		___cachedToString_14 = value;
		Il2CppCodeGenWriteBarrier((&___cachedToString_14), value);
	}

	inline static int32_t get_offset_of_cachedHashCode_15() { return static_cast<int32_t>(offsetof(Uri_t1342966606, ___cachedHashCode_15)); }
	inline int32_t get_cachedHashCode_15() const { return ___cachedHashCode_15; }
	inline int32_t* get_address_of_cachedHashCode_15() { return &___cachedHashCode_15; }
	inline void set_cachedHashCode_15(int32_t value)
	{
		___cachedHashCode_15 = value;
	}

	inline static int32_t get_offset_of_parser_29() { return static_cast<int32_t>(offsetof(Uri_t1342966606, ___parser_29)); }
	inline UriParser_t2799554438 * get_parser_29() const { return ___parser_29; }
	inline UriParser_t2799554438 ** get_address_of_parser_29() { return &___parser_29; }
	inline void set_parser_29(UriParser_t2799554438 * value)
	{
		___parser_29 = value;
		Il2CppCodeGenWriteBarrier((&___parser_29), value);
	}
};

struct Uri_t1342966606_StaticFields
{
public:
	// System.String System.Uri::hexUpperChars
	String_t* ___hexUpperChars_16;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_17;
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_18;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_19;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_20;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_21;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_22;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_23;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_24;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_25;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_26;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_27;
	// System.Uri/UriScheme[] System.Uri::schemes
	UriSchemeU5BU5D_t1534006459* ___schemes_28;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map14
	Dictionary_2_t415537980 * ___U3CU3Ef__switchU24map14_30;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map15
	Dictionary_2_t415537980 * ___U3CU3Ef__switchU24map15_31;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Uri::<>f__switch$map16
	Dictionary_2_t415537980 * ___U3CU3Ef__switchU24map16_32;

public:
	inline static int32_t get_offset_of_hexUpperChars_16() { return static_cast<int32_t>(offsetof(Uri_t1342966606_StaticFields, ___hexUpperChars_16)); }
	inline String_t* get_hexUpperChars_16() const { return ___hexUpperChars_16; }
	inline String_t** get_address_of_hexUpperChars_16() { return &___hexUpperChars_16; }
	inline void set_hexUpperChars_16(String_t* value)
	{
		___hexUpperChars_16 = value;
		Il2CppCodeGenWriteBarrier((&___hexUpperChars_16), value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_17() { return static_cast<int32_t>(offsetof(Uri_t1342966606_StaticFields, ___SchemeDelimiter_17)); }
	inline String_t* get_SchemeDelimiter_17() const { return ___SchemeDelimiter_17; }
	inline String_t** get_address_of_SchemeDelimiter_17() { return &___SchemeDelimiter_17; }
	inline void set_SchemeDelimiter_17(String_t* value)
	{
		___SchemeDelimiter_17 = value;
		Il2CppCodeGenWriteBarrier((&___SchemeDelimiter_17), value);
	}

	inline static int32_t get_offset_of_UriSchemeFile_18() { return static_cast<int32_t>(offsetof(Uri_t1342966606_StaticFields, ___UriSchemeFile_18)); }
	inline String_t* get_UriSchemeFile_18() const { return ___UriSchemeFile_18; }
	inline String_t** get_address_of_UriSchemeFile_18() { return &___UriSchemeFile_18; }
	inline void set_UriSchemeFile_18(String_t* value)
	{
		___UriSchemeFile_18 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFile_18), value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_19() { return static_cast<int32_t>(offsetof(Uri_t1342966606_StaticFields, ___UriSchemeFtp_19)); }
	inline String_t* get_UriSchemeFtp_19() const { return ___UriSchemeFtp_19; }
	inline String_t** get_address_of_UriSchemeFtp_19() { return &___UriSchemeFtp_19; }
	inline void set_UriSchemeFtp_19(String_t* value)
	{
		___UriSchemeFtp_19 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFtp_19), value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_20() { return static_cast<int32_t>(offsetof(Uri_t1342966606_StaticFields, ___UriSchemeGopher_20)); }
	inline String_t* get_UriSchemeGopher_20() const { return ___UriSchemeGopher_20; }
	inline String_t** get_address_of_UriSchemeGopher_20() { return &___UriSchemeGopher_20; }
	inline void set_UriSchemeGopher_20(String_t* value)
	{
		___UriSchemeGopher_20 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeGopher_20), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_21() { return static_cast<int32_t>(offsetof(Uri_t1342966606_StaticFields, ___UriSchemeHttp_21)); }
	inline String_t* get_UriSchemeHttp_21() const { return ___UriSchemeHttp_21; }
	inline String_t** get_address_of_UriSchemeHttp_21() { return &___UriSchemeHttp_21; }
	inline void set_UriSchemeHttp_21(String_t* value)
	{
		___UriSchemeHttp_21 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttp_21), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_22() { return static_cast<int32_t>(offsetof(Uri_t1342966606_StaticFields, ___UriSchemeHttps_22)); }
	inline String_t* get_UriSchemeHttps_22() const { return ___UriSchemeHttps_22; }
	inline String_t** get_address_of_UriSchemeHttps_22() { return &___UriSchemeHttps_22; }
	inline void set_UriSchemeHttps_22(String_t* value)
	{
		___UriSchemeHttps_22 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttps_22), value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_23() { return static_cast<int32_t>(offsetof(Uri_t1342966606_StaticFields, ___UriSchemeMailto_23)); }
	inline String_t* get_UriSchemeMailto_23() const { return ___UriSchemeMailto_23; }
	inline String_t** get_address_of_UriSchemeMailto_23() { return &___UriSchemeMailto_23; }
	inline void set_UriSchemeMailto_23(String_t* value)
	{
		___UriSchemeMailto_23 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeMailto_23), value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_24() { return static_cast<int32_t>(offsetof(Uri_t1342966606_StaticFields, ___UriSchemeNews_24)); }
	inline String_t* get_UriSchemeNews_24() const { return ___UriSchemeNews_24; }
	inline String_t** get_address_of_UriSchemeNews_24() { return &___UriSchemeNews_24; }
	inline void set_UriSchemeNews_24(String_t* value)
	{
		___UriSchemeNews_24 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNews_24), value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_25() { return static_cast<int32_t>(offsetof(Uri_t1342966606_StaticFields, ___UriSchemeNntp_25)); }
	inline String_t* get_UriSchemeNntp_25() const { return ___UriSchemeNntp_25; }
	inline String_t** get_address_of_UriSchemeNntp_25() { return &___UriSchemeNntp_25; }
	inline void set_UriSchemeNntp_25(String_t* value)
	{
		___UriSchemeNntp_25 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNntp_25), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_26() { return static_cast<int32_t>(offsetof(Uri_t1342966606_StaticFields, ___UriSchemeNetPipe_26)); }
	inline String_t* get_UriSchemeNetPipe_26() const { return ___UriSchemeNetPipe_26; }
	inline String_t** get_address_of_UriSchemeNetPipe_26() { return &___UriSchemeNetPipe_26; }
	inline void set_UriSchemeNetPipe_26(String_t* value)
	{
		___UriSchemeNetPipe_26 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetPipe_26), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_27() { return static_cast<int32_t>(offsetof(Uri_t1342966606_StaticFields, ___UriSchemeNetTcp_27)); }
	inline String_t* get_UriSchemeNetTcp_27() const { return ___UriSchemeNetTcp_27; }
	inline String_t** get_address_of_UriSchemeNetTcp_27() { return &___UriSchemeNetTcp_27; }
	inline void set_UriSchemeNetTcp_27(String_t* value)
	{
		___UriSchemeNetTcp_27 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetTcp_27), value);
	}

	inline static int32_t get_offset_of_schemes_28() { return static_cast<int32_t>(offsetof(Uri_t1342966606_StaticFields, ___schemes_28)); }
	inline UriSchemeU5BU5D_t1534006459* get_schemes_28() const { return ___schemes_28; }
	inline UriSchemeU5BU5D_t1534006459** get_address_of_schemes_28() { return &___schemes_28; }
	inline void set_schemes_28(UriSchemeU5BU5D_t1534006459* value)
	{
		___schemes_28 = value;
		Il2CppCodeGenWriteBarrier((&___schemes_28), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map14_30() { return static_cast<int32_t>(offsetof(Uri_t1342966606_StaticFields, ___U3CU3Ef__switchU24map14_30)); }
	inline Dictionary_2_t415537980 * get_U3CU3Ef__switchU24map14_30() const { return ___U3CU3Ef__switchU24map14_30; }
	inline Dictionary_2_t415537980 ** get_address_of_U3CU3Ef__switchU24map14_30() { return &___U3CU3Ef__switchU24map14_30; }
	inline void set_U3CU3Ef__switchU24map14_30(Dictionary_2_t415537980 * value)
	{
		___U3CU3Ef__switchU24map14_30 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map14_30), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map15_31() { return static_cast<int32_t>(offsetof(Uri_t1342966606_StaticFields, ___U3CU3Ef__switchU24map15_31)); }
	inline Dictionary_2_t415537980 * get_U3CU3Ef__switchU24map15_31() const { return ___U3CU3Ef__switchU24map15_31; }
	inline Dictionary_2_t415537980 ** get_address_of_U3CU3Ef__switchU24map15_31() { return &___U3CU3Ef__switchU24map15_31; }
	inline void set_U3CU3Ef__switchU24map15_31(Dictionary_2_t415537980 * value)
	{
		___U3CU3Ef__switchU24map15_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map15_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map16_32() { return static_cast<int32_t>(offsetof(Uri_t1342966606_StaticFields, ___U3CU3Ef__switchU24map16_32)); }
	inline Dictionary_2_t415537980 * get_U3CU3Ef__switchU24map16_32() const { return ___U3CU3Ef__switchU24map16_32; }
	inline Dictionary_2_t415537980 ** get_address_of_U3CU3Ef__switchU24map16_32() { return &___U3CU3Ef__switchU24map16_32; }
	inline void set_U3CU3Ef__switchU24map16_32(Dictionary_2_t415537980 * value)
	{
		___U3CU3Ef__switchU24map16_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map16_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_T1342966606_H
#ifndef KERNEL_T874282475_H
#define KERNEL_T874282475_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/Kernel
struct  Kernel_t874282475  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KERNEL_T874282475_H
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
#ifndef PATTERNCOMPILER_T1905304520_H
#define PATTERNCOMPILER_T1905304520_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.PatternCompiler
struct  PatternCompiler_t1905304520  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Text.RegularExpressions.PatternCompiler::pgm
	ArrayList_t3465324181 * ___pgm_0;

public:
	inline static int32_t get_offset_of_pgm_0() { return static_cast<int32_t>(offsetof(PatternCompiler_t1905304520, ___pgm_0)); }
	inline ArrayList_t3465324181 * get_pgm_0() const { return ___pgm_0; }
	inline ArrayList_t3465324181 ** get_address_of_pgm_0() { return &___pgm_0; }
	inline void set_pgm_0(ArrayList_t3465324181 * value)
	{
		___pgm_0 = value;
		Il2CppCodeGenWriteBarrier((&___pgm_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PATTERNCOMPILER_T1905304520_H
#ifndef INTERVALCOLLECTION_T113444232_H
#define INTERVALCOLLECTION_T113444232_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.IntervalCollection
struct  IntervalCollection_t113444232  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Text.RegularExpressions.IntervalCollection::intervals
	ArrayList_t3465324181 * ___intervals_0;

public:
	inline static int32_t get_offset_of_intervals_0() { return static_cast<int32_t>(offsetof(IntervalCollection_t113444232, ___intervals_0)); }
	inline ArrayList_t3465324181 * get_intervals_0() const { return ___intervals_0; }
	inline ArrayList_t3465324181 ** get_address_of_intervals_0() { return &___intervals_0; }
	inline void set_intervals_0(ArrayList_t3465324181 * value)
	{
		___intervals_0 = value;
		Il2CppCodeGenWriteBarrier((&___intervals_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERVALCOLLECTION_T113444232_H
#ifndef INTERPRETERFACTORY_T691433666_H
#define INTERPRETERFACTORY_T691433666_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.InterpreterFactory
struct  InterpreterFactory_t691433666  : public RuntimeObject
{
public:
	// System.Collections.IDictionary System.Text.RegularExpressions.InterpreterFactory::mapping
	RuntimeObject* ___mapping_0;
	// System.UInt16[] System.Text.RegularExpressions.InterpreterFactory::pattern
	UInt16U5BU5D_t3499399594* ___pattern_1;
	// System.String[] System.Text.RegularExpressions.InterpreterFactory::namesMapping
	StringU5BU5D_t623663148* ___namesMapping_2;
	// System.Int32 System.Text.RegularExpressions.InterpreterFactory::gap
	int32_t ___gap_3;

public:
	inline static int32_t get_offset_of_mapping_0() { return static_cast<int32_t>(offsetof(InterpreterFactory_t691433666, ___mapping_0)); }
	inline RuntimeObject* get_mapping_0() const { return ___mapping_0; }
	inline RuntimeObject** get_address_of_mapping_0() { return &___mapping_0; }
	inline void set_mapping_0(RuntimeObject* value)
	{
		___mapping_0 = value;
		Il2CppCodeGenWriteBarrier((&___mapping_0), value);
	}

	inline static int32_t get_offset_of_pattern_1() { return static_cast<int32_t>(offsetof(InterpreterFactory_t691433666, ___pattern_1)); }
	inline UInt16U5BU5D_t3499399594* get_pattern_1() const { return ___pattern_1; }
	inline UInt16U5BU5D_t3499399594** get_address_of_pattern_1() { return &___pattern_1; }
	inline void set_pattern_1(UInt16U5BU5D_t3499399594* value)
	{
		___pattern_1 = value;
		Il2CppCodeGenWriteBarrier((&___pattern_1), value);
	}

	inline static int32_t get_offset_of_namesMapping_2() { return static_cast<int32_t>(offsetof(InterpreterFactory_t691433666, ___namesMapping_2)); }
	inline StringU5BU5D_t623663148* get_namesMapping_2() const { return ___namesMapping_2; }
	inline StringU5BU5D_t623663148** get_address_of_namesMapping_2() { return &___namesMapping_2; }
	inline void set_namesMapping_2(StringU5BU5D_t623663148* value)
	{
		___namesMapping_2 = value;
		Il2CppCodeGenWriteBarrier((&___namesMapping_2), value);
	}

	inline static int32_t get_offset_of_gap_3() { return static_cast<int32_t>(offsetof(InterpreterFactory_t691433666, ___gap_3)); }
	inline int32_t get_gap_3() const { return ___gap_3; }
	inline int32_t* get_address_of_gap_3() { return &___gap_3; }
	inline void set_gap_3(int32_t value)
	{
		___gap_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERPRETERFACTORY_T691433666_H
#ifndef ENUMERATOR_T2802451629_H
#define ENUMERATOR_T2802451629_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.IntervalCollection/Enumerator
struct  Enumerator_t2802451629  : public RuntimeObject
{
public:
	// System.Collections.IList System.Text.RegularExpressions.IntervalCollection/Enumerator::list
	RuntimeObject* ___list_0;
	// System.Int32 System.Text.RegularExpressions.IntervalCollection/Enumerator::ptr
	int32_t ___ptr_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t2802451629, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_ptr_1() { return static_cast<int32_t>(offsetof(Enumerator_t2802451629, ___ptr_1)); }
	inline int32_t get_ptr_1() const { return ___ptr_1; }
	inline int32_t* get_address_of_ptr_1() { return &___ptr_1; }
	inline void set_ptr_1(int32_t value)
	{
		___ptr_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2802451629_H
#ifndef REPEATCONTEXT_T3152651949_H
#define REPEATCONTEXT_T3152651949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Interpreter/RepeatContext
struct  RepeatContext_t3152651949  : public RuntimeObject
{
public:
	// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::start
	int32_t ___start_0;
	// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::min
	int32_t ___min_1;
	// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::max
	int32_t ___max_2;
	// System.Boolean System.Text.RegularExpressions.Interpreter/RepeatContext::lazy
	bool ___lazy_3;
	// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::expr_pc
	int32_t ___expr_pc_4;
	// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter/RepeatContext::previous
	RepeatContext_t3152651949 * ___previous_5;
	// System.Int32 System.Text.RegularExpressions.Interpreter/RepeatContext::count
	int32_t ___count_6;

public:
	inline static int32_t get_offset_of_start_0() { return static_cast<int32_t>(offsetof(RepeatContext_t3152651949, ___start_0)); }
	inline int32_t get_start_0() const { return ___start_0; }
	inline int32_t* get_address_of_start_0() { return &___start_0; }
	inline void set_start_0(int32_t value)
	{
		___start_0 = value;
	}

	inline static int32_t get_offset_of_min_1() { return static_cast<int32_t>(offsetof(RepeatContext_t3152651949, ___min_1)); }
	inline int32_t get_min_1() const { return ___min_1; }
	inline int32_t* get_address_of_min_1() { return &___min_1; }
	inline void set_min_1(int32_t value)
	{
		___min_1 = value;
	}

	inline static int32_t get_offset_of_max_2() { return static_cast<int32_t>(offsetof(RepeatContext_t3152651949, ___max_2)); }
	inline int32_t get_max_2() const { return ___max_2; }
	inline int32_t* get_address_of_max_2() { return &___max_2; }
	inline void set_max_2(int32_t value)
	{
		___max_2 = value;
	}

	inline static int32_t get_offset_of_lazy_3() { return static_cast<int32_t>(offsetof(RepeatContext_t3152651949, ___lazy_3)); }
	inline bool get_lazy_3() const { return ___lazy_3; }
	inline bool* get_address_of_lazy_3() { return &___lazy_3; }
	inline void set_lazy_3(bool value)
	{
		___lazy_3 = value;
	}

	inline static int32_t get_offset_of_expr_pc_4() { return static_cast<int32_t>(offsetof(RepeatContext_t3152651949, ___expr_pc_4)); }
	inline int32_t get_expr_pc_4() const { return ___expr_pc_4; }
	inline int32_t* get_address_of_expr_pc_4() { return &___expr_pc_4; }
	inline void set_expr_pc_4(int32_t value)
	{
		___expr_pc_4 = value;
	}

	inline static int32_t get_offset_of_previous_5() { return static_cast<int32_t>(offsetof(RepeatContext_t3152651949, ___previous_5)); }
	inline RepeatContext_t3152651949 * get_previous_5() const { return ___previous_5; }
	inline RepeatContext_t3152651949 ** get_address_of_previous_5() { return &___previous_5; }
	inline void set_previous_5(RepeatContext_t3152651949 * value)
	{
		___previous_5 = value;
		Il2CppCodeGenWriteBarrier((&___previous_5), value);
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(RepeatContext_t3152651949, ___count_6)); }
	inline int32_t get_count_6() const { return ___count_6; }
	inline int32_t* get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(int32_t value)
	{
		___count_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REPEATCONTEXT_T3152651949_H
#ifndef CATEGORYUTILS_T81228926_H
#define CATEGORYUTILS_T81228926_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.CategoryUtils
struct  CategoryUtils_t81228926  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CATEGORYUTILS_T81228926_H
#ifndef LINKREF_T3601895176_H
#define LINKREF_T3601895176_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.LinkRef
struct  LinkRef_t3601895176  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKREF_T3601895176_H
#ifndef MRULIST_T640488818_H
#define MRULIST_T640488818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.MRUList
struct  MRUList_t640488818  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.MRUList/Node System.Text.RegularExpressions.MRUList::head
	Node_t2498541648 * ___head_0;
	// System.Text.RegularExpressions.MRUList/Node System.Text.RegularExpressions.MRUList::tail
	Node_t2498541648 * ___tail_1;

public:
	inline static int32_t get_offset_of_head_0() { return static_cast<int32_t>(offsetof(MRUList_t640488818, ___head_0)); }
	inline Node_t2498541648 * get_head_0() const { return ___head_0; }
	inline Node_t2498541648 ** get_address_of_head_0() { return &___head_0; }
	inline void set_head_0(Node_t2498541648 * value)
	{
		___head_0 = value;
		Il2CppCodeGenWriteBarrier((&___head_0), value);
	}

	inline static int32_t get_offset_of_tail_1() { return static_cast<int32_t>(offsetof(MRUList_t640488818, ___tail_1)); }
	inline Node_t2498541648 * get_tail_1() const { return ___tail_1; }
	inline Node_t2498541648 ** get_address_of_tail_1() { return &___tail_1; }
	inline void set_tail_1(Node_t2498541648 * value)
	{
		___tail_1 = value;
		Il2CppCodeGenWriteBarrier((&___tail_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MRULIST_T640488818_H
#ifndef PARSER_T3160516155_H
#define PARSER_T3160516155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Parser
struct  Parser_t3160516155  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.Syntax.Parser::pattern
	String_t* ___pattern_0;
	// System.Int32 System.Text.RegularExpressions.Syntax.Parser::ptr
	int32_t ___ptr_1;
	// System.Collections.ArrayList System.Text.RegularExpressions.Syntax.Parser::caps
	ArrayList_t3465324181 * ___caps_2;
	// System.Collections.Hashtable System.Text.RegularExpressions.Syntax.Parser::refs
	Hashtable_t1283080349 * ___refs_3;
	// System.Int32 System.Text.RegularExpressions.Syntax.Parser::num_groups
	int32_t ___num_groups_4;
	// System.Int32 System.Text.RegularExpressions.Syntax.Parser::gap
	int32_t ___gap_5;

public:
	inline static int32_t get_offset_of_pattern_0() { return static_cast<int32_t>(offsetof(Parser_t3160516155, ___pattern_0)); }
	inline String_t* get_pattern_0() const { return ___pattern_0; }
	inline String_t** get_address_of_pattern_0() { return &___pattern_0; }
	inline void set_pattern_0(String_t* value)
	{
		___pattern_0 = value;
		Il2CppCodeGenWriteBarrier((&___pattern_0), value);
	}

	inline static int32_t get_offset_of_ptr_1() { return static_cast<int32_t>(offsetof(Parser_t3160516155, ___ptr_1)); }
	inline int32_t get_ptr_1() const { return ___ptr_1; }
	inline int32_t* get_address_of_ptr_1() { return &___ptr_1; }
	inline void set_ptr_1(int32_t value)
	{
		___ptr_1 = value;
	}

	inline static int32_t get_offset_of_caps_2() { return static_cast<int32_t>(offsetof(Parser_t3160516155, ___caps_2)); }
	inline ArrayList_t3465324181 * get_caps_2() const { return ___caps_2; }
	inline ArrayList_t3465324181 ** get_address_of_caps_2() { return &___caps_2; }
	inline void set_caps_2(ArrayList_t3465324181 * value)
	{
		___caps_2 = value;
		Il2CppCodeGenWriteBarrier((&___caps_2), value);
	}

	inline static int32_t get_offset_of_refs_3() { return static_cast<int32_t>(offsetof(Parser_t3160516155, ___refs_3)); }
	inline Hashtable_t1283080349 * get_refs_3() const { return ___refs_3; }
	inline Hashtable_t1283080349 ** get_address_of_refs_3() { return &___refs_3; }
	inline void set_refs_3(Hashtable_t1283080349 * value)
	{
		___refs_3 = value;
		Il2CppCodeGenWriteBarrier((&___refs_3), value);
	}

	inline static int32_t get_offset_of_num_groups_4() { return static_cast<int32_t>(offsetof(Parser_t3160516155, ___num_groups_4)); }
	inline int32_t get_num_groups_4() const { return ___num_groups_4; }
	inline int32_t* get_address_of_num_groups_4() { return &___num_groups_4; }
	inline void set_num_groups_4(int32_t value)
	{
		___num_groups_4 = value;
	}

	inline static int32_t get_offset_of_gap_5() { return static_cast<int32_t>(offsetof(Parser_t3160516155, ___gap_5)); }
	inline int32_t get_gap_5() const { return ___gap_5; }
	inline int32_t* get_address_of_gap_5() { return &___gap_5; }
	inline void set_gap_5(int32_t value)
	{
		___gap_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSER_T3160516155_H
#ifndef QUICKSEARCH_T4207793344_H
#define QUICKSEARCH_T4207793344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.QuickSearch
struct  QuickSearch_t4207793344  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.QuickSearch::str
	String_t* ___str_0;
	// System.Int32 System.Text.RegularExpressions.QuickSearch::len
	int32_t ___len_1;
	// System.Boolean System.Text.RegularExpressions.QuickSearch::ignore
	bool ___ignore_2;
	// System.Boolean System.Text.RegularExpressions.QuickSearch::reverse
	bool ___reverse_3;
	// System.Byte[] System.Text.RegularExpressions.QuickSearch::shift
	ByteU5BU5D_t317375469* ___shift_4;
	// System.Collections.Hashtable System.Text.RegularExpressions.QuickSearch::shiftExtended
	Hashtable_t1283080349 * ___shiftExtended_5;

public:
	inline static int32_t get_offset_of_str_0() { return static_cast<int32_t>(offsetof(QuickSearch_t4207793344, ___str_0)); }
	inline String_t* get_str_0() const { return ___str_0; }
	inline String_t** get_address_of_str_0() { return &___str_0; }
	inline void set_str_0(String_t* value)
	{
		___str_0 = value;
		Il2CppCodeGenWriteBarrier((&___str_0), value);
	}

	inline static int32_t get_offset_of_len_1() { return static_cast<int32_t>(offsetof(QuickSearch_t4207793344, ___len_1)); }
	inline int32_t get_len_1() const { return ___len_1; }
	inline int32_t* get_address_of_len_1() { return &___len_1; }
	inline void set_len_1(int32_t value)
	{
		___len_1 = value;
	}

	inline static int32_t get_offset_of_ignore_2() { return static_cast<int32_t>(offsetof(QuickSearch_t4207793344, ___ignore_2)); }
	inline bool get_ignore_2() const { return ___ignore_2; }
	inline bool* get_address_of_ignore_2() { return &___ignore_2; }
	inline void set_ignore_2(bool value)
	{
		___ignore_2 = value;
	}

	inline static int32_t get_offset_of_reverse_3() { return static_cast<int32_t>(offsetof(QuickSearch_t4207793344, ___reverse_3)); }
	inline bool get_reverse_3() const { return ___reverse_3; }
	inline bool* get_address_of_reverse_3() { return &___reverse_3; }
	inline void set_reverse_3(bool value)
	{
		___reverse_3 = value;
	}

	inline static int32_t get_offset_of_shift_4() { return static_cast<int32_t>(offsetof(QuickSearch_t4207793344, ___shift_4)); }
	inline ByteU5BU5D_t317375469* get_shift_4() const { return ___shift_4; }
	inline ByteU5BU5D_t317375469** get_address_of_shift_4() { return &___shift_4; }
	inline void set_shift_4(ByteU5BU5D_t317375469* value)
	{
		___shift_4 = value;
		Il2CppCodeGenWriteBarrier((&___shift_4), value);
	}

	inline static int32_t get_offset_of_shiftExtended_5() { return static_cast<int32_t>(offsetof(QuickSearch_t4207793344, ___shiftExtended_5)); }
	inline Hashtable_t1283080349 * get_shiftExtended_5() const { return ___shiftExtended_5; }
	inline Hashtable_t1283080349 ** get_address_of_shiftExtended_5() { return &___shiftExtended_5; }
	inline void set_shiftExtended_5(Hashtable_t1283080349 * value)
	{
		___shiftExtended_5 = value;
		Il2CppCodeGenWriteBarrier((&___shiftExtended_5), value);
	}
};

struct QuickSearch_t4207793344_StaticFields
{
public:
	// System.Int32 System.Text.RegularExpressions.QuickSearch::THRESHOLD
	int32_t ___THRESHOLD_6;

public:
	inline static int32_t get_offset_of_THRESHOLD_6() { return static_cast<int32_t>(offsetof(QuickSearch_t4207793344_StaticFields, ___THRESHOLD_6)); }
	inline int32_t get_THRESHOLD_6() const { return ___THRESHOLD_6; }
	inline int32_t* get_address_of_THRESHOLD_6() { return &___THRESHOLD_6; }
	inline void set_THRESHOLD_6(int32_t value)
	{
		___THRESHOLD_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUICKSEARCH_T4207793344_H
#ifndef EXPRESSION_T4065159133_H
#define EXPRESSION_T4065159133_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Expression
struct  Expression_t4065159133  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSION_T4065159133_H
#ifndef NODE_T2498541648_H
#define NODE_T2498541648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.MRUList/Node
struct  Node_t2498541648  : public RuntimeObject
{
public:
	// System.Object System.Text.RegularExpressions.MRUList/Node::value
	RuntimeObject * ___value_0;
	// System.Text.RegularExpressions.MRUList/Node System.Text.RegularExpressions.MRUList/Node::previous
	Node_t2498541648 * ___previous_1;
	// System.Text.RegularExpressions.MRUList/Node System.Text.RegularExpressions.MRUList/Node::next
	Node_t2498541648 * ___next_2;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Node_t2498541648, ___value_0)); }
	inline RuntimeObject * get_value_0() const { return ___value_0; }
	inline RuntimeObject ** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(RuntimeObject * value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}

	inline static int32_t get_offset_of_previous_1() { return static_cast<int32_t>(offsetof(Node_t2498541648, ___previous_1)); }
	inline Node_t2498541648 * get_previous_1() const { return ___previous_1; }
	inline Node_t2498541648 ** get_address_of_previous_1() { return &___previous_1; }
	inline void set_previous_1(Node_t2498541648 * value)
	{
		___previous_1 = value;
		Il2CppCodeGenWriteBarrier((&___previous_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(Node_t2498541648, ___next_2)); }
	inline Node_t2498541648 * get_next_2() const { return ___next_2; }
	inline Node_t2498541648 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(Node_t2498541648 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODE_T2498541648_H
#ifndef EXPRESSIONCOLLECTION_T1923166166_H
#define EXPRESSIONCOLLECTION_T1923166166_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.ExpressionCollection
struct  ExpressionCollection_t1923166166  : public CollectionBase_t4052965684
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSIONCOLLECTION_T1923166166_H
#ifndef MD2_T1463594897_H
#define MD2_T1463594897_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD2
struct  MD2_t1463594897  : public HashAlgorithm_t1249475727
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD2_T1463594897_H
#ifndef MD4_T758093402_H
#define MD4_T758093402_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD4
struct  MD4_t758093402  : public HashAlgorithm_t1249475727
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD4_T758093402_H
#ifndef INTSTACK_T1949821567_H
#define INTSTACK_T1949821567_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Interpreter/IntStack
struct  IntStack_t1949821567 
{
public:
	// System.Int32[] System.Text.RegularExpressions.Interpreter/IntStack::values
	Int32U5BU5D_t246198214* ___values_0;
	// System.Int32 System.Text.RegularExpressions.Interpreter/IntStack::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_values_0() { return static_cast<int32_t>(offsetof(IntStack_t1949821567, ___values_0)); }
	inline Int32U5BU5D_t246198214* get_values_0() const { return ___values_0; }
	inline Int32U5BU5D_t246198214** get_address_of_values_0() { return &___values_0; }
	inline void set_values_0(Int32U5BU5D_t246198214* value)
	{
		___values_0 = value;
		Il2CppCodeGenWriteBarrier((&___values_0), value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(IntStack_t1949821567, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Text.RegularExpressions.Interpreter/IntStack
struct IntStack_t1949821567_marshaled_pinvoke
{
	int32_t* ___values_0;
	int32_t ___count_1;
};
// Native definition for COM marshalling of System.Text.RegularExpressions.Interpreter/IntStack
struct IntStack_t1949821567_marshaled_com
{
	int32_t* ___values_0;
	int32_t ___count_1;
};
#endif // INTSTACK_T1949821567_H
#ifndef LINK_T4132656200_H
#define LINK_T4132656200_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack/Link
struct  Link_t4132656200 
{
public:
	// System.Int32 System.Text.RegularExpressions.PatternCompiler/PatternLinkStack/Link::base_addr
	int32_t ___base_addr_0;
	// System.Int32 System.Text.RegularExpressions.PatternCompiler/PatternLinkStack/Link::offset_addr
	int32_t ___offset_addr_1;

public:
	inline static int32_t get_offset_of_base_addr_0() { return static_cast<int32_t>(offsetof(Link_t4132656200, ___base_addr_0)); }
	inline int32_t get_base_addr_0() const { return ___base_addr_0; }
	inline int32_t* get_address_of_base_addr_0() { return &___base_addr_0; }
	inline void set_base_addr_0(int32_t value)
	{
		___base_addr_0 = value;
	}

	inline static int32_t get_offset_of_offset_addr_1() { return static_cast<int32_t>(offsetof(Link_t4132656200, ___offset_addr_1)); }
	inline int32_t get_offset_addr_1() const { return ___offset_addr_1; }
	inline int32_t* get_address_of_offset_addr_1() { return &___offset_addr_1; }
	inline void set_offset_addr_1(int32_t value)
	{
		___offset_addr_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINK_T4132656200_H
#ifndef LINKSTACK_T548527007_H
#define LINKSTACK_T548527007_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.LinkStack
struct  LinkStack_t548527007  : public LinkRef_t3601895176
{
public:
	// System.Collections.Stack System.Text.RegularExpressions.LinkStack::stack
	Stack_t732864929 * ___stack_0;

public:
	inline static int32_t get_offset_of_stack_0() { return static_cast<int32_t>(offsetof(LinkStack_t548527007, ___stack_0)); }
	inline Stack_t732864929 * get_stack_0() const { return ___stack_0; }
	inline Stack_t732864929 ** get_address_of_stack_0() { return &___stack_0; }
	inline void set_stack_0(Stack_t732864929 * value)
	{
		___stack_0 = value;
		Il2CppCodeGenWriteBarrier((&___stack_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LINKSTACK_T548527007_H
#ifndef COMPOSITEEXPRESSION_T3919816724_H
#define COMPOSITEEXPRESSION_T3919816724_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.CompositeExpression
struct  CompositeExpression_t3919816724  : public Expression_t4065159133
{
public:
	// System.Text.RegularExpressions.Syntax.ExpressionCollection System.Text.RegularExpressions.Syntax.CompositeExpression::expressions
	ExpressionCollection_t1923166166 * ___expressions_0;

public:
	inline static int32_t get_offset_of_expressions_0() { return static_cast<int32_t>(offsetof(CompositeExpression_t3919816724, ___expressions_0)); }
	inline ExpressionCollection_t1923166166 * get_expressions_0() const { return ___expressions_0; }
	inline ExpressionCollection_t1923166166 ** get_address_of_expressions_0() { return &___expressions_0; }
	inline void set_expressions_0(ExpressionCollection_t1923166166 * value)
	{
		___expressions_0 = value;
		Il2CppCodeGenWriteBarrier((&___expressions_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPOSITEEXPRESSION_T3919816724_H
#ifndef X509CERTIFICATECOLLECTION_T1330376034_H
#define X509CERTIFICATECOLLECTION_T1330376034_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509CertificateCollection
struct  X509CertificateCollection_t1330376034  : public CollectionBase_t4052965684
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATECOLLECTION_T1330376034_H
#ifndef X509EXTENSIONCOLLECTION_T3871348741_H
#define X509EXTENSIONCOLLECTION_T3871348741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509ExtensionCollection
struct  X509ExtensionCollection_t3871348741  : public CollectionBase_t4052965684
{
public:
	// System.Boolean Mono.Security.X509.X509ExtensionCollection::readOnly
	bool ___readOnly_1;

public:
	inline static int32_t get_offset_of_readOnly_1() { return static_cast<int32_t>(offsetof(X509ExtensionCollection_t3871348741, ___readOnly_1)); }
	inline bool get_readOnly_1() const { return ___readOnly_1; }
	inline bool* get_address_of_readOnly_1() { return &___readOnly_1; }
	inline void set_readOnly_1(bool value)
	{
		___readOnly_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSIONCOLLECTION_T3871348741_H
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
#ifndef VOID_T1196225232_H
#define VOID_T1196225232_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1196225232 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1196225232_H
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
#ifndef TIMESPAN_T4245672980_H
#define TIMESPAN_T4245672980_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t4245672980 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t4245672980, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t4245672980_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4245672980  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4245672980  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4245672980  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t4245672980_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t4245672980  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t4245672980 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t4245672980  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t4245672980_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t4245672980  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t4245672980 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t4245672980  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t4245672980_StaticFields, ___Zero_2)); }
	inline TimeSpan_t4245672980  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t4245672980 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t4245672980  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T4245672980_H
#ifndef MARK_T1443507012_H
#define MARK_T1443507012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Mark
struct  Mark_t1443507012 
{
public:
	// System.Int32 System.Text.RegularExpressions.Mark::Start
	int32_t ___Start_0;
	// System.Int32 System.Text.RegularExpressions.Mark::End
	int32_t ___End_1;
	// System.Int32 System.Text.RegularExpressions.Mark::Previous
	int32_t ___Previous_2;

public:
	inline static int32_t get_offset_of_Start_0() { return static_cast<int32_t>(offsetof(Mark_t1443507012, ___Start_0)); }
	inline int32_t get_Start_0() const { return ___Start_0; }
	inline int32_t* get_address_of_Start_0() { return &___Start_0; }
	inline void set_Start_0(int32_t value)
	{
		___Start_0 = value;
	}

	inline static int32_t get_offset_of_End_1() { return static_cast<int32_t>(offsetof(Mark_t1443507012, ___End_1)); }
	inline int32_t get_End_1() const { return ___End_1; }
	inline int32_t* get_address_of_End_1() { return &___End_1; }
	inline void set_End_1(int32_t value)
	{
		___End_1 = value;
	}

	inline static int32_t get_offset_of_Previous_2() { return static_cast<int32_t>(offsetof(Mark_t1443507012, ___Previous_2)); }
	inline int32_t get_Previous_2() const { return ___Previous_2; }
	inline int32_t* get_address_of_Previous_2() { return &___Previous_2; }
	inline void set_Previous_2(int32_t value)
	{
		___Previous_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARK_T1443507012_H
#ifndef SEQUENTIALSEARCHPRIMEGENERATORBASE_T1148703292_H
#define SEQUENTIALSEARCHPRIMEGENERATORBASE_T1148703292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct  SequentialSearchPrimeGeneratorBase_t1148703292  : public PrimeGeneratorBase_t116314699
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEQUENTIALSEARCHPRIMEGENERATORBASE_T1148703292_H
#ifndef INTERVAL_T2247218728_H
#define INTERVAL_T2247218728_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Interval
struct  Interval_t2247218728 
{
public:
	// System.Int32 System.Text.RegularExpressions.Interval::low
	int32_t ___low_0;
	// System.Int32 System.Text.RegularExpressions.Interval::high
	int32_t ___high_1;
	// System.Boolean System.Text.RegularExpressions.Interval::contiguous
	bool ___contiguous_2;

public:
	inline static int32_t get_offset_of_low_0() { return static_cast<int32_t>(offsetof(Interval_t2247218728, ___low_0)); }
	inline int32_t get_low_0() const { return ___low_0; }
	inline int32_t* get_address_of_low_0() { return &___low_0; }
	inline void set_low_0(int32_t value)
	{
		___low_0 = value;
	}

	inline static int32_t get_offset_of_high_1() { return static_cast<int32_t>(offsetof(Interval_t2247218728, ___high_1)); }
	inline int32_t get_high_1() const { return ___high_1; }
	inline int32_t* get_address_of_high_1() { return &___high_1; }
	inline void set_high_1(int32_t value)
	{
		___high_1 = value;
	}

	inline static int32_t get_offset_of_contiguous_2() { return static_cast<int32_t>(offsetof(Interval_t2247218728, ___contiguous_2)); }
	inline bool get_contiguous_2() const { return ___contiguous_2; }
	inline bool* get_address_of_contiguous_2() { return &___contiguous_2; }
	inline void set_contiguous_2(bool value)
	{
		___contiguous_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Text.RegularExpressions.Interval
struct Interval_t2247218728_marshaled_pinvoke
{
	int32_t ___low_0;
	int32_t ___high_1;
	int32_t ___contiguous_2;
};
// Native definition for COM marshalling of System.Text.RegularExpressions.Interval
struct Interval_t2247218728_marshaled_com
{
	int32_t ___low_0;
	int32_t ___high_1;
	int32_t ___contiguous_2;
};
#endif // INTERVAL_T2247218728_H
#ifndef U24ARRAYTYPEU24128_T560175202_H
#define U24ARRAYTYPEU24128_T560175202_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$128
struct  U24ArrayTypeU24128_t560175202 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU24128_t560175202__padding[128];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24128_T560175202_H
#ifndef URITYPECONVERTER_T1967222779_H
#define URITYPECONVERTER_T1967222779_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriTypeConverter
struct  UriTypeConverter_t1967222779  : public TypeConverter_t2706085193
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URITYPECONVERTER_T1967222779_H
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
#ifndef LITERAL_T2851841497_H
#define LITERAL_T2851841497_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Literal
struct  Literal_t2851841497  : public Expression_t4065159133
{
public:
	// System.String System.Text.RegularExpressions.Syntax.Literal::str
	String_t* ___str_0;
	// System.Boolean System.Text.RegularExpressions.Syntax.Literal::ignore
	bool ___ignore_1;

public:
	inline static int32_t get_offset_of_str_0() { return static_cast<int32_t>(offsetof(Literal_t2851841497, ___str_0)); }
	inline String_t* get_str_0() const { return ___str_0; }
	inline String_t** get_address_of_str_0() { return &___str_0; }
	inline void set_str_0(String_t* value)
	{
		___str_0 = value;
		Il2CppCodeGenWriteBarrier((&___str_0), value);
	}

	inline static int32_t get_offset_of_ignore_1() { return static_cast<int32_t>(offsetof(Literal_t2851841497, ___ignore_1)); }
	inline bool get_ignore_1() const { return ___ignore_1; }
	inline bool* get_address_of_ignore_1() { return &___ignore_1; }
	inline void set_ignore_1(bool value)
	{
		___ignore_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LITERAL_T2851841497_H
#ifndef URISCHEME_T3469689422_H
#define URISCHEME_T3469689422_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri/UriScheme
struct  UriScheme_t3469689422 
{
public:
	// System.String System.Uri/UriScheme::scheme
	String_t* ___scheme_0;
	// System.String System.Uri/UriScheme::delimiter
	String_t* ___delimiter_1;
	// System.Int32 System.Uri/UriScheme::defaultPort
	int32_t ___defaultPort_2;

public:
	inline static int32_t get_offset_of_scheme_0() { return static_cast<int32_t>(offsetof(UriScheme_t3469689422, ___scheme_0)); }
	inline String_t* get_scheme_0() const { return ___scheme_0; }
	inline String_t** get_address_of_scheme_0() { return &___scheme_0; }
	inline void set_scheme_0(String_t* value)
	{
		___scheme_0 = value;
		Il2CppCodeGenWriteBarrier((&___scheme_0), value);
	}

	inline static int32_t get_offset_of_delimiter_1() { return static_cast<int32_t>(offsetof(UriScheme_t3469689422, ___delimiter_1)); }
	inline String_t* get_delimiter_1() const { return ___delimiter_1; }
	inline String_t** get_address_of_delimiter_1() { return &___delimiter_1; }
	inline void set_delimiter_1(String_t* value)
	{
		___delimiter_1 = value;
		Il2CppCodeGenWriteBarrier((&___delimiter_1), value);
	}

	inline static int32_t get_offset_of_defaultPort_2() { return static_cast<int32_t>(offsetof(UriScheme_t3469689422, ___defaultPort_2)); }
	inline int32_t get_defaultPort_2() const { return ___defaultPort_2; }
	inline int32_t* get_address_of_defaultPort_2() { return &___defaultPort_2; }
	inline void set_defaultPort_2(int32_t value)
	{
		___defaultPort_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Uri/UriScheme
struct UriScheme_t3469689422_marshaled_pinvoke
{
	char* ___scheme_0;
	char* ___delimiter_1;
	int32_t ___defaultPort_2;
};
// Native definition for COM marshalling of System.Uri/UriScheme
struct UriScheme_t3469689422_marshaled_com
{
	Il2CppChar* ___scheme_0;
	Il2CppChar* ___delimiter_1;
	int32_t ___defaultPort_2;
};
#endif // URISCHEME_T3469689422_H
#ifndef REFERENCE_T3461813273_H
#define REFERENCE_T3461813273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Reference
struct  Reference_t3461813273  : public Expression_t4065159133
{
public:
	// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.Reference::group
	CapturingGroup_t1422070797 * ___group_0;
	// System.Boolean System.Text.RegularExpressions.Syntax.Reference::ignore
	bool ___ignore_1;

public:
	inline static int32_t get_offset_of_group_0() { return static_cast<int32_t>(offsetof(Reference_t3461813273, ___group_0)); }
	inline CapturingGroup_t1422070797 * get_group_0() const { return ___group_0; }
	inline CapturingGroup_t1422070797 ** get_address_of_group_0() { return &___group_0; }
	inline void set_group_0(CapturingGroup_t1422070797 * value)
	{
		___group_0 = value;
		Il2CppCodeGenWriteBarrier((&___group_0), value);
	}

	inline static int32_t get_offset_of_ignore_1() { return static_cast<int32_t>(offsetof(Reference_t3461813273, ___ignore_1)); }
	inline bool get_ignore_1() const { return ___ignore_1; }
	inline bool* get_address_of_ignore_1() { return &___ignore_1; }
	inline void set_ignore_1(bool value)
	{
		___ignore_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCE_T3461813273_H
#ifndef GENERICURIPARSER_T1938952232_H
#define GENERICURIPARSER_T1938952232_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.GenericUriParser
struct  GenericUriParser_t1938952232  : public UriParser_t2799554438
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICURIPARSER_T1938952232_H
#ifndef U24ARRAYTYPEU2412_T1622843112_H
#define U24ARRAYTYPEU2412_T1622843112_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$12
struct  U24ArrayTypeU2412_t1622843112 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU2412_t1622843112__padding[12];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU2412_T1622843112_H
#ifndef DEFAULTURIPARSER_T1814608873_H
#define DEFAULTURIPARSER_T1814608873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DefaultUriParser
struct  DefaultUriParser_t1814608873  : public UriParser_t2799554438
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTURIPARSER_T1814608873_H
#ifndef GROUP_T834532941_H
#define GROUP_T834532941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Group
struct  Group_t834532941  : public CompositeExpression_t3919816724
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GROUP_T834532941_H
#ifndef URIHOSTNAMETYPE_T2941147398_H
#define URIHOSTNAMETYPE_T2941147398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriHostNameType
struct  UriHostNameType_t2941147398 
{
public:
	// System.Int32 System.UriHostNameType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UriHostNameType_t2941147398, ___value___1)); }
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
#endif // URIHOSTNAMETYPE_T2941147398_H
#ifndef REGEXOPTIONS_T533998351_H
#define REGEXOPTIONS_T533998351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.RegexOptions
struct  RegexOptions_t533998351 
{
public:
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RegexOptions_t533998351, ___value___1)); }
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
#endif // REGEXOPTIONS_T533998351_H
#ifndef CATEGORY_T1445217329_H
#define CATEGORY_T1445217329_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Category
struct  Category_t1445217329 
{
public:
	// System.UInt16 System.Text.RegularExpressions.Category::value__
	uint16_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Category_t1445217329, ___value___1)); }
	inline uint16_t get_value___1() const { return ___value___1; }
	inline uint16_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint16_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CATEGORY_T1445217329_H
#ifndef POSITION_T3351798989_H
#define POSITION_T3351798989_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Position
struct  Position_t3351798989 
{
public:
	// System.UInt16 System.Text.RegularExpressions.Position::value__
	uint16_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Position_t3351798989, ___value___1)); }
	inline uint16_t get_value___1() const { return ___value___1; }
	inline uint16_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint16_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITION_T3351798989_H
#ifndef X509CHAINSTATUSFLAGS_T4048765876_H
#define X509CHAINSTATUSFLAGS_T4048765876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509ChainStatusFlags
struct  X509ChainStatusFlags_t4048765876 
{
public:
	// System.Int32 Mono.Security.X509.X509ChainStatusFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509ChainStatusFlags_t4048765876, ___value___1)); }
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
#endif // X509CHAINSTATUSFLAGS_T4048765876_H
#ifndef PATTERNLINKSTACK_T3169453741_H
#define PATTERNLINKSTACK_T3169453741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack
struct  PatternLinkStack_t3169453741  : public LinkStack_t548527007
{
public:
	// System.Text.RegularExpressions.PatternCompiler/PatternLinkStack/Link System.Text.RegularExpressions.PatternCompiler/PatternLinkStack::link
	Link_t4132656200  ___link_1;

public:
	inline static int32_t get_offset_of_link_1() { return static_cast<int32_t>(offsetof(PatternLinkStack_t3169453741, ___link_1)); }
	inline Link_t4132656200  get_link_1() const { return ___link_1; }
	inline Link_t4132656200 * get_address_of_link_1() { return &___link_1; }
	inline void set_link_1(Link_t4132656200  value)
	{
		___link_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PATTERNLINKSTACK_T3169453741_H
#ifndef SSLPOLICYERRORS_T2928241611_H
#define SSLPOLICYERRORS_T2928241611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.SslPolicyErrors
struct  SslPolicyErrors_t2928241611 
{
public:
	// System.Int32 System.Net.Security.SslPolicyErrors::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SslPolicyErrors_t2928241611, ___value___1)); }
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
#endif // SSLPOLICYERRORS_T2928241611_H
#ifndef CHARACTERCLASS_T2836196651_H
#define CHARACTERCLASS_T2836196651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.CharacterClass
struct  CharacterClass_t2836196651  : public Expression_t4065159133
{
public:
	// System.Boolean System.Text.RegularExpressions.Syntax.CharacterClass::negate
	bool ___negate_1;
	// System.Boolean System.Text.RegularExpressions.Syntax.CharacterClass::ignore
	bool ___ignore_2;
	// System.Collections.BitArray System.Text.RegularExpressions.Syntax.CharacterClass::pos_cats
	BitArray_t1242506387 * ___pos_cats_3;
	// System.Collections.BitArray System.Text.RegularExpressions.Syntax.CharacterClass::neg_cats
	BitArray_t1242506387 * ___neg_cats_4;
	// System.Text.RegularExpressions.IntervalCollection System.Text.RegularExpressions.Syntax.CharacterClass::intervals
	IntervalCollection_t113444232 * ___intervals_5;

public:
	inline static int32_t get_offset_of_negate_1() { return static_cast<int32_t>(offsetof(CharacterClass_t2836196651, ___negate_1)); }
	inline bool get_negate_1() const { return ___negate_1; }
	inline bool* get_address_of_negate_1() { return &___negate_1; }
	inline void set_negate_1(bool value)
	{
		___negate_1 = value;
	}

	inline static int32_t get_offset_of_ignore_2() { return static_cast<int32_t>(offsetof(CharacterClass_t2836196651, ___ignore_2)); }
	inline bool get_ignore_2() const { return ___ignore_2; }
	inline bool* get_address_of_ignore_2() { return &___ignore_2; }
	inline void set_ignore_2(bool value)
	{
		___ignore_2 = value;
	}

	inline static int32_t get_offset_of_pos_cats_3() { return static_cast<int32_t>(offsetof(CharacterClass_t2836196651, ___pos_cats_3)); }
	inline BitArray_t1242506387 * get_pos_cats_3() const { return ___pos_cats_3; }
	inline BitArray_t1242506387 ** get_address_of_pos_cats_3() { return &___pos_cats_3; }
	inline void set_pos_cats_3(BitArray_t1242506387 * value)
	{
		___pos_cats_3 = value;
		Il2CppCodeGenWriteBarrier((&___pos_cats_3), value);
	}

	inline static int32_t get_offset_of_neg_cats_4() { return static_cast<int32_t>(offsetof(CharacterClass_t2836196651, ___neg_cats_4)); }
	inline BitArray_t1242506387 * get_neg_cats_4() const { return ___neg_cats_4; }
	inline BitArray_t1242506387 ** get_address_of_neg_cats_4() { return &___neg_cats_4; }
	inline void set_neg_cats_4(BitArray_t1242506387 * value)
	{
		___neg_cats_4 = value;
		Il2CppCodeGenWriteBarrier((&___neg_cats_4), value);
	}

	inline static int32_t get_offset_of_intervals_5() { return static_cast<int32_t>(offsetof(CharacterClass_t2836196651, ___intervals_5)); }
	inline IntervalCollection_t113444232 * get_intervals_5() const { return ___intervals_5; }
	inline IntervalCollection_t113444232 ** get_address_of_intervals_5() { return &___intervals_5; }
	inline void set_intervals_5(IntervalCollection_t113444232 * value)
	{
		___intervals_5 = value;
		Il2CppCodeGenWriteBarrier((&___intervals_5), value);
	}
};

struct CharacterClass_t2836196651_StaticFields
{
public:
	// System.Text.RegularExpressions.Interval System.Text.RegularExpressions.Syntax.CharacterClass::upper_case_characters
	Interval_t2247218728  ___upper_case_characters_0;

public:
	inline static int32_t get_offset_of_upper_case_characters_0() { return static_cast<int32_t>(offsetof(CharacterClass_t2836196651_StaticFields, ___upper_case_characters_0)); }
	inline Interval_t2247218728  get_upper_case_characters_0() const { return ___upper_case_characters_0; }
	inline Interval_t2247218728 * get_address_of_upper_case_characters_0() { return &___upper_case_characters_0; }
	inline void set_upper_case_characters_0(Interval_t2247218728  value)
	{
		___upper_case_characters_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERCLASS_T2836196651_H
#ifndef BACKSLASHNUMBER_T2199847709_H
#define BACKSLASHNUMBER_T2199847709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.BackslashNumber
struct  BackslashNumber_t2199847709  : public Reference_t3461813273
{
public:
	// System.String System.Text.RegularExpressions.Syntax.BackslashNumber::literal
	String_t* ___literal_2;
	// System.Boolean System.Text.RegularExpressions.Syntax.BackslashNumber::ecma
	bool ___ecma_3;

public:
	inline static int32_t get_offset_of_literal_2() { return static_cast<int32_t>(offsetof(BackslashNumber_t2199847709, ___literal_2)); }
	inline String_t* get_literal_2() const { return ___literal_2; }
	inline String_t** get_address_of_literal_2() { return &___literal_2; }
	inline void set_literal_2(String_t* value)
	{
		___literal_2 = value;
		Il2CppCodeGenWriteBarrier((&___literal_2), value);
	}

	inline static int32_t get_offset_of_ecma_3() { return static_cast<int32_t>(offsetof(BackslashNumber_t2199847709, ___ecma_3)); }
	inline bool get_ecma_3() const { return ___ecma_3; }
	inline bool* get_address_of_ecma_3() { return &___ecma_3; }
	inline void set_ecma_3(bool value)
	{
		___ecma_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BACKSLASHNUMBER_T2199847709_H
#ifndef DELEGATE_T1206053534_H
#define DELEGATE_T1206053534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1206053534  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t3634506307 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1206053534, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1206053534, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1206053534, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1206053534, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1206053534, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1206053534, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1206053534, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1206053534, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1206053534, ___data_8)); }
	inline DelegateData_t3634506307 * get_data_8() const { return ___data_8; }
	inline DelegateData_t3634506307 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t3634506307 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1206053534_H
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
#ifndef DATETIMEKIND_T2841757417_H
#define DATETIMEKIND_T2841757417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t2841757417 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t2841757417, ___value___1)); }
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
#endif // DATETIMEKIND_T2841757417_H
#ifndef FORMATEXCEPTION_T574903596_H
#define FORMATEXCEPTION_T574903596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FormatException
struct  FormatException_t574903596  : public SystemException_t2455424764
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATEXCEPTION_T574903596_H
#ifndef URIKIND_T1875010135_H
#define URIKIND_T1875010135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriKind
struct  UriKind_t1875010135 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UriKind_t1875010135, ___value___1)); }
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
#endif // URIKIND_T1875010135_H
#ifndef ALTERNATION_T3285488224_H
#define ALTERNATION_T3285488224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Alternation
struct  Alternation_t3285488224  : public CompositeExpression_t3919816724
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALTERNATION_T3285488224_H
#ifndef ASSERTION_T1762372275_H
#define ASSERTION_T1762372275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Assertion
struct  Assertion_t1762372275  : public CompositeExpression_t3919816724
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSERTION_T1762372275_H
#ifndef CONFIDENCEFACTOR_T1786425076_H
#define CONFIDENCEFACTOR_T1786425076_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.Prime.ConfidenceFactor
struct  ConfidenceFactor_t1786425076 
{
public:
	// System.Int32 Mono.Math.Prime.ConfidenceFactor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConfidenceFactor_t1786425076, ___value___1)); }
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
#endif // CONFIDENCEFACTOR_T1786425076_H
#ifndef SIGN_T3906726758_H
#define SIGN_T3906726758_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Math.BigInteger/Sign
struct  Sign_t3906726758 
{
public:
	// System.Int32 Mono.Math.BigInteger/Sign::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Sign_t3906726758, ___value___1)); }
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
#endif // SIGN_T3906726758_H
#ifndef REPETITION_T1858708895_H
#define REPETITION_T1858708895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.Repetition
struct  Repetition_t1858708895  : public CompositeExpression_t3919816724
{
public:
	// System.Int32 System.Text.RegularExpressions.Syntax.Repetition::min
	int32_t ___min_1;
	// System.Int32 System.Text.RegularExpressions.Syntax.Repetition::max
	int32_t ___max_2;
	// System.Boolean System.Text.RegularExpressions.Syntax.Repetition::lazy
	bool ___lazy_3;

public:
	inline static int32_t get_offset_of_min_1() { return static_cast<int32_t>(offsetof(Repetition_t1858708895, ___min_1)); }
	inline int32_t get_min_1() const { return ___min_1; }
	inline int32_t* get_address_of_min_1() { return &___min_1; }
	inline void set_min_1(int32_t value)
	{
		___min_1 = value;
	}

	inline static int32_t get_offset_of_max_2() { return static_cast<int32_t>(offsetof(Repetition_t1858708895, ___max_2)); }
	inline int32_t get_max_2() const { return ___max_2; }
	inline int32_t* get_address_of_max_2() { return &___max_2; }
	inline void set_max_2(int32_t value)
	{
		___max_2 = value;
	}

	inline static int32_t get_offset_of_lazy_3() { return static_cast<int32_t>(offsetof(Repetition_t1858708895, ___lazy_3)); }
	inline bool get_lazy_3() const { return ___lazy_3; }
	inline bool* get_address_of_lazy_3() { return &___lazy_3; }
	inline void set_lazy_3(bool value)
	{
		___lazy_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REPETITION_T1858708895_H
#ifndef MD2MANAGED_T325620174_H
#define MD2MANAGED_T325620174_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD2Managed
struct  MD2Managed_t325620174  : public MD2_t1463594897
{
public:
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::state
	ByteU5BU5D_t317375469* ___state_4;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::checksum
	ByteU5BU5D_t317375469* ___checksum_5;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::buffer
	ByteU5BU5D_t317375469* ___buffer_6;
	// System.Int32 Mono.Security.Cryptography.MD2Managed::count
	int32_t ___count_7;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::x
	ByteU5BU5D_t317375469* ___x_8;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(MD2Managed_t325620174, ___state_4)); }
	inline ByteU5BU5D_t317375469* get_state_4() const { return ___state_4; }
	inline ByteU5BU5D_t317375469** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(ByteU5BU5D_t317375469* value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((&___state_4), value);
	}

	inline static int32_t get_offset_of_checksum_5() { return static_cast<int32_t>(offsetof(MD2Managed_t325620174, ___checksum_5)); }
	inline ByteU5BU5D_t317375469* get_checksum_5() const { return ___checksum_5; }
	inline ByteU5BU5D_t317375469** get_address_of_checksum_5() { return &___checksum_5; }
	inline void set_checksum_5(ByteU5BU5D_t317375469* value)
	{
		___checksum_5 = value;
		Il2CppCodeGenWriteBarrier((&___checksum_5), value);
	}

	inline static int32_t get_offset_of_buffer_6() { return static_cast<int32_t>(offsetof(MD2Managed_t325620174, ___buffer_6)); }
	inline ByteU5BU5D_t317375469* get_buffer_6() const { return ___buffer_6; }
	inline ByteU5BU5D_t317375469** get_address_of_buffer_6() { return &___buffer_6; }
	inline void set_buffer_6(ByteU5BU5D_t317375469* value)
	{
		___buffer_6 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_6), value);
	}

	inline static int32_t get_offset_of_count_7() { return static_cast<int32_t>(offsetof(MD2Managed_t325620174, ___count_7)); }
	inline int32_t get_count_7() const { return ___count_7; }
	inline int32_t* get_address_of_count_7() { return &___count_7; }
	inline void set_count_7(int32_t value)
	{
		___count_7 = value;
	}

	inline static int32_t get_offset_of_x_8() { return static_cast<int32_t>(offsetof(MD2Managed_t325620174, ___x_8)); }
	inline ByteU5BU5D_t317375469* get_x_8() const { return ___x_8; }
	inline ByteU5BU5D_t317375469** get_address_of_x_8() { return &___x_8; }
	inline void set_x_8(ByteU5BU5D_t317375469* value)
	{
		___x_8 = value;
		Il2CppCodeGenWriteBarrier((&___x_8), value);
	}
};

struct MD2Managed_t325620174_StaticFields
{
public:
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::PI_SUBST
	ByteU5BU5D_t317375469* ___PI_SUBST_9;

public:
	inline static int32_t get_offset_of_PI_SUBST_9() { return static_cast<int32_t>(offsetof(MD2Managed_t325620174_StaticFields, ___PI_SUBST_9)); }
	inline ByteU5BU5D_t317375469* get_PI_SUBST_9() const { return ___PI_SUBST_9; }
	inline ByteU5BU5D_t317375469** get_address_of_PI_SUBST_9() { return &___PI_SUBST_9; }
	inline void set_PI_SUBST_9(ByteU5BU5D_t317375469* value)
	{
		___PI_SUBST_9 = value;
		Il2CppCodeGenWriteBarrier((&___PI_SUBST_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD2MANAGED_T325620174_H
#ifndef MODE_T592373259_H
#define MODE_T592373259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Interpreter/Mode
struct  Mode_t592373259 
{
public:
	// System.Int32 System.Text.RegularExpressions.Interpreter/Mode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Mode_t592373259, ___value___1)); }
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
#endif // MODE_T592373259_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T916507510_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T916507510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t916507510  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t916507510_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$128 <PrivateImplementationDetails>::$$field-2
	U24ArrayTypeU24128_t560175202  ___U24U24fieldU2D2_0;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-3
	U24ArrayTypeU2412_t1622843112  ___U24U24fieldU2D3_1;
	// <PrivateImplementationDetails>/$ArrayType$12 <PrivateImplementationDetails>::$$field-4
	U24ArrayTypeU2412_t1622843112  ___U24U24fieldU2D4_2;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D2_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t916507510_StaticFields, ___U24U24fieldU2D2_0)); }
	inline U24ArrayTypeU24128_t560175202  get_U24U24fieldU2D2_0() const { return ___U24U24fieldU2D2_0; }
	inline U24ArrayTypeU24128_t560175202 * get_address_of_U24U24fieldU2D2_0() { return &___U24U24fieldU2D2_0; }
	inline void set_U24U24fieldU2D2_0(U24ArrayTypeU24128_t560175202  value)
	{
		___U24U24fieldU2D2_0 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D3_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t916507510_StaticFields, ___U24U24fieldU2D3_1)); }
	inline U24ArrayTypeU2412_t1622843112  get_U24U24fieldU2D3_1() const { return ___U24U24fieldU2D3_1; }
	inline U24ArrayTypeU2412_t1622843112 * get_address_of_U24U24fieldU2D3_1() { return &___U24U24fieldU2D3_1; }
	inline void set_U24U24fieldU2D3_1(U24ArrayTypeU2412_t1622843112  value)
	{
		___U24U24fieldU2D3_1 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D4_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t916507510_StaticFields, ___U24U24fieldU2D4_2)); }
	inline U24ArrayTypeU2412_t1622843112  get_U24U24fieldU2D4_2() const { return ___U24U24fieldU2D4_2; }
	inline U24ArrayTypeU2412_t1622843112 * get_address_of_U24U24fieldU2D4_2() { return &___U24U24fieldU2D4_2; }
	inline void set_U24U24fieldU2D4_2(U24ArrayTypeU2412_t1622843112  value)
	{
		___U24U24fieldU2D4_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T916507510_H
#ifndef RSAMANAGED_T421323776_H
#define RSAMANAGED_T421323776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RSAManaged
struct  RSAManaged_t421323776  : public RSA_t1050577473
{
public:
	// System.Boolean Mono.Security.Cryptography.RSAManaged::isCRTpossible
	bool ___isCRTpossible_2;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keyBlinding
	bool ___keyBlinding_3;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keypairGenerated
	bool ___keypairGenerated_4;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::m_disposed
	bool ___m_disposed_5;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::d
	BigInteger_t1084564621 * ___d_6;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::p
	BigInteger_t1084564621 * ___p_7;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::q
	BigInteger_t1084564621 * ___q_8;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dp
	BigInteger_t1084564621 * ___dp_9;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dq
	BigInteger_t1084564621 * ___dq_10;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::qInv
	BigInteger_t1084564621 * ___qInv_11;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::n
	BigInteger_t1084564621 * ___n_12;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::e
	BigInteger_t1084564621 * ___e_13;
	// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler Mono.Security.Cryptography.RSAManaged::KeyGenerated
	KeyGeneratedEventHandler_t3890555599 * ___KeyGenerated_14;

public:
	inline static int32_t get_offset_of_isCRTpossible_2() { return static_cast<int32_t>(offsetof(RSAManaged_t421323776, ___isCRTpossible_2)); }
	inline bool get_isCRTpossible_2() const { return ___isCRTpossible_2; }
	inline bool* get_address_of_isCRTpossible_2() { return &___isCRTpossible_2; }
	inline void set_isCRTpossible_2(bool value)
	{
		___isCRTpossible_2 = value;
	}

	inline static int32_t get_offset_of_keyBlinding_3() { return static_cast<int32_t>(offsetof(RSAManaged_t421323776, ___keyBlinding_3)); }
	inline bool get_keyBlinding_3() const { return ___keyBlinding_3; }
	inline bool* get_address_of_keyBlinding_3() { return &___keyBlinding_3; }
	inline void set_keyBlinding_3(bool value)
	{
		___keyBlinding_3 = value;
	}

	inline static int32_t get_offset_of_keypairGenerated_4() { return static_cast<int32_t>(offsetof(RSAManaged_t421323776, ___keypairGenerated_4)); }
	inline bool get_keypairGenerated_4() const { return ___keypairGenerated_4; }
	inline bool* get_address_of_keypairGenerated_4() { return &___keypairGenerated_4; }
	inline void set_keypairGenerated_4(bool value)
	{
		___keypairGenerated_4 = value;
	}

	inline static int32_t get_offset_of_m_disposed_5() { return static_cast<int32_t>(offsetof(RSAManaged_t421323776, ___m_disposed_5)); }
	inline bool get_m_disposed_5() const { return ___m_disposed_5; }
	inline bool* get_address_of_m_disposed_5() { return &___m_disposed_5; }
	inline void set_m_disposed_5(bool value)
	{
		___m_disposed_5 = value;
	}

	inline static int32_t get_offset_of_d_6() { return static_cast<int32_t>(offsetof(RSAManaged_t421323776, ___d_6)); }
	inline BigInteger_t1084564621 * get_d_6() const { return ___d_6; }
	inline BigInteger_t1084564621 ** get_address_of_d_6() { return &___d_6; }
	inline void set_d_6(BigInteger_t1084564621 * value)
	{
		___d_6 = value;
		Il2CppCodeGenWriteBarrier((&___d_6), value);
	}

	inline static int32_t get_offset_of_p_7() { return static_cast<int32_t>(offsetof(RSAManaged_t421323776, ___p_7)); }
	inline BigInteger_t1084564621 * get_p_7() const { return ___p_7; }
	inline BigInteger_t1084564621 ** get_address_of_p_7() { return &___p_7; }
	inline void set_p_7(BigInteger_t1084564621 * value)
	{
		___p_7 = value;
		Il2CppCodeGenWriteBarrier((&___p_7), value);
	}

	inline static int32_t get_offset_of_q_8() { return static_cast<int32_t>(offsetof(RSAManaged_t421323776, ___q_8)); }
	inline BigInteger_t1084564621 * get_q_8() const { return ___q_8; }
	inline BigInteger_t1084564621 ** get_address_of_q_8() { return &___q_8; }
	inline void set_q_8(BigInteger_t1084564621 * value)
	{
		___q_8 = value;
		Il2CppCodeGenWriteBarrier((&___q_8), value);
	}

	inline static int32_t get_offset_of_dp_9() { return static_cast<int32_t>(offsetof(RSAManaged_t421323776, ___dp_9)); }
	inline BigInteger_t1084564621 * get_dp_9() const { return ___dp_9; }
	inline BigInteger_t1084564621 ** get_address_of_dp_9() { return &___dp_9; }
	inline void set_dp_9(BigInteger_t1084564621 * value)
	{
		___dp_9 = value;
		Il2CppCodeGenWriteBarrier((&___dp_9), value);
	}

	inline static int32_t get_offset_of_dq_10() { return static_cast<int32_t>(offsetof(RSAManaged_t421323776, ___dq_10)); }
	inline BigInteger_t1084564621 * get_dq_10() const { return ___dq_10; }
	inline BigInteger_t1084564621 ** get_address_of_dq_10() { return &___dq_10; }
	inline void set_dq_10(BigInteger_t1084564621 * value)
	{
		___dq_10 = value;
		Il2CppCodeGenWriteBarrier((&___dq_10), value);
	}

	inline static int32_t get_offset_of_qInv_11() { return static_cast<int32_t>(offsetof(RSAManaged_t421323776, ___qInv_11)); }
	inline BigInteger_t1084564621 * get_qInv_11() const { return ___qInv_11; }
	inline BigInteger_t1084564621 ** get_address_of_qInv_11() { return &___qInv_11; }
	inline void set_qInv_11(BigInteger_t1084564621 * value)
	{
		___qInv_11 = value;
		Il2CppCodeGenWriteBarrier((&___qInv_11), value);
	}

	inline static int32_t get_offset_of_n_12() { return static_cast<int32_t>(offsetof(RSAManaged_t421323776, ___n_12)); }
	inline BigInteger_t1084564621 * get_n_12() const { return ___n_12; }
	inline BigInteger_t1084564621 ** get_address_of_n_12() { return &___n_12; }
	inline void set_n_12(BigInteger_t1084564621 * value)
	{
		___n_12 = value;
		Il2CppCodeGenWriteBarrier((&___n_12), value);
	}

	inline static int32_t get_offset_of_e_13() { return static_cast<int32_t>(offsetof(RSAManaged_t421323776, ___e_13)); }
	inline BigInteger_t1084564621 * get_e_13() const { return ___e_13; }
	inline BigInteger_t1084564621 ** get_address_of_e_13() { return &___e_13; }
	inline void set_e_13(BigInteger_t1084564621 * value)
	{
		___e_13 = value;
		Il2CppCodeGenWriteBarrier((&___e_13), value);
	}

	inline static int32_t get_offset_of_KeyGenerated_14() { return static_cast<int32_t>(offsetof(RSAManaged_t421323776, ___KeyGenerated_14)); }
	inline KeyGeneratedEventHandler_t3890555599 * get_KeyGenerated_14() const { return ___KeyGenerated_14; }
	inline KeyGeneratedEventHandler_t3890555599 ** get_address_of_KeyGenerated_14() { return &___KeyGenerated_14; }
	inline void set_KeyGenerated_14(KeyGeneratedEventHandler_t3890555599 * value)
	{
		___KeyGenerated_14 = value;
		Il2CppCodeGenWriteBarrier((&___KeyGenerated_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAMANAGED_T421323776_H
#ifndef MD4MANAGED_T3872286673_H
#define MD4MANAGED_T3872286673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD4Managed
struct  MD4Managed_t3872286673  : public MD4_t758093402
{
public:
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::state
	UInt32U5BU5D_t1435100350* ___state_4;
	// System.Byte[] Mono.Security.Cryptography.MD4Managed::buffer
	ByteU5BU5D_t317375469* ___buffer_5;
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::count
	UInt32U5BU5D_t1435100350* ___count_6;
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::x
	UInt32U5BU5D_t1435100350* ___x_7;
	// System.Byte[] Mono.Security.Cryptography.MD4Managed::digest
	ByteU5BU5D_t317375469* ___digest_8;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(MD4Managed_t3872286673, ___state_4)); }
	inline UInt32U5BU5D_t1435100350* get_state_4() const { return ___state_4; }
	inline UInt32U5BU5D_t1435100350** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(UInt32U5BU5D_t1435100350* value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((&___state_4), value);
	}

	inline static int32_t get_offset_of_buffer_5() { return static_cast<int32_t>(offsetof(MD4Managed_t3872286673, ___buffer_5)); }
	inline ByteU5BU5D_t317375469* get_buffer_5() const { return ___buffer_5; }
	inline ByteU5BU5D_t317375469** get_address_of_buffer_5() { return &___buffer_5; }
	inline void set_buffer_5(ByteU5BU5D_t317375469* value)
	{
		___buffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_5), value);
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(MD4Managed_t3872286673, ___count_6)); }
	inline UInt32U5BU5D_t1435100350* get_count_6() const { return ___count_6; }
	inline UInt32U5BU5D_t1435100350** get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(UInt32U5BU5D_t1435100350* value)
	{
		___count_6 = value;
		Il2CppCodeGenWriteBarrier((&___count_6), value);
	}

	inline static int32_t get_offset_of_x_7() { return static_cast<int32_t>(offsetof(MD4Managed_t3872286673, ___x_7)); }
	inline UInt32U5BU5D_t1435100350* get_x_7() const { return ___x_7; }
	inline UInt32U5BU5D_t1435100350** get_address_of_x_7() { return &___x_7; }
	inline void set_x_7(UInt32U5BU5D_t1435100350* value)
	{
		___x_7 = value;
		Il2CppCodeGenWriteBarrier((&___x_7), value);
	}

	inline static int32_t get_offset_of_digest_8() { return static_cast<int32_t>(offsetof(MD4Managed_t3872286673, ___digest_8)); }
	inline ByteU5BU5D_t317375469* get_digest_8() const { return ___digest_8; }
	inline ByteU5BU5D_t317375469** get_address_of_digest_8() { return &___digest_8; }
	inline void set_digest_8(ByteU5BU5D_t317375469* value)
	{
		___digest_8 = value;
		Il2CppCodeGenWriteBarrier((&___digest_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD4MANAGED_T3872286673_H
#ifndef URIPARTIAL_T2362464627_H
#define URIPARTIAL_T2362464627_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriPartial
struct  UriPartial_t2362464627 
{
public:
	// System.Int32 System.UriPartial::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UriPartial_t2362464627, ___value___1)); }
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
#endif // URIPARTIAL_T2362464627_H
#ifndef INTERPRETER_T426061704_H
#define INTERPRETER_T426061704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Interpreter
struct  Interpreter_t426061704  : public BaseMachine_t370348258
{
public:
	// System.UInt16[] System.Text.RegularExpressions.Interpreter::program
	UInt16U5BU5D_t3499399594* ___program_1;
	// System.Int32 System.Text.RegularExpressions.Interpreter::program_start
	int32_t ___program_start_2;
	// System.String System.Text.RegularExpressions.Interpreter::text
	String_t* ___text_3;
	// System.Int32 System.Text.RegularExpressions.Interpreter::text_end
	int32_t ___text_end_4;
	// System.Int32 System.Text.RegularExpressions.Interpreter::group_count
	int32_t ___group_count_5;
	// System.Int32 System.Text.RegularExpressions.Interpreter::match_min
	int32_t ___match_min_6;
	// System.Text.RegularExpressions.QuickSearch System.Text.RegularExpressions.Interpreter::qs
	QuickSearch_t4207793344 * ___qs_7;
	// System.Int32 System.Text.RegularExpressions.Interpreter::scan_ptr
	int32_t ___scan_ptr_8;
	// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter::repeat
	RepeatContext_t3152651949 * ___repeat_9;
	// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter::fast
	RepeatContext_t3152651949 * ___fast_10;
	// System.Text.RegularExpressions.Interpreter/IntStack System.Text.RegularExpressions.Interpreter::stack
	IntStack_t1949821567  ___stack_11;
	// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter::deep
	RepeatContext_t3152651949 * ___deep_12;
	// System.Text.RegularExpressions.Mark[] System.Text.RegularExpressions.Interpreter::marks
	MarkU5BU5D_t3128691501* ___marks_13;
	// System.Int32 System.Text.RegularExpressions.Interpreter::mark_start
	int32_t ___mark_start_14;
	// System.Int32 System.Text.RegularExpressions.Interpreter::mark_end
	int32_t ___mark_end_15;
	// System.Int32[] System.Text.RegularExpressions.Interpreter::groups
	Int32U5BU5D_t246198214* ___groups_16;

public:
	inline static int32_t get_offset_of_program_1() { return static_cast<int32_t>(offsetof(Interpreter_t426061704, ___program_1)); }
	inline UInt16U5BU5D_t3499399594* get_program_1() const { return ___program_1; }
	inline UInt16U5BU5D_t3499399594** get_address_of_program_1() { return &___program_1; }
	inline void set_program_1(UInt16U5BU5D_t3499399594* value)
	{
		___program_1 = value;
		Il2CppCodeGenWriteBarrier((&___program_1), value);
	}

	inline static int32_t get_offset_of_program_start_2() { return static_cast<int32_t>(offsetof(Interpreter_t426061704, ___program_start_2)); }
	inline int32_t get_program_start_2() const { return ___program_start_2; }
	inline int32_t* get_address_of_program_start_2() { return &___program_start_2; }
	inline void set_program_start_2(int32_t value)
	{
		___program_start_2 = value;
	}

	inline static int32_t get_offset_of_text_3() { return static_cast<int32_t>(offsetof(Interpreter_t426061704, ___text_3)); }
	inline String_t* get_text_3() const { return ___text_3; }
	inline String_t** get_address_of_text_3() { return &___text_3; }
	inline void set_text_3(String_t* value)
	{
		___text_3 = value;
		Il2CppCodeGenWriteBarrier((&___text_3), value);
	}

	inline static int32_t get_offset_of_text_end_4() { return static_cast<int32_t>(offsetof(Interpreter_t426061704, ___text_end_4)); }
	inline int32_t get_text_end_4() const { return ___text_end_4; }
	inline int32_t* get_address_of_text_end_4() { return &___text_end_4; }
	inline void set_text_end_4(int32_t value)
	{
		___text_end_4 = value;
	}

	inline static int32_t get_offset_of_group_count_5() { return static_cast<int32_t>(offsetof(Interpreter_t426061704, ___group_count_5)); }
	inline int32_t get_group_count_5() const { return ___group_count_5; }
	inline int32_t* get_address_of_group_count_5() { return &___group_count_5; }
	inline void set_group_count_5(int32_t value)
	{
		___group_count_5 = value;
	}

	inline static int32_t get_offset_of_match_min_6() { return static_cast<int32_t>(offsetof(Interpreter_t426061704, ___match_min_6)); }
	inline int32_t get_match_min_6() const { return ___match_min_6; }
	inline int32_t* get_address_of_match_min_6() { return &___match_min_6; }
	inline void set_match_min_6(int32_t value)
	{
		___match_min_6 = value;
	}

	inline static int32_t get_offset_of_qs_7() { return static_cast<int32_t>(offsetof(Interpreter_t426061704, ___qs_7)); }
	inline QuickSearch_t4207793344 * get_qs_7() const { return ___qs_7; }
	inline QuickSearch_t4207793344 ** get_address_of_qs_7() { return &___qs_7; }
	inline void set_qs_7(QuickSearch_t4207793344 * value)
	{
		___qs_7 = value;
		Il2CppCodeGenWriteBarrier((&___qs_7), value);
	}

	inline static int32_t get_offset_of_scan_ptr_8() { return static_cast<int32_t>(offsetof(Interpreter_t426061704, ___scan_ptr_8)); }
	inline int32_t get_scan_ptr_8() const { return ___scan_ptr_8; }
	inline int32_t* get_address_of_scan_ptr_8() { return &___scan_ptr_8; }
	inline void set_scan_ptr_8(int32_t value)
	{
		___scan_ptr_8 = value;
	}

	inline static int32_t get_offset_of_repeat_9() { return static_cast<int32_t>(offsetof(Interpreter_t426061704, ___repeat_9)); }
	inline RepeatContext_t3152651949 * get_repeat_9() const { return ___repeat_9; }
	inline RepeatContext_t3152651949 ** get_address_of_repeat_9() { return &___repeat_9; }
	inline void set_repeat_9(RepeatContext_t3152651949 * value)
	{
		___repeat_9 = value;
		Il2CppCodeGenWriteBarrier((&___repeat_9), value);
	}

	inline static int32_t get_offset_of_fast_10() { return static_cast<int32_t>(offsetof(Interpreter_t426061704, ___fast_10)); }
	inline RepeatContext_t3152651949 * get_fast_10() const { return ___fast_10; }
	inline RepeatContext_t3152651949 ** get_address_of_fast_10() { return &___fast_10; }
	inline void set_fast_10(RepeatContext_t3152651949 * value)
	{
		___fast_10 = value;
		Il2CppCodeGenWriteBarrier((&___fast_10), value);
	}

	inline static int32_t get_offset_of_stack_11() { return static_cast<int32_t>(offsetof(Interpreter_t426061704, ___stack_11)); }
	inline IntStack_t1949821567  get_stack_11() const { return ___stack_11; }
	inline IntStack_t1949821567 * get_address_of_stack_11() { return &___stack_11; }
	inline void set_stack_11(IntStack_t1949821567  value)
	{
		___stack_11 = value;
	}

	inline static int32_t get_offset_of_deep_12() { return static_cast<int32_t>(offsetof(Interpreter_t426061704, ___deep_12)); }
	inline RepeatContext_t3152651949 * get_deep_12() const { return ___deep_12; }
	inline RepeatContext_t3152651949 ** get_address_of_deep_12() { return &___deep_12; }
	inline void set_deep_12(RepeatContext_t3152651949 * value)
	{
		___deep_12 = value;
		Il2CppCodeGenWriteBarrier((&___deep_12), value);
	}

	inline static int32_t get_offset_of_marks_13() { return static_cast<int32_t>(offsetof(Interpreter_t426061704, ___marks_13)); }
	inline MarkU5BU5D_t3128691501* get_marks_13() const { return ___marks_13; }
	inline MarkU5BU5D_t3128691501** get_address_of_marks_13() { return &___marks_13; }
	inline void set_marks_13(MarkU5BU5D_t3128691501* value)
	{
		___marks_13 = value;
		Il2CppCodeGenWriteBarrier((&___marks_13), value);
	}

	inline static int32_t get_offset_of_mark_start_14() { return static_cast<int32_t>(offsetof(Interpreter_t426061704, ___mark_start_14)); }
	inline int32_t get_mark_start_14() const { return ___mark_start_14; }
	inline int32_t* get_address_of_mark_start_14() { return &___mark_start_14; }
	inline void set_mark_start_14(int32_t value)
	{
		___mark_start_14 = value;
	}

	inline static int32_t get_offset_of_mark_end_15() { return static_cast<int32_t>(offsetof(Interpreter_t426061704, ___mark_end_15)); }
	inline int32_t get_mark_end_15() const { return ___mark_end_15; }
	inline int32_t* get_address_of_mark_end_15() { return &___mark_end_15; }
	inline void set_mark_end_15(int32_t value)
	{
		___mark_end_15 = value;
	}

	inline static int32_t get_offset_of_groups_16() { return static_cast<int32_t>(offsetof(Interpreter_t426061704, ___groups_16)); }
	inline Int32U5BU5D_t246198214* get_groups_16() const { return ___groups_16; }
	inline Int32U5BU5D_t246198214** get_address_of_groups_16() { return &___groups_16; }
	inline void set_groups_16(Int32U5BU5D_t246198214* value)
	{
		___groups_16 = value;
		Il2CppCodeGenWriteBarrier((&___groups_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERPRETER_T426061704_H
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
#ifndef CAPTURINGGROUP_T1422070797_H
#define CAPTURINGGROUP_T1422070797_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.CapturingGroup
struct  CapturingGroup_t1422070797  : public Group_t834532941
{
public:
	// System.Int32 System.Text.RegularExpressions.Syntax.CapturingGroup::gid
	int32_t ___gid_1;
	// System.String System.Text.RegularExpressions.Syntax.CapturingGroup::name
	String_t* ___name_2;

public:
	inline static int32_t get_offset_of_gid_1() { return static_cast<int32_t>(offsetof(CapturingGroup_t1422070797, ___gid_1)); }
	inline int32_t get_gid_1() const { return ___gid_1; }
	inline int32_t* get_address_of_gid_1() { return &___gid_1; }
	inline void set_gid_1(int32_t value)
	{
		___gid_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(CapturingGroup_t1422070797, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPTURINGGROUP_T1422070797_H
#ifndef KEY_T2732603035_H
#define KEY_T2732603035_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.FactoryCache/Key
struct  Key_t2732603035  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.FactoryCache/Key::pattern
	String_t* ___pattern_0;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.FactoryCache/Key::options
	int32_t ___options_1;

public:
	inline static int32_t get_offset_of_pattern_0() { return static_cast<int32_t>(offsetof(Key_t2732603035, ___pattern_0)); }
	inline String_t* get_pattern_0() const { return ___pattern_0; }
	inline String_t** get_address_of_pattern_0() { return &___pattern_0; }
	inline void set_pattern_0(String_t* value)
	{
		___pattern_0 = value;
		Il2CppCodeGenWriteBarrier((&___pattern_0), value);
	}

	inline static int32_t get_offset_of_options_1() { return static_cast<int32_t>(offsetof(Key_t2732603035, ___options_1)); }
	inline int32_t get_options_1() const { return ___options_1; }
	inline int32_t* get_address_of_options_1() { return &___options_1; }
	inline void set_options_1(int32_t value)
	{
		___options_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEY_T2732603035_H
#ifndef X509CHAIN_T75116022_H
#define X509CHAIN_T75116022_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Chain
struct  X509Chain_t75116022  : public RuntimeObject
{
public:
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::roots
	X509CertificateCollection_t1330376034 * ___roots_0;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::certs
	X509CertificateCollection_t1330376034 * ___certs_1;
	// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::_root
	X509Certificate_t223010983 * ____root_2;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::_chain
	X509CertificateCollection_t1330376034 * ____chain_3;
	// Mono.Security.X509.X509ChainStatusFlags Mono.Security.X509.X509Chain::_status
	int32_t ____status_4;

public:
	inline static int32_t get_offset_of_roots_0() { return static_cast<int32_t>(offsetof(X509Chain_t75116022, ___roots_0)); }
	inline X509CertificateCollection_t1330376034 * get_roots_0() const { return ___roots_0; }
	inline X509CertificateCollection_t1330376034 ** get_address_of_roots_0() { return &___roots_0; }
	inline void set_roots_0(X509CertificateCollection_t1330376034 * value)
	{
		___roots_0 = value;
		Il2CppCodeGenWriteBarrier((&___roots_0), value);
	}

	inline static int32_t get_offset_of_certs_1() { return static_cast<int32_t>(offsetof(X509Chain_t75116022, ___certs_1)); }
	inline X509CertificateCollection_t1330376034 * get_certs_1() const { return ___certs_1; }
	inline X509CertificateCollection_t1330376034 ** get_address_of_certs_1() { return &___certs_1; }
	inline void set_certs_1(X509CertificateCollection_t1330376034 * value)
	{
		___certs_1 = value;
		Il2CppCodeGenWriteBarrier((&___certs_1), value);
	}

	inline static int32_t get_offset_of__root_2() { return static_cast<int32_t>(offsetof(X509Chain_t75116022, ____root_2)); }
	inline X509Certificate_t223010983 * get__root_2() const { return ____root_2; }
	inline X509Certificate_t223010983 ** get_address_of__root_2() { return &____root_2; }
	inline void set__root_2(X509Certificate_t223010983 * value)
	{
		____root_2 = value;
		Il2CppCodeGenWriteBarrier((&____root_2), value);
	}

	inline static int32_t get_offset_of__chain_3() { return static_cast<int32_t>(offsetof(X509Chain_t75116022, ____chain_3)); }
	inline X509CertificateCollection_t1330376034 * get__chain_3() const { return ____chain_3; }
	inline X509CertificateCollection_t1330376034 ** get_address_of__chain_3() { return &____chain_3; }
	inline void set__chain_3(X509CertificateCollection_t1330376034 * value)
	{
		____chain_3 = value;
		Il2CppCodeGenWriteBarrier((&____chain_3), value);
	}

	inline static int32_t get_offset_of__status_4() { return static_cast<int32_t>(offsetof(X509Chain_t75116022, ____status_4)); }
	inline int32_t get__status_4() const { return ____status_4; }
	inline int32_t* get_address_of__status_4() { return &____status_4; }
	inline void set__status_4(int32_t value)
	{
		____status_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CHAIN_T75116022_H
#ifndef POSITIONASSERTION_T1510350867_H
#define POSITIONASSERTION_T1510350867_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.PositionAssertion
struct  PositionAssertion_t1510350867  : public Expression_t4065159133
{
public:
	// System.Text.RegularExpressions.Position System.Text.RegularExpressions.Syntax.PositionAssertion::pos
	uint16_t ___pos_0;

public:
	inline static int32_t get_offset_of_pos_0() { return static_cast<int32_t>(offsetof(PositionAssertion_t1510350867, ___pos_0)); }
	inline uint16_t get_pos_0() const { return ___pos_0; }
	inline uint16_t* get_address_of_pos_0() { return &___pos_0; }
	inline void set_pos_0(uint16_t value)
	{
		___pos_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POSITIONASSERTION_T1510350867_H
#ifndef DATETIME_T2400840837_H
#define DATETIME_T2400840837_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t2400840837 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t4245672980  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t2400840837, ___ticks_0)); }
	inline TimeSpan_t4245672980  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t4245672980 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t4245672980  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t2400840837, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t2400840837_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t2400840837  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t2400840837  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t623663148* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t623663148* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t623663148* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t623663148* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t623663148* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t623663148* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t623663148* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t246198214* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t246198214* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t2400840837_StaticFields, ___MaxValue_2)); }
	inline DateTime_t2400840837  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t2400840837 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t2400840837  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t2400840837_StaticFields, ___MinValue_3)); }
	inline DateTime_t2400840837  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t2400840837 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t2400840837  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t2400840837_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t623663148* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t623663148** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t623663148* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t2400840837_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t623663148* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t623663148** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t623663148* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t2400840837_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t623663148* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t623663148** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t623663148* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t2400840837_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t623663148* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t623663148** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t623663148* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t2400840837_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t623663148* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t623663148** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t623663148* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t2400840837_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t623663148* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t623663148** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t623663148* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t2400840837_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t623663148* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t623663148** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t623663148* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t2400840837_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t246198214* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t246198214** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t246198214* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t2400840837_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t246198214* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t246198214** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t246198214* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t2400840837_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t2400840837_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T2400840837_H
#ifndef NONBACKTRACKINGGROUP_T1382669526_H
#define NONBACKTRACKINGGROUP_T1382669526_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.NonBacktrackingGroup
struct  NonBacktrackingGroup_t1382669526  : public Group_t834532941
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NONBACKTRACKINGGROUP_T1382669526_H
#ifndef URIFORMATEXCEPTION_T594269978_H
#define URIFORMATEXCEPTION_T594269978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriFormatException
struct  UriFormatException_t594269978  : public FormatException_t574903596
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIFORMATEXCEPTION_T594269978_H
#ifndef REGULAREXPRESSION_T2747474225_H
#define REGULAREXPRESSION_T2747474225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.RegularExpression
struct  RegularExpression_t2747474225  : public Group_t834532941
{
public:
	// System.Int32 System.Text.RegularExpressions.Syntax.RegularExpression::group_count
	int32_t ___group_count_1;

public:
	inline static int32_t get_offset_of_group_count_1() { return static_cast<int32_t>(offsetof(RegularExpression_t2747474225, ___group_count_1)); }
	inline int32_t get_group_count_1() const { return ___group_count_1; }
	inline int32_t* get_address_of_group_count_1() { return &___group_count_1; }
	inline void set_group_count_1(int32_t value)
	{
		___group_count_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGULAREXPRESSION_T2747474225_H
#ifndef ANCHORINFO_T338533593_H
#define ANCHORINFO_T338533593_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.AnchorInfo
struct  AnchorInfo_t338533593  : public RuntimeObject
{
public:
	// System.Text.RegularExpressions.Syntax.Expression System.Text.RegularExpressions.Syntax.AnchorInfo::expr
	Expression_t4065159133 * ___expr_0;
	// System.Text.RegularExpressions.Position System.Text.RegularExpressions.Syntax.AnchorInfo::pos
	uint16_t ___pos_1;
	// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::offset
	int32_t ___offset_2;
	// System.String System.Text.RegularExpressions.Syntax.AnchorInfo::str
	String_t* ___str_3;
	// System.Int32 System.Text.RegularExpressions.Syntax.AnchorInfo::width
	int32_t ___width_4;
	// System.Boolean System.Text.RegularExpressions.Syntax.AnchorInfo::ignore
	bool ___ignore_5;

public:
	inline static int32_t get_offset_of_expr_0() { return static_cast<int32_t>(offsetof(AnchorInfo_t338533593, ___expr_0)); }
	inline Expression_t4065159133 * get_expr_0() const { return ___expr_0; }
	inline Expression_t4065159133 ** get_address_of_expr_0() { return &___expr_0; }
	inline void set_expr_0(Expression_t4065159133 * value)
	{
		___expr_0 = value;
		Il2CppCodeGenWriteBarrier((&___expr_0), value);
	}

	inline static int32_t get_offset_of_pos_1() { return static_cast<int32_t>(offsetof(AnchorInfo_t338533593, ___pos_1)); }
	inline uint16_t get_pos_1() const { return ___pos_1; }
	inline uint16_t* get_address_of_pos_1() { return &___pos_1; }
	inline void set_pos_1(uint16_t value)
	{
		___pos_1 = value;
	}

	inline static int32_t get_offset_of_offset_2() { return static_cast<int32_t>(offsetof(AnchorInfo_t338533593, ___offset_2)); }
	inline int32_t get_offset_2() const { return ___offset_2; }
	inline int32_t* get_address_of_offset_2() { return &___offset_2; }
	inline void set_offset_2(int32_t value)
	{
		___offset_2 = value;
	}

	inline static int32_t get_offset_of_str_3() { return static_cast<int32_t>(offsetof(AnchorInfo_t338533593, ___str_3)); }
	inline String_t* get_str_3() const { return ___str_3; }
	inline String_t** get_address_of_str_3() { return &___str_3; }
	inline void set_str_3(String_t* value)
	{
		___str_3 = value;
		Il2CppCodeGenWriteBarrier((&___str_3), value);
	}

	inline static int32_t get_offset_of_width_4() { return static_cast<int32_t>(offsetof(AnchorInfo_t338533593, ___width_4)); }
	inline int32_t get_width_4() const { return ___width_4; }
	inline int32_t* get_address_of_width_4() { return &___width_4; }
	inline void set_width_4(int32_t value)
	{
		___width_4 = value;
	}

	inline static int32_t get_offset_of_ignore_5() { return static_cast<int32_t>(offsetof(AnchorInfo_t338533593, ___ignore_5)); }
	inline bool get_ignore_5() const { return ___ignore_5; }
	inline bool* get_address_of_ignore_5() { return &___ignore_5; }
	inline void set_ignore_5(bool value)
	{
		___ignore_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ANCHORINFO_T338533593_H
#ifndef EXPRESSIONASSERTION_T2901620444_H
#define EXPRESSIONASSERTION_T2901620444_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct  ExpressionAssertion_t2901620444  : public Assertion_t1762372275
{
public:
	// System.Boolean System.Text.RegularExpressions.Syntax.ExpressionAssertion::reverse
	bool ___reverse_1;
	// System.Boolean System.Text.RegularExpressions.Syntax.ExpressionAssertion::negate
	bool ___negate_2;

public:
	inline static int32_t get_offset_of_reverse_1() { return static_cast<int32_t>(offsetof(ExpressionAssertion_t2901620444, ___reverse_1)); }
	inline bool get_reverse_1() const { return ___reverse_1; }
	inline bool* get_address_of_reverse_1() { return &___reverse_1; }
	inline void set_reverse_1(bool value)
	{
		___reverse_1 = value;
	}

	inline static int32_t get_offset_of_negate_2() { return static_cast<int32_t>(offsetof(ExpressionAssertion_t2901620444, ___negate_2)); }
	inline bool get_negate_2() const { return ___negate_2; }
	inline bool* get_address_of_negate_2() { return &___negate_2; }
	inline void set_negate_2(bool value)
	{
		___negate_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXPRESSIONASSERTION_T2901620444_H
#ifndef MULTICASTDELEGATE_T1541693535_H
#define MULTICASTDELEGATE_T1541693535_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t1541693535  : public Delegate_t1206053534
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t1541693535 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t1541693535 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1541693535, ___prev_9)); }
	inline MulticastDelegate_t1541693535 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t1541693535 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t1541693535 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1541693535, ___kpm_next_10)); }
	inline MulticastDelegate_t1541693535 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t1541693535 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t1541693535 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T1541693535_H
#ifndef CAPTUREASSERTION_T2071400528_H
#define CAPTUREASSERTION_T2071400528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct  CaptureAssertion_t2071400528  : public Assertion_t1762372275
{
public:
	// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::alternate
	ExpressionAssertion_t2901620444 * ___alternate_1;
	// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.CaptureAssertion::group
	CapturingGroup_t1422070797 * ___group_2;
	// System.Text.RegularExpressions.Syntax.Literal System.Text.RegularExpressions.Syntax.CaptureAssertion::literal
	Literal_t2851841497 * ___literal_3;

public:
	inline static int32_t get_offset_of_alternate_1() { return static_cast<int32_t>(offsetof(CaptureAssertion_t2071400528, ___alternate_1)); }
	inline ExpressionAssertion_t2901620444 * get_alternate_1() const { return ___alternate_1; }
	inline ExpressionAssertion_t2901620444 ** get_address_of_alternate_1() { return &___alternate_1; }
	inline void set_alternate_1(ExpressionAssertion_t2901620444 * value)
	{
		___alternate_1 = value;
		Il2CppCodeGenWriteBarrier((&___alternate_1), value);
	}

	inline static int32_t get_offset_of_group_2() { return static_cast<int32_t>(offsetof(CaptureAssertion_t2071400528, ___group_2)); }
	inline CapturingGroup_t1422070797 * get_group_2() const { return ___group_2; }
	inline CapturingGroup_t1422070797 ** get_address_of_group_2() { return &___group_2; }
	inline void set_group_2(CapturingGroup_t1422070797 * value)
	{
		___group_2 = value;
		Il2CppCodeGenWriteBarrier((&___group_2), value);
	}

	inline static int32_t get_offset_of_literal_3() { return static_cast<int32_t>(offsetof(CaptureAssertion_t2071400528, ___literal_3)); }
	inline Literal_t2851841497 * get_literal_3() const { return ___literal_3; }
	inline Literal_t2851841497 ** get_address_of_literal_3() { return &___literal_3; }
	inline void set_literal_3(Literal_t2851841497 * value)
	{
		___literal_3 = value;
		Il2CppCodeGenWriteBarrier((&___literal_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPTUREASSERTION_T2071400528_H
#ifndef X509CERTIFICATE_T223010983_H
#define X509CERTIFICATE_T223010983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Certificate
struct  X509Certificate_t223010983  : public RuntimeObject
{
public:
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::decoder
	ASN1_t861964270 * ___decoder_0;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_encodedcert
	ByteU5BU5D_t317375469* ___m_encodedcert_1;
	// System.DateTime Mono.Security.X509.X509Certificate::m_from
	DateTime_t2400840837  ___m_from_2;
	// System.DateTime Mono.Security.X509.X509Certificate::m_until
	DateTime_t2400840837  ___m_until_3;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::issuer
	ASN1_t861964270 * ___issuer_4;
	// System.String Mono.Security.X509.X509Certificate::m_issuername
	String_t* ___m_issuername_5;
	// System.String Mono.Security.X509.X509Certificate::m_keyalgo
	String_t* ___m_keyalgo_6;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_keyalgoparams
	ByteU5BU5D_t317375469* ___m_keyalgoparams_7;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::subject
	ASN1_t861964270 * ___subject_8;
	// System.String Mono.Security.X509.X509Certificate::m_subject
	String_t* ___m_subject_9;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_publickey
	ByteU5BU5D_t317375469* ___m_publickey_10;
	// System.Byte[] Mono.Security.X509.X509Certificate::signature
	ByteU5BU5D_t317375469* ___signature_11;
	// System.String Mono.Security.X509.X509Certificate::m_signaturealgo
	String_t* ___m_signaturealgo_12;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_signaturealgoparams
	ByteU5BU5D_t317375469* ___m_signaturealgoparams_13;
	// System.Byte[] Mono.Security.X509.X509Certificate::certhash
	ByteU5BU5D_t317375469* ___certhash_14;
	// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::_rsa
	RSA_t1050577473 * ____rsa_15;
	// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::_dsa
	DSA_t28453765 * ____dsa_16;
	// System.Int32 Mono.Security.X509.X509Certificate::version
	int32_t ___version_17;
	// System.Byte[] Mono.Security.X509.X509Certificate::serialnumber
	ByteU5BU5D_t317375469* ___serialnumber_18;
	// System.Byte[] Mono.Security.X509.X509Certificate::issuerUniqueID
	ByteU5BU5D_t317375469* ___issuerUniqueID_19;
	// System.Byte[] Mono.Security.X509.X509Certificate::subjectUniqueID
	ByteU5BU5D_t317375469* ___subjectUniqueID_20;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::extensions
	X509ExtensionCollection_t3871348741 * ___extensions_21;

public:
	inline static int32_t get_offset_of_decoder_0() { return static_cast<int32_t>(offsetof(X509Certificate_t223010983, ___decoder_0)); }
	inline ASN1_t861964270 * get_decoder_0() const { return ___decoder_0; }
	inline ASN1_t861964270 ** get_address_of_decoder_0() { return &___decoder_0; }
	inline void set_decoder_0(ASN1_t861964270 * value)
	{
		___decoder_0 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_0), value);
	}

	inline static int32_t get_offset_of_m_encodedcert_1() { return static_cast<int32_t>(offsetof(X509Certificate_t223010983, ___m_encodedcert_1)); }
	inline ByteU5BU5D_t317375469* get_m_encodedcert_1() const { return ___m_encodedcert_1; }
	inline ByteU5BU5D_t317375469** get_address_of_m_encodedcert_1() { return &___m_encodedcert_1; }
	inline void set_m_encodedcert_1(ByteU5BU5D_t317375469* value)
	{
		___m_encodedcert_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_encodedcert_1), value);
	}

	inline static int32_t get_offset_of_m_from_2() { return static_cast<int32_t>(offsetof(X509Certificate_t223010983, ___m_from_2)); }
	inline DateTime_t2400840837  get_m_from_2() const { return ___m_from_2; }
	inline DateTime_t2400840837 * get_address_of_m_from_2() { return &___m_from_2; }
	inline void set_m_from_2(DateTime_t2400840837  value)
	{
		___m_from_2 = value;
	}

	inline static int32_t get_offset_of_m_until_3() { return static_cast<int32_t>(offsetof(X509Certificate_t223010983, ___m_until_3)); }
	inline DateTime_t2400840837  get_m_until_3() const { return ___m_until_3; }
	inline DateTime_t2400840837 * get_address_of_m_until_3() { return &___m_until_3; }
	inline void set_m_until_3(DateTime_t2400840837  value)
	{
		___m_until_3 = value;
	}

	inline static int32_t get_offset_of_issuer_4() { return static_cast<int32_t>(offsetof(X509Certificate_t223010983, ___issuer_4)); }
	inline ASN1_t861964270 * get_issuer_4() const { return ___issuer_4; }
	inline ASN1_t861964270 ** get_address_of_issuer_4() { return &___issuer_4; }
	inline void set_issuer_4(ASN1_t861964270 * value)
	{
		___issuer_4 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_4), value);
	}

	inline static int32_t get_offset_of_m_issuername_5() { return static_cast<int32_t>(offsetof(X509Certificate_t223010983, ___m_issuername_5)); }
	inline String_t* get_m_issuername_5() const { return ___m_issuername_5; }
	inline String_t** get_address_of_m_issuername_5() { return &___m_issuername_5; }
	inline void set_m_issuername_5(String_t* value)
	{
		___m_issuername_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_issuername_5), value);
	}

	inline static int32_t get_offset_of_m_keyalgo_6() { return static_cast<int32_t>(offsetof(X509Certificate_t223010983, ___m_keyalgo_6)); }
	inline String_t* get_m_keyalgo_6() const { return ___m_keyalgo_6; }
	inline String_t** get_address_of_m_keyalgo_6() { return &___m_keyalgo_6; }
	inline void set_m_keyalgo_6(String_t* value)
	{
		___m_keyalgo_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_keyalgo_6), value);
	}

	inline static int32_t get_offset_of_m_keyalgoparams_7() { return static_cast<int32_t>(offsetof(X509Certificate_t223010983, ___m_keyalgoparams_7)); }
	inline ByteU5BU5D_t317375469* get_m_keyalgoparams_7() const { return ___m_keyalgoparams_7; }
	inline ByteU5BU5D_t317375469** get_address_of_m_keyalgoparams_7() { return &___m_keyalgoparams_7; }
	inline void set_m_keyalgoparams_7(ByteU5BU5D_t317375469* value)
	{
		___m_keyalgoparams_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_keyalgoparams_7), value);
	}

	inline static int32_t get_offset_of_subject_8() { return static_cast<int32_t>(offsetof(X509Certificate_t223010983, ___subject_8)); }
	inline ASN1_t861964270 * get_subject_8() const { return ___subject_8; }
	inline ASN1_t861964270 ** get_address_of_subject_8() { return &___subject_8; }
	inline void set_subject_8(ASN1_t861964270 * value)
	{
		___subject_8 = value;
		Il2CppCodeGenWriteBarrier((&___subject_8), value);
	}

	inline static int32_t get_offset_of_m_subject_9() { return static_cast<int32_t>(offsetof(X509Certificate_t223010983, ___m_subject_9)); }
	inline String_t* get_m_subject_9() const { return ___m_subject_9; }
	inline String_t** get_address_of_m_subject_9() { return &___m_subject_9; }
	inline void set_m_subject_9(String_t* value)
	{
		___m_subject_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_subject_9), value);
	}

	inline static int32_t get_offset_of_m_publickey_10() { return static_cast<int32_t>(offsetof(X509Certificate_t223010983, ___m_publickey_10)); }
	inline ByteU5BU5D_t317375469* get_m_publickey_10() const { return ___m_publickey_10; }
	inline ByteU5BU5D_t317375469** get_address_of_m_publickey_10() { return &___m_publickey_10; }
	inline void set_m_publickey_10(ByteU5BU5D_t317375469* value)
	{
		___m_publickey_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_publickey_10), value);
	}

	inline static int32_t get_offset_of_signature_11() { return static_cast<int32_t>(offsetof(X509Certificate_t223010983, ___signature_11)); }
	inline ByteU5BU5D_t317375469* get_signature_11() const { return ___signature_11; }
	inline ByteU5BU5D_t317375469** get_address_of_signature_11() { return &___signature_11; }
	inline void set_signature_11(ByteU5BU5D_t317375469* value)
	{
		___signature_11 = value;
		Il2CppCodeGenWriteBarrier((&___signature_11), value);
	}

	inline static int32_t get_offset_of_m_signaturealgo_12() { return static_cast<int32_t>(offsetof(X509Certificate_t223010983, ___m_signaturealgo_12)); }
	inline String_t* get_m_signaturealgo_12() const { return ___m_signaturealgo_12; }
	inline String_t** get_address_of_m_signaturealgo_12() { return &___m_signaturealgo_12; }
	inline void set_m_signaturealgo_12(String_t* value)
	{
		___m_signaturealgo_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_signaturealgo_12), value);
	}

	inline static int32_t get_offset_of_m_signaturealgoparams_13() { return static_cast<int32_t>(offsetof(X509Certificate_t223010983, ___m_signaturealgoparams_13)); }
	inline ByteU5BU5D_t317375469* get_m_signaturealgoparams_13() const { return ___m_signaturealgoparams_13; }
	inline ByteU5BU5D_t317375469** get_address_of_m_signaturealgoparams_13() { return &___m_signaturealgoparams_13; }
	inline void set_m_signaturealgoparams_13(ByteU5BU5D_t317375469* value)
	{
		___m_signaturealgoparams_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_signaturealgoparams_13), value);
	}

	inline static int32_t get_offset_of_certhash_14() { return static_cast<int32_t>(offsetof(X509Certificate_t223010983, ___certhash_14)); }
	inline ByteU5BU5D_t317375469* get_certhash_14() const { return ___certhash_14; }
	inline ByteU5BU5D_t317375469** get_address_of_certhash_14() { return &___certhash_14; }
	inline void set_certhash_14(ByteU5BU5D_t317375469* value)
	{
		___certhash_14 = value;
		Il2CppCodeGenWriteBarrier((&___certhash_14), value);
	}

	inline static int32_t get_offset_of__rsa_15() { return static_cast<int32_t>(offsetof(X509Certificate_t223010983, ____rsa_15)); }
	inline RSA_t1050577473 * get__rsa_15() const { return ____rsa_15; }
	inline RSA_t1050577473 ** get_address_of__rsa_15() { return &____rsa_15; }
	inline void set__rsa_15(RSA_t1050577473 * value)
	{
		____rsa_15 = value;
		Il2CppCodeGenWriteBarrier((&____rsa_15), value);
	}

	inline static int32_t get_offset_of__dsa_16() { return static_cast<int32_t>(offsetof(X509Certificate_t223010983, ____dsa_16)); }
	inline DSA_t28453765 * get__dsa_16() const { return ____dsa_16; }
	inline DSA_t28453765 ** get_address_of__dsa_16() { return &____dsa_16; }
	inline void set__dsa_16(DSA_t28453765 * value)
	{
		____dsa_16 = value;
		Il2CppCodeGenWriteBarrier((&____dsa_16), value);
	}

	inline static int32_t get_offset_of_version_17() { return static_cast<int32_t>(offsetof(X509Certificate_t223010983, ___version_17)); }
	inline int32_t get_version_17() const { return ___version_17; }
	inline int32_t* get_address_of_version_17() { return &___version_17; }
	inline void set_version_17(int32_t value)
	{
		___version_17 = value;
	}

	inline static int32_t get_offset_of_serialnumber_18() { return static_cast<int32_t>(offsetof(X509Certificate_t223010983, ___serialnumber_18)); }
	inline ByteU5BU5D_t317375469* get_serialnumber_18() const { return ___serialnumber_18; }
	inline ByteU5BU5D_t317375469** get_address_of_serialnumber_18() { return &___serialnumber_18; }
	inline void set_serialnumber_18(ByteU5BU5D_t317375469* value)
	{
		___serialnumber_18 = value;
		Il2CppCodeGenWriteBarrier((&___serialnumber_18), value);
	}

	inline static int32_t get_offset_of_issuerUniqueID_19() { return static_cast<int32_t>(offsetof(X509Certificate_t223010983, ___issuerUniqueID_19)); }
	inline ByteU5BU5D_t317375469* get_issuerUniqueID_19() const { return ___issuerUniqueID_19; }
	inline ByteU5BU5D_t317375469** get_address_of_issuerUniqueID_19() { return &___issuerUniqueID_19; }
	inline void set_issuerUniqueID_19(ByteU5BU5D_t317375469* value)
	{
		___issuerUniqueID_19 = value;
		Il2CppCodeGenWriteBarrier((&___issuerUniqueID_19), value);
	}

	inline static int32_t get_offset_of_subjectUniqueID_20() { return static_cast<int32_t>(offsetof(X509Certificate_t223010983, ___subjectUniqueID_20)); }
	inline ByteU5BU5D_t317375469* get_subjectUniqueID_20() const { return ___subjectUniqueID_20; }
	inline ByteU5BU5D_t317375469** get_address_of_subjectUniqueID_20() { return &___subjectUniqueID_20; }
	inline void set_subjectUniqueID_20(ByteU5BU5D_t317375469* value)
	{
		___subjectUniqueID_20 = value;
		Il2CppCodeGenWriteBarrier((&___subjectUniqueID_20), value);
	}

	inline static int32_t get_offset_of_extensions_21() { return static_cast<int32_t>(offsetof(X509Certificate_t223010983, ___extensions_21)); }
	inline X509ExtensionCollection_t3871348741 * get_extensions_21() const { return ___extensions_21; }
	inline X509ExtensionCollection_t3871348741 ** get_address_of_extensions_21() { return &___extensions_21; }
	inline void set_extensions_21(X509ExtensionCollection_t3871348741 * value)
	{
		___extensions_21 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_21), value);
	}
};

struct X509Certificate_t223010983_StaticFields
{
public:
	// System.String Mono.Security.X509.X509Certificate::encoding_error
	String_t* ___encoding_error_22;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Certificate::<>f__switch$mapF
	Dictionary_2_t415537980 * ___U3CU3Ef__switchU24mapF_23;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Certificate::<>f__switch$map10
	Dictionary_2_t415537980 * ___U3CU3Ef__switchU24map10_24;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Certificate::<>f__switch$map11
	Dictionary_2_t415537980 * ___U3CU3Ef__switchU24map11_25;

public:
	inline static int32_t get_offset_of_encoding_error_22() { return static_cast<int32_t>(offsetof(X509Certificate_t223010983_StaticFields, ___encoding_error_22)); }
	inline String_t* get_encoding_error_22() const { return ___encoding_error_22; }
	inline String_t** get_address_of_encoding_error_22() { return &___encoding_error_22; }
	inline void set_encoding_error_22(String_t* value)
	{
		___encoding_error_22 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_error_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapF_23() { return static_cast<int32_t>(offsetof(X509Certificate_t223010983_StaticFields, ___U3CU3Ef__switchU24mapF_23)); }
	inline Dictionary_2_t415537980 * get_U3CU3Ef__switchU24mapF_23() const { return ___U3CU3Ef__switchU24mapF_23; }
	inline Dictionary_2_t415537980 ** get_address_of_U3CU3Ef__switchU24mapF_23() { return &___U3CU3Ef__switchU24mapF_23; }
	inline void set_U3CU3Ef__switchU24mapF_23(Dictionary_2_t415537980 * value)
	{
		___U3CU3Ef__switchU24mapF_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapF_23), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map10_24() { return static_cast<int32_t>(offsetof(X509Certificate_t223010983_StaticFields, ___U3CU3Ef__switchU24map10_24)); }
	inline Dictionary_2_t415537980 * get_U3CU3Ef__switchU24map10_24() const { return ___U3CU3Ef__switchU24map10_24; }
	inline Dictionary_2_t415537980 ** get_address_of_U3CU3Ef__switchU24map10_24() { return &___U3CU3Ef__switchU24map10_24; }
	inline void set_U3CU3Ef__switchU24map10_24(Dictionary_2_t415537980 * value)
	{
		___U3CU3Ef__switchU24map10_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map10_24), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map11_25() { return static_cast<int32_t>(offsetof(X509Certificate_t223010983_StaticFields, ___U3CU3Ef__switchU24map11_25)); }
	inline Dictionary_2_t415537980 * get_U3CU3Ef__switchU24map11_25() const { return ___U3CU3Ef__switchU24map11_25; }
	inline Dictionary_2_t415537980 ** get_address_of_U3CU3Ef__switchU24map11_25() { return &___U3CU3Ef__switchU24map11_25; }
	inline void set_U3CU3Ef__switchU24map11_25(Dictionary_2_t415537980 * value)
	{
		___U3CU3Ef__switchU24map11_25 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map11_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE_T223010983_H
#ifndef COSTDELEGATE_T1304842559_H
#define COSTDELEGATE_T1304842559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.IntervalCollection/CostDelegate
struct  CostDelegate_t1304842559  : public MulticastDelegate_t1541693535
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COSTDELEGATE_T1304842559_H
#ifndef X509CRLENTRY_T2600627726_H
#define X509CRLENTRY_T2600627726_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Crl/X509CrlEntry
struct  X509CrlEntry_t2600627726  : public RuntimeObject
{
public:
	// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::sn
	ByteU5BU5D_t317375469* ___sn_0;
	// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::revocationDate
	DateTime_t2400840837  ___revocationDate_1;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::extensions
	X509ExtensionCollection_t3871348741 * ___extensions_2;

public:
	inline static int32_t get_offset_of_sn_0() { return static_cast<int32_t>(offsetof(X509CrlEntry_t2600627726, ___sn_0)); }
	inline ByteU5BU5D_t317375469* get_sn_0() const { return ___sn_0; }
	inline ByteU5BU5D_t317375469** get_address_of_sn_0() { return &___sn_0; }
	inline void set_sn_0(ByteU5BU5D_t317375469* value)
	{
		___sn_0 = value;
		Il2CppCodeGenWriteBarrier((&___sn_0), value);
	}

	inline static int32_t get_offset_of_revocationDate_1() { return static_cast<int32_t>(offsetof(X509CrlEntry_t2600627726, ___revocationDate_1)); }
	inline DateTime_t2400840837  get_revocationDate_1() const { return ___revocationDate_1; }
	inline DateTime_t2400840837 * get_address_of_revocationDate_1() { return &___revocationDate_1; }
	inline void set_revocationDate_1(DateTime_t2400840837  value)
	{
		___revocationDate_1 = value;
	}

	inline static int32_t get_offset_of_extensions_2() { return static_cast<int32_t>(offsetof(X509CrlEntry_t2600627726, ___extensions_2)); }
	inline X509ExtensionCollection_t3871348741 * get_extensions_2() const { return ___extensions_2; }
	inline X509ExtensionCollection_t3871348741 ** get_address_of_extensions_2() { return &___extensions_2; }
	inline void set_extensions_2(X509ExtensionCollection_t3871348741 * value)
	{
		___extensions_2 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CRLENTRY_T2600627726_H
#ifndef BALANCINGGROUP_T1729888924_H
#define BALANCINGGROUP_T1729888924_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Syntax.BalancingGroup
struct  BalancingGroup_t1729888924  : public CapturingGroup_t1422070797
{
public:
	// System.Text.RegularExpressions.Syntax.CapturingGroup System.Text.RegularExpressions.Syntax.BalancingGroup::balance
	CapturingGroup_t1422070797 * ___balance_3;

public:
	inline static int32_t get_offset_of_balance_3() { return static_cast<int32_t>(offsetof(BalancingGroup_t1729888924, ___balance_3)); }
	inline CapturingGroup_t1422070797 * get_balance_3() const { return ___balance_3; }
	inline CapturingGroup_t1422070797 ** get_address_of_balance_3() { return &___balance_3; }
	inline void set_balance_3(CapturingGroup_t1422070797 * value)
	{
		___balance_3 = value;
		Il2CppCodeGenWriteBarrier((&___balance_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BALANCINGGROUP_T1729888924_H
#ifndef KEYGENERATEDEVENTHANDLER_T3890555599_H
#define KEYGENERATEDEVENTHANDLER_T3890555599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct  KeyGeneratedEventHandler_t3890555599  : public MulticastDelegate_t1541693535
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYGENERATEDEVENTHANDLER_T3890555599_H
#ifndef REMOTECERTIFICATEVALIDATIONCALLBACK_T36196620_H
#define REMOTECERTIFICATEVALIDATIONCALLBACK_T36196620_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Security.RemoteCertificateValidationCallback
struct  RemoteCertificateValidationCallback_t36196620  : public MulticastDelegate_t1541693535
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTECERTIFICATEVALIDATIONCALLBACK_T36196620_H
#ifndef X509CRL_T4257526033_H
#define X509CRL_T4257526033_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Crl
struct  X509Crl_t4257526033  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Crl::issuer
	String_t* ___issuer_0;
	// System.Byte Mono.Security.X509.X509Crl::version
	uint8_t ___version_1;
	// System.DateTime Mono.Security.X509.X509Crl::thisUpdate
	DateTime_t2400840837  ___thisUpdate_2;
	// System.DateTime Mono.Security.X509.X509Crl::nextUpdate
	DateTime_t2400840837  ___nextUpdate_3;
	// System.Collections.ArrayList Mono.Security.X509.X509Crl::entries
	ArrayList_t3465324181 * ___entries_4;
	// System.String Mono.Security.X509.X509Crl::signatureOID
	String_t* ___signatureOID_5;
	// System.Byte[] Mono.Security.X509.X509Crl::signature
	ByteU5BU5D_t317375469* ___signature_6;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::extensions
	X509ExtensionCollection_t3871348741 * ___extensions_7;
	// System.Byte[] Mono.Security.X509.X509Crl::encoded
	ByteU5BU5D_t317375469* ___encoded_8;
	// System.Byte[] Mono.Security.X509.X509Crl::hash_value
	ByteU5BU5D_t317375469* ___hash_value_9;

public:
	inline static int32_t get_offset_of_issuer_0() { return static_cast<int32_t>(offsetof(X509Crl_t4257526033, ___issuer_0)); }
	inline String_t* get_issuer_0() const { return ___issuer_0; }
	inline String_t** get_address_of_issuer_0() { return &___issuer_0; }
	inline void set_issuer_0(String_t* value)
	{
		___issuer_0 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_0), value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(X509Crl_t4257526033, ___version_1)); }
	inline uint8_t get_version_1() const { return ___version_1; }
	inline uint8_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(uint8_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_thisUpdate_2() { return static_cast<int32_t>(offsetof(X509Crl_t4257526033, ___thisUpdate_2)); }
	inline DateTime_t2400840837  get_thisUpdate_2() const { return ___thisUpdate_2; }
	inline DateTime_t2400840837 * get_address_of_thisUpdate_2() { return &___thisUpdate_2; }
	inline void set_thisUpdate_2(DateTime_t2400840837  value)
	{
		___thisUpdate_2 = value;
	}

	inline static int32_t get_offset_of_nextUpdate_3() { return static_cast<int32_t>(offsetof(X509Crl_t4257526033, ___nextUpdate_3)); }
	inline DateTime_t2400840837  get_nextUpdate_3() const { return ___nextUpdate_3; }
	inline DateTime_t2400840837 * get_address_of_nextUpdate_3() { return &___nextUpdate_3; }
	inline void set_nextUpdate_3(DateTime_t2400840837  value)
	{
		___nextUpdate_3 = value;
	}

	inline static int32_t get_offset_of_entries_4() { return static_cast<int32_t>(offsetof(X509Crl_t4257526033, ___entries_4)); }
	inline ArrayList_t3465324181 * get_entries_4() const { return ___entries_4; }
	inline ArrayList_t3465324181 ** get_address_of_entries_4() { return &___entries_4; }
	inline void set_entries_4(ArrayList_t3465324181 * value)
	{
		___entries_4 = value;
		Il2CppCodeGenWriteBarrier((&___entries_4), value);
	}

	inline static int32_t get_offset_of_signatureOID_5() { return static_cast<int32_t>(offsetof(X509Crl_t4257526033, ___signatureOID_5)); }
	inline String_t* get_signatureOID_5() const { return ___signatureOID_5; }
	inline String_t** get_address_of_signatureOID_5() { return &___signatureOID_5; }
	inline void set_signatureOID_5(String_t* value)
	{
		___signatureOID_5 = value;
		Il2CppCodeGenWriteBarrier((&___signatureOID_5), value);
	}

	inline static int32_t get_offset_of_signature_6() { return static_cast<int32_t>(offsetof(X509Crl_t4257526033, ___signature_6)); }
	inline ByteU5BU5D_t317375469* get_signature_6() const { return ___signature_6; }
	inline ByteU5BU5D_t317375469** get_address_of_signature_6() { return &___signature_6; }
	inline void set_signature_6(ByteU5BU5D_t317375469* value)
	{
		___signature_6 = value;
		Il2CppCodeGenWriteBarrier((&___signature_6), value);
	}

	inline static int32_t get_offset_of_extensions_7() { return static_cast<int32_t>(offsetof(X509Crl_t4257526033, ___extensions_7)); }
	inline X509ExtensionCollection_t3871348741 * get_extensions_7() const { return ___extensions_7; }
	inline X509ExtensionCollection_t3871348741 ** get_address_of_extensions_7() { return &___extensions_7; }
	inline void set_extensions_7(X509ExtensionCollection_t3871348741 * value)
	{
		___extensions_7 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_7), value);
	}

	inline static int32_t get_offset_of_encoded_8() { return static_cast<int32_t>(offsetof(X509Crl_t4257526033, ___encoded_8)); }
	inline ByteU5BU5D_t317375469* get_encoded_8() const { return ___encoded_8; }
	inline ByteU5BU5D_t317375469** get_address_of_encoded_8() { return &___encoded_8; }
	inline void set_encoded_8(ByteU5BU5D_t317375469* value)
	{
		___encoded_8 = value;
		Il2CppCodeGenWriteBarrier((&___encoded_8), value);
	}

	inline static int32_t get_offset_of_hash_value_9() { return static_cast<int32_t>(offsetof(X509Crl_t4257526033, ___hash_value_9)); }
	inline ByteU5BU5D_t317375469* get_hash_value_9() const { return ___hash_value_9; }
	inline ByteU5BU5D_t317375469** get_address_of_hash_value_9() { return &___hash_value_9; }
	inline void set_hash_value_9(ByteU5BU5D_t317375469* value)
	{
		___hash_value_9 = value;
		Il2CppCodeGenWriteBarrier((&___hash_value_9), value);
	}
};

struct X509Crl_t4257526033_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Crl::<>f__switch$map13
	Dictionary_2_t415537980 * ___U3CU3Ef__switchU24map13_10;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map13_10() { return static_cast<int32_t>(offsetof(X509Crl_t4257526033_StaticFields, ___U3CU3Ef__switchU24map13_10)); }
	inline Dictionary_2_t415537980 * get_U3CU3Ef__switchU24map13_10() const { return ___U3CU3Ef__switchU24map13_10; }
	inline Dictionary_2_t415537980 ** get_address_of_U3CU3Ef__switchU24map13_10() { return &___U3CU3Ef__switchU24map13_10; }
	inline void set_U3CU3Ef__switchU24map13_10(Dictionary_2_t415537980 * value)
	{
		___U3CU3Ef__switchU24map13_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map13_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CRL_T4257526033_H
#ifndef RC4_T1715194932_H
#define RC4_T1715194932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RC4
struct  RC4_t1715194932  : public SymmetricAlgorithm_t704442840
{
public:

public:
};

struct RC4_t1715194932_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] Mono.Security.Cryptography.RC4::s_legalBlockSizes
	KeySizesU5BU5D_t888819165* ___s_legalBlockSizes_10;
	// System.Security.Cryptography.KeySizes[] Mono.Security.Cryptography.RC4::s_legalKeySizes
	KeySizesU5BU5D_t888819165* ___s_legalKeySizes_11;

public:
	inline static int32_t get_offset_of_s_legalBlockSizes_10() { return static_cast<int32_t>(offsetof(RC4_t1715194932_StaticFields, ___s_legalBlockSizes_10)); }
	inline KeySizesU5BU5D_t888819165* get_s_legalBlockSizes_10() const { return ___s_legalBlockSizes_10; }
	inline KeySizesU5BU5D_t888819165** get_address_of_s_legalBlockSizes_10() { return &___s_legalBlockSizes_10; }
	inline void set_s_legalBlockSizes_10(KeySizesU5BU5D_t888819165* value)
	{
		___s_legalBlockSizes_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalBlockSizes_10), value);
	}

	inline static int32_t get_offset_of_s_legalKeySizes_11() { return static_cast<int32_t>(offsetof(RC4_t1715194932_StaticFields, ___s_legalKeySizes_11)); }
	inline KeySizesU5BU5D_t888819165* get_s_legalKeySizes_11() const { return ___s_legalKeySizes_11; }
	inline KeySizesU5BU5D_t888819165** get_address_of_s_legalKeySizes_11() { return &___s_legalKeySizes_11; }
	inline void set_s_legalKeySizes_11(KeySizesU5BU5D_t888819165* value)
	{
		___s_legalKeySizes_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalKeySizes_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC4_T1715194932_H
#ifndef ARC4MANAGED_T976324810_H
#define ARC4MANAGED_T976324810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.ARC4Managed
struct  ARC4Managed_t976324810  : public RC4_t1715194932
{
public:
	// System.Byte[] Mono.Security.Cryptography.ARC4Managed::key
	ByteU5BU5D_t317375469* ___key_12;
	// System.Byte[] Mono.Security.Cryptography.ARC4Managed::state
	ByteU5BU5D_t317375469* ___state_13;
	// System.Byte Mono.Security.Cryptography.ARC4Managed::x
	uint8_t ___x_14;
	// System.Byte Mono.Security.Cryptography.ARC4Managed::y
	uint8_t ___y_15;
	// System.Boolean Mono.Security.Cryptography.ARC4Managed::m_disposed
	bool ___m_disposed_16;

public:
	inline static int32_t get_offset_of_key_12() { return static_cast<int32_t>(offsetof(ARC4Managed_t976324810, ___key_12)); }
	inline ByteU5BU5D_t317375469* get_key_12() const { return ___key_12; }
	inline ByteU5BU5D_t317375469** get_address_of_key_12() { return &___key_12; }
	inline void set_key_12(ByteU5BU5D_t317375469* value)
	{
		___key_12 = value;
		Il2CppCodeGenWriteBarrier((&___key_12), value);
	}

	inline static int32_t get_offset_of_state_13() { return static_cast<int32_t>(offsetof(ARC4Managed_t976324810, ___state_13)); }
	inline ByteU5BU5D_t317375469* get_state_13() const { return ___state_13; }
	inline ByteU5BU5D_t317375469** get_address_of_state_13() { return &___state_13; }
	inline void set_state_13(ByteU5BU5D_t317375469* value)
	{
		___state_13 = value;
		Il2CppCodeGenWriteBarrier((&___state_13), value);
	}

	inline static int32_t get_offset_of_x_14() { return static_cast<int32_t>(offsetof(ARC4Managed_t976324810, ___x_14)); }
	inline uint8_t get_x_14() const { return ___x_14; }
	inline uint8_t* get_address_of_x_14() { return &___x_14; }
	inline void set_x_14(uint8_t value)
	{
		___x_14 = value;
	}

	inline static int32_t get_offset_of_y_15() { return static_cast<int32_t>(offsetof(ARC4Managed_t976324810, ___y_15)); }
	inline uint8_t get_y_15() const { return ___y_15; }
	inline uint8_t* get_address_of_y_15() { return &___y_15; }
	inline void set_y_15(uint8_t value)
	{
		___y_15 = value;
	}

	inline static int32_t get_offset_of_m_disposed_16() { return static_cast<int32_t>(offsetof(ARC4Managed_t976324810, ___m_disposed_16)); }
	inline bool get_m_disposed_16() const { return ___m_disposed_16; }
	inline bool* get_address_of_m_disposed_16() { return &___m_disposed_16; }
	inline void set_m_disposed_16(bool value)
	{
		___m_disposed_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARC4MANAGED_T976324810_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1000 = { sizeof (FactoryCache_t702031199), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1000[3] = 
{
	FactoryCache_t702031199::get_offset_of_capacity_0(),
	FactoryCache_t702031199::get_offset_of_factories_1(),
	FactoryCache_t702031199::get_offset_of_mru_list_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1001 = { sizeof (Key_t2732603035), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1001[2] = 
{
	Key_t2732603035::get_offset_of_pattern_0(),
	Key_t2732603035::get_offset_of_options_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1002 = { sizeof (MRUList_t640488818), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1002[2] = 
{
	MRUList_t640488818::get_offset_of_head_0(),
	MRUList_t640488818::get_offset_of_tail_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1003 = { sizeof (Node_t2498541648), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1003[3] = 
{
	Node_t2498541648::get_offset_of_value_0(),
	Node_t2498541648::get_offset_of_previous_1(),
	Node_t2498541648::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1004 = { sizeof (Category_t1445217329)+ sizeof (RuntimeObject), sizeof(uint16_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1004[146] = 
{
	Category_t1445217329::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1005 = { sizeof (CategoryUtils_t81228926), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1006 = { sizeof (LinkRef_t3601895176), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1007 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1008 = { sizeof (InterpreterFactory_t691433666), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1008[4] = 
{
	InterpreterFactory_t691433666::get_offset_of_mapping_0(),
	InterpreterFactory_t691433666::get_offset_of_pattern_1(),
	InterpreterFactory_t691433666::get_offset_of_namesMapping_2(),
	InterpreterFactory_t691433666::get_offset_of_gap_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1009 = { sizeof (PatternCompiler_t1905304520), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1009[1] = 
{
	PatternCompiler_t1905304520::get_offset_of_pgm_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1010 = { sizeof (PatternLinkStack_t3169453741), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1010[1] = 
{
	PatternLinkStack_t3169453741::get_offset_of_link_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1011 = { sizeof (Link_t4132656200)+ sizeof (RuntimeObject), sizeof(Link_t4132656200 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1011[2] = 
{
	Link_t4132656200::get_offset_of_base_addr_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Link_t4132656200::get_offset_of_offset_addr_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1012 = { sizeof (LinkStack_t548527007), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1012[1] = 
{
	LinkStack_t548527007::get_offset_of_stack_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1013 = { sizeof (Mark_t1443507012)+ sizeof (RuntimeObject), sizeof(Mark_t1443507012 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1013[3] = 
{
	Mark_t1443507012::get_offset_of_Start_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Mark_t1443507012::get_offset_of_End_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Mark_t1443507012::get_offset_of_Previous_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1014 = { sizeof (Interpreter_t426061704), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1014[16] = 
{
	Interpreter_t426061704::get_offset_of_program_1(),
	Interpreter_t426061704::get_offset_of_program_start_2(),
	Interpreter_t426061704::get_offset_of_text_3(),
	Interpreter_t426061704::get_offset_of_text_end_4(),
	Interpreter_t426061704::get_offset_of_group_count_5(),
	Interpreter_t426061704::get_offset_of_match_min_6(),
	Interpreter_t426061704::get_offset_of_qs_7(),
	Interpreter_t426061704::get_offset_of_scan_ptr_8(),
	Interpreter_t426061704::get_offset_of_repeat_9(),
	Interpreter_t426061704::get_offset_of_fast_10(),
	Interpreter_t426061704::get_offset_of_stack_11(),
	Interpreter_t426061704::get_offset_of_deep_12(),
	Interpreter_t426061704::get_offset_of_marks_13(),
	Interpreter_t426061704::get_offset_of_mark_start_14(),
	Interpreter_t426061704::get_offset_of_mark_end_15(),
	Interpreter_t426061704::get_offset_of_groups_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1015 = { sizeof (IntStack_t1949821567)+ sizeof (RuntimeObject), sizeof(IntStack_t1949821567_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1015[2] = 
{
	IntStack_t1949821567::get_offset_of_values_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	IntStack_t1949821567::get_offset_of_count_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1016 = { sizeof (RepeatContext_t3152651949), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1016[7] = 
{
	RepeatContext_t3152651949::get_offset_of_start_0(),
	RepeatContext_t3152651949::get_offset_of_min_1(),
	RepeatContext_t3152651949::get_offset_of_max_2(),
	RepeatContext_t3152651949::get_offset_of_lazy_3(),
	RepeatContext_t3152651949::get_offset_of_expr_pc_4(),
	RepeatContext_t3152651949::get_offset_of_previous_5(),
	RepeatContext_t3152651949::get_offset_of_count_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1017 = { sizeof (Mode_t592373259)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1017[4] = 
{
	Mode_t592373259::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1018 = { sizeof (Interval_t2247218728)+ sizeof (RuntimeObject), sizeof(Interval_t2247218728_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1018[3] = 
{
	Interval_t2247218728::get_offset_of_low_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Interval_t2247218728::get_offset_of_high_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Interval_t2247218728::get_offset_of_contiguous_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1019 = { sizeof (IntervalCollection_t113444232), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1019[1] = 
{
	IntervalCollection_t113444232::get_offset_of_intervals_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1020 = { sizeof (Enumerator_t2802451629), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1020[2] = 
{
	Enumerator_t2802451629::get_offset_of_list_0(),
	Enumerator_t2802451629::get_offset_of_ptr_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1021 = { sizeof (CostDelegate_t1304842559), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1022 = { sizeof (Parser_t3160516155), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1022[6] = 
{
	Parser_t3160516155::get_offset_of_pattern_0(),
	Parser_t3160516155::get_offset_of_ptr_1(),
	Parser_t3160516155::get_offset_of_caps_2(),
	Parser_t3160516155::get_offset_of_refs_3(),
	Parser_t3160516155::get_offset_of_num_groups_4(),
	Parser_t3160516155::get_offset_of_gap_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1023 = { sizeof (QuickSearch_t4207793344), -1, sizeof(QuickSearch_t4207793344_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1023[7] = 
{
	QuickSearch_t4207793344::get_offset_of_str_0(),
	QuickSearch_t4207793344::get_offset_of_len_1(),
	QuickSearch_t4207793344::get_offset_of_ignore_2(),
	QuickSearch_t4207793344::get_offset_of_reverse_3(),
	QuickSearch_t4207793344::get_offset_of_shift_4(),
	QuickSearch_t4207793344::get_offset_of_shiftExtended_5(),
	QuickSearch_t4207793344_StaticFields::get_offset_of_THRESHOLD_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1024 = { sizeof (ExpressionCollection_t1923166166), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1025 = { sizeof (Expression_t4065159133), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1026 = { sizeof (CompositeExpression_t3919816724), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1026[1] = 
{
	CompositeExpression_t3919816724::get_offset_of_expressions_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1027 = { sizeof (Group_t834532941), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1028 = { sizeof (RegularExpression_t2747474225), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1028[1] = 
{
	RegularExpression_t2747474225::get_offset_of_group_count_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1029 = { sizeof (CapturingGroup_t1422070797), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1029[2] = 
{
	CapturingGroup_t1422070797::get_offset_of_gid_1(),
	CapturingGroup_t1422070797::get_offset_of_name_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1030 = { sizeof (BalancingGroup_t1729888924), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1030[1] = 
{
	BalancingGroup_t1729888924::get_offset_of_balance_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1031 = { sizeof (NonBacktrackingGroup_t1382669526), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1032 = { sizeof (Repetition_t1858708895), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1032[3] = 
{
	Repetition_t1858708895::get_offset_of_min_1(),
	Repetition_t1858708895::get_offset_of_max_2(),
	Repetition_t1858708895::get_offset_of_lazy_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1033 = { sizeof (Assertion_t1762372275), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1034 = { sizeof (CaptureAssertion_t2071400528), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1034[3] = 
{
	CaptureAssertion_t2071400528::get_offset_of_alternate_1(),
	CaptureAssertion_t2071400528::get_offset_of_group_2(),
	CaptureAssertion_t2071400528::get_offset_of_literal_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1035 = { sizeof (ExpressionAssertion_t2901620444), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1035[2] = 
{
	ExpressionAssertion_t2901620444::get_offset_of_reverse_1(),
	ExpressionAssertion_t2901620444::get_offset_of_negate_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1036 = { sizeof (Alternation_t3285488224), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1037 = { sizeof (Literal_t2851841497), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1037[2] = 
{
	Literal_t2851841497::get_offset_of_str_0(),
	Literal_t2851841497::get_offset_of_ignore_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1038 = { sizeof (PositionAssertion_t1510350867), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1038[1] = 
{
	PositionAssertion_t1510350867::get_offset_of_pos_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1039 = { sizeof (Reference_t3461813273), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1039[2] = 
{
	Reference_t3461813273::get_offset_of_group_0(),
	Reference_t3461813273::get_offset_of_ignore_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1040 = { sizeof (BackslashNumber_t2199847709), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1040[2] = 
{
	BackslashNumber_t2199847709::get_offset_of_literal_2(),
	BackslashNumber_t2199847709::get_offset_of_ecma_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1041 = { sizeof (CharacterClass_t2836196651), -1, sizeof(CharacterClass_t2836196651_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1041[6] = 
{
	CharacterClass_t2836196651_StaticFields::get_offset_of_upper_case_characters_0(),
	CharacterClass_t2836196651::get_offset_of_negate_1(),
	CharacterClass_t2836196651::get_offset_of_ignore_2(),
	CharacterClass_t2836196651::get_offset_of_pos_cats_3(),
	CharacterClass_t2836196651::get_offset_of_neg_cats_4(),
	CharacterClass_t2836196651::get_offset_of_intervals_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1042 = { sizeof (AnchorInfo_t338533593), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1042[6] = 
{
	AnchorInfo_t338533593::get_offset_of_expr_0(),
	AnchorInfo_t338533593::get_offset_of_pos_1(),
	AnchorInfo_t338533593::get_offset_of_offset_2(),
	AnchorInfo_t338533593::get_offset_of_str_3(),
	AnchorInfo_t338533593::get_offset_of_width_4(),
	AnchorInfo_t338533593::get_offset_of_ignore_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1043 = { sizeof (DefaultUriParser_t1814608873), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1044 = { sizeof (GenericUriParser_t1938952232), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1045 = { sizeof (Uri_t1342966606), -1, sizeof(Uri_t1342966606_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1045[33] = 
{
	Uri_t1342966606::get_offset_of_isUnixFilePath_0(),
	Uri_t1342966606::get_offset_of_source_1(),
	Uri_t1342966606::get_offset_of_scheme_2(),
	Uri_t1342966606::get_offset_of_host_3(),
	Uri_t1342966606::get_offset_of_port_4(),
	Uri_t1342966606::get_offset_of_path_5(),
	Uri_t1342966606::get_offset_of_query_6(),
	Uri_t1342966606::get_offset_of_fragment_7(),
	Uri_t1342966606::get_offset_of_userinfo_8(),
	Uri_t1342966606::get_offset_of_isUnc_9(),
	Uri_t1342966606::get_offset_of_isOpaquePart_10(),
	Uri_t1342966606::get_offset_of_isAbsoluteUri_11(),
	Uri_t1342966606::get_offset_of_userEscaped_12(),
	Uri_t1342966606::get_offset_of_cachedAbsoluteUri_13(),
	Uri_t1342966606::get_offset_of_cachedToString_14(),
	Uri_t1342966606::get_offset_of_cachedHashCode_15(),
	Uri_t1342966606_StaticFields::get_offset_of_hexUpperChars_16(),
	Uri_t1342966606_StaticFields::get_offset_of_SchemeDelimiter_17(),
	Uri_t1342966606_StaticFields::get_offset_of_UriSchemeFile_18(),
	Uri_t1342966606_StaticFields::get_offset_of_UriSchemeFtp_19(),
	Uri_t1342966606_StaticFields::get_offset_of_UriSchemeGopher_20(),
	Uri_t1342966606_StaticFields::get_offset_of_UriSchemeHttp_21(),
	Uri_t1342966606_StaticFields::get_offset_of_UriSchemeHttps_22(),
	Uri_t1342966606_StaticFields::get_offset_of_UriSchemeMailto_23(),
	Uri_t1342966606_StaticFields::get_offset_of_UriSchemeNews_24(),
	Uri_t1342966606_StaticFields::get_offset_of_UriSchemeNntp_25(),
	Uri_t1342966606_StaticFields::get_offset_of_UriSchemeNetPipe_26(),
	Uri_t1342966606_StaticFields::get_offset_of_UriSchemeNetTcp_27(),
	Uri_t1342966606_StaticFields::get_offset_of_schemes_28(),
	Uri_t1342966606::get_offset_of_parser_29(),
	Uri_t1342966606_StaticFields::get_offset_of_U3CU3Ef__switchU24map14_30(),
	Uri_t1342966606_StaticFields::get_offset_of_U3CU3Ef__switchU24map15_31(),
	Uri_t1342966606_StaticFields::get_offset_of_U3CU3Ef__switchU24map16_32(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1046 = { sizeof (UriScheme_t3469689422)+ sizeof (RuntimeObject), sizeof(UriScheme_t3469689422_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1046[3] = 
{
	UriScheme_t3469689422::get_offset_of_scheme_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UriScheme_t3469689422::get_offset_of_delimiter_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UriScheme_t3469689422::get_offset_of_defaultPort_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1047 = { sizeof (UriFormatException_t594269978), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1048 = { sizeof (UriHostNameType_t2941147398)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1048[6] = 
{
	UriHostNameType_t2941147398::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1049 = { sizeof (UriKind_t1875010135)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1049[4] = 
{
	UriKind_t1875010135::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1050 = { sizeof (UriParser_t2799554438), -1, sizeof(UriParser_t2799554438_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1050[6] = 
{
	UriParser_t2799554438_StaticFields::get_offset_of_lock_object_0(),
	UriParser_t2799554438_StaticFields::get_offset_of_table_1(),
	UriParser_t2799554438::get_offset_of_scheme_name_2(),
	UriParser_t2799554438::get_offset_of_default_port_3(),
	UriParser_t2799554438_StaticFields::get_offset_of_uri_regex_4(),
	UriParser_t2799554438_StaticFields::get_offset_of_auth_regex_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1051 = { sizeof (UriPartial_t2362464627)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1051[5] = 
{
	UriPartial_t2362464627::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1052 = { sizeof (UriTypeConverter_t1967222779), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1053 = { sizeof (RemoteCertificateValidationCallback_t36196620), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1054 = { sizeof (U3CPrivateImplementationDetailsU3E_t916507510), -1, sizeof(U3CPrivateImplementationDetailsU3E_t916507510_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1054[3] = 
{
	U3CPrivateImplementationDetailsU3E_t916507510_StaticFields::get_offset_of_U24U24fieldU2D2_0(),
	U3CPrivateImplementationDetailsU3E_t916507510_StaticFields::get_offset_of_U24U24fieldU2D3_1(),
	U3CPrivateImplementationDetailsU3E_t916507510_StaticFields::get_offset_of_U24U24fieldU2D4_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1055 = { sizeof (U24ArrayTypeU24128_t560175202)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24128_t560175202 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1056 = { sizeof (U24ArrayTypeU2412_t1622843112)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU2412_t1622843112 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1057 = { sizeof (U3CModuleU3E_t2479626076), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1058 = { sizeof (Locale_t407866135), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1059 = { sizeof (BigInteger_t1084564621), -1, sizeof(BigInteger_t1084564621_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1059[4] = 
{
	BigInteger_t1084564621::get_offset_of_length_0(),
	BigInteger_t1084564621::get_offset_of_data_1(),
	BigInteger_t1084564621_StaticFields::get_offset_of_smallPrimes_2(),
	BigInteger_t1084564621_StaticFields::get_offset_of_rng_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1060 = { sizeof (Sign_t3906726758)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1060[4] = 
{
	Sign_t3906726758::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1061 = { sizeof (ModulusRing_t2465186821), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1061[2] = 
{
	ModulusRing_t2465186821::get_offset_of_mod_0(),
	ModulusRing_t2465186821::get_offset_of_constant_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1062 = { sizeof (Kernel_t874282475), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1063 = { sizeof (ConfidenceFactor_t1786425076)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1063[7] = 
{
	ConfidenceFactor_t1786425076::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1064 = { sizeof (PrimalityTests_t1291273643), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1065 = { sizeof (PrimeGeneratorBase_t116314699), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1066 = { sizeof (SequentialSearchPrimeGeneratorBase_t1148703292), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1067 = { sizeof (ASN1_t861964270), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1067[3] = 
{
	ASN1_t861964270::get_offset_of_m_nTag_0(),
	ASN1_t861964270::get_offset_of_m_aValue_1(),
	ASN1_t861964270::get_offset_of_elist_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1068 = { sizeof (ASN1Convert_t1592239388), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1069 = { sizeof (BitConverterLE_t2256943680), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1070 = { sizeof (PKCS7_t333223809), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1071 = { sizeof (ContentInfo_t496025019), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1071[2] = 
{
	ContentInfo_t496025019::get_offset_of_contentType_0(),
	ContentInfo_t496025019::get_offset_of_content_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1072 = { sizeof (EncryptedData_t3189629989), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1072[4] = 
{
	EncryptedData_t3189629989::get_offset_of__version_0(),
	EncryptedData_t3189629989::get_offset_of__content_1(),
	EncryptedData_t3189629989::get_offset_of__encryptionAlgorithm_2(),
	EncryptedData_t3189629989::get_offset_of__encrypted_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1073 = { sizeof (ARC4Managed_t976324810), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1073[5] = 
{
	ARC4Managed_t976324810::get_offset_of_key_12(),
	ARC4Managed_t976324810::get_offset_of_state_13(),
	ARC4Managed_t976324810::get_offset_of_x_14(),
	ARC4Managed_t976324810::get_offset_of_y_15(),
	ARC4Managed_t976324810::get_offset_of_m_disposed_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1074 = { sizeof (CryptoConvert_t1355343436), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1075 = { sizeof (KeyBuilder_t1458420160), -1, sizeof(KeyBuilder_t1458420160_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1075[1] = 
{
	KeyBuilder_t1458420160_StaticFields::get_offset_of_rng_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1076 = { sizeof (MD2_t1463594897), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1077 = { sizeof (MD2Managed_t325620174), -1, sizeof(MD2Managed_t325620174_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1077[6] = 
{
	MD2Managed_t325620174::get_offset_of_state_4(),
	MD2Managed_t325620174::get_offset_of_checksum_5(),
	MD2Managed_t325620174::get_offset_of_buffer_6(),
	MD2Managed_t325620174::get_offset_of_count_7(),
	MD2Managed_t325620174::get_offset_of_x_8(),
	MD2Managed_t325620174_StaticFields::get_offset_of_PI_SUBST_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1078 = { sizeof (MD4_t758093402), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1079 = { sizeof (MD4Managed_t3872286673), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1079[5] = 
{
	MD4Managed_t3872286673::get_offset_of_state_4(),
	MD4Managed_t3872286673::get_offset_of_buffer_5(),
	MD4Managed_t3872286673::get_offset_of_count_6(),
	MD4Managed_t3872286673::get_offset_of_x_7(),
	MD4Managed_t3872286673::get_offset_of_digest_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1080 = { sizeof (PKCS1_t3171997226), -1, sizeof(PKCS1_t3171997226_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1080[4] = 
{
	PKCS1_t3171997226_StaticFields::get_offset_of_emptySHA1_0(),
	PKCS1_t3171997226_StaticFields::get_offset_of_emptySHA256_1(),
	PKCS1_t3171997226_StaticFields::get_offset_of_emptySHA384_2(),
	PKCS1_t3171997226_StaticFields::get_offset_of_emptySHA512_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1081 = { sizeof (PKCS8_t2986338474), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1082 = { sizeof (PrivateKeyInfo_t1859457149), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1082[4] = 
{
	PrivateKeyInfo_t1859457149::get_offset_of__version_0(),
	PrivateKeyInfo_t1859457149::get_offset_of__algorithm_1(),
	PrivateKeyInfo_t1859457149::get_offset_of__key_2(),
	PrivateKeyInfo_t1859457149::get_offset_of__list_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1083 = { sizeof (EncryptedPrivateKeyInfo_t1654034337), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1083[4] = 
{
	EncryptedPrivateKeyInfo_t1654034337::get_offset_of__algorithm_0(),
	EncryptedPrivateKeyInfo_t1654034337::get_offset_of__salt_1(),
	EncryptedPrivateKeyInfo_t1654034337::get_offset_of__iterations_2(),
	EncryptedPrivateKeyInfo_t1654034337::get_offset_of__data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1084 = { sizeof (RC4_t1715194932), -1, sizeof(RC4_t1715194932_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1084[2] = 
{
	RC4_t1715194932_StaticFields::get_offset_of_s_legalBlockSizes_10(),
	RC4_t1715194932_StaticFields::get_offset_of_s_legalKeySizes_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1085 = { sizeof (RSAManaged_t421323776), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1085[13] = 
{
	RSAManaged_t421323776::get_offset_of_isCRTpossible_2(),
	RSAManaged_t421323776::get_offset_of_keyBlinding_3(),
	RSAManaged_t421323776::get_offset_of_keypairGenerated_4(),
	RSAManaged_t421323776::get_offset_of_m_disposed_5(),
	RSAManaged_t421323776::get_offset_of_d_6(),
	RSAManaged_t421323776::get_offset_of_p_7(),
	RSAManaged_t421323776::get_offset_of_q_8(),
	RSAManaged_t421323776::get_offset_of_dp_9(),
	RSAManaged_t421323776::get_offset_of_dq_10(),
	RSAManaged_t421323776::get_offset_of_qInv_11(),
	RSAManaged_t421323776::get_offset_of_n_12(),
	RSAManaged_t421323776::get_offset_of_e_13(),
	RSAManaged_t421323776::get_offset_of_KeyGenerated_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1086 = { sizeof (KeyGeneratedEventHandler_t3890555599), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1087 = { sizeof (SafeBag_t2053266357), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1087[2] = 
{
	SafeBag_t2053266357::get_offset_of__bagOID_0(),
	SafeBag_t2053266357::get_offset_of__asn1_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1088 = { sizeof (PKCS12_t2998387735), -1, sizeof(PKCS12_t2998387735_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1088[17] = 
{
	PKCS12_t2998387735_StaticFields::get_offset_of_recommendedIterationCount_0(),
	PKCS12_t2998387735::get_offset_of__password_1(),
	PKCS12_t2998387735::get_offset_of__keyBags_2(),
	PKCS12_t2998387735::get_offset_of__secretBags_3(),
	PKCS12_t2998387735::get_offset_of__certs_4(),
	PKCS12_t2998387735::get_offset_of__keyBagsChanged_5(),
	PKCS12_t2998387735::get_offset_of__secretBagsChanged_6(),
	PKCS12_t2998387735::get_offset_of__certsChanged_7(),
	PKCS12_t2998387735::get_offset_of__iterations_8(),
	PKCS12_t2998387735::get_offset_of__safeBags_9(),
	PKCS12_t2998387735::get_offset_of__rng_10(),
	PKCS12_t2998387735_StaticFields::get_offset_of_password_max_length_11(),
	PKCS12_t2998387735_StaticFields::get_offset_of_U3CU3Ef__switchU24map5_12(),
	PKCS12_t2998387735_StaticFields::get_offset_of_U3CU3Ef__switchU24map6_13(),
	PKCS12_t2998387735_StaticFields::get_offset_of_U3CU3Ef__switchU24map7_14(),
	PKCS12_t2998387735_StaticFields::get_offset_of_U3CU3Ef__switchU24map8_15(),
	PKCS12_t2998387735_StaticFields::get_offset_of_U3CU3Ef__switchU24mapC_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1089 = { sizeof (DeriveBytes_t2950817440), -1, sizeof(DeriveBytes_t2950817440_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1089[7] = 
{
	DeriveBytes_t2950817440_StaticFields::get_offset_of_keyDiversifier_0(),
	DeriveBytes_t2950817440_StaticFields::get_offset_of_ivDiversifier_1(),
	DeriveBytes_t2950817440_StaticFields::get_offset_of_macDiversifier_2(),
	DeriveBytes_t2950817440::get_offset_of__hashName_3(),
	DeriveBytes_t2950817440::get_offset_of__iterations_4(),
	DeriveBytes_t2950817440::get_offset_of__password_5(),
	DeriveBytes_t2950817440::get_offset_of__salt_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1090 = { sizeof (X501_t1982414714), -1, sizeof(X501_t1982414714_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1090[15] = 
{
	X501_t1982414714_StaticFields::get_offset_of_countryName_0(),
	X501_t1982414714_StaticFields::get_offset_of_organizationName_1(),
	X501_t1982414714_StaticFields::get_offset_of_organizationalUnitName_2(),
	X501_t1982414714_StaticFields::get_offset_of_commonName_3(),
	X501_t1982414714_StaticFields::get_offset_of_localityName_4(),
	X501_t1982414714_StaticFields::get_offset_of_stateOrProvinceName_5(),
	X501_t1982414714_StaticFields::get_offset_of_streetAddress_6(),
	X501_t1982414714_StaticFields::get_offset_of_domainComponent_7(),
	X501_t1982414714_StaticFields::get_offset_of_userid_8(),
	X501_t1982414714_StaticFields::get_offset_of_email_9(),
	X501_t1982414714_StaticFields::get_offset_of_dnQualifier_10(),
	X501_t1982414714_StaticFields::get_offset_of_title_11(),
	X501_t1982414714_StaticFields::get_offset_of_surname_12(),
	X501_t1982414714_StaticFields::get_offset_of_givenName_13(),
	X501_t1982414714_StaticFields::get_offset_of_initial_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1091 = { sizeof (X509Certificate_t223010983), -1, sizeof(X509Certificate_t223010983_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1091[26] = 
{
	X509Certificate_t223010983::get_offset_of_decoder_0(),
	X509Certificate_t223010983::get_offset_of_m_encodedcert_1(),
	X509Certificate_t223010983::get_offset_of_m_from_2(),
	X509Certificate_t223010983::get_offset_of_m_until_3(),
	X509Certificate_t223010983::get_offset_of_issuer_4(),
	X509Certificate_t223010983::get_offset_of_m_issuername_5(),
	X509Certificate_t223010983::get_offset_of_m_keyalgo_6(),
	X509Certificate_t223010983::get_offset_of_m_keyalgoparams_7(),
	X509Certificate_t223010983::get_offset_of_subject_8(),
	X509Certificate_t223010983::get_offset_of_m_subject_9(),
	X509Certificate_t223010983::get_offset_of_m_publickey_10(),
	X509Certificate_t223010983::get_offset_of_signature_11(),
	X509Certificate_t223010983::get_offset_of_m_signaturealgo_12(),
	X509Certificate_t223010983::get_offset_of_m_signaturealgoparams_13(),
	X509Certificate_t223010983::get_offset_of_certhash_14(),
	X509Certificate_t223010983::get_offset_of__rsa_15(),
	X509Certificate_t223010983::get_offset_of__dsa_16(),
	X509Certificate_t223010983::get_offset_of_version_17(),
	X509Certificate_t223010983::get_offset_of_serialnumber_18(),
	X509Certificate_t223010983::get_offset_of_issuerUniqueID_19(),
	X509Certificate_t223010983::get_offset_of_subjectUniqueID_20(),
	X509Certificate_t223010983::get_offset_of_extensions_21(),
	X509Certificate_t223010983_StaticFields::get_offset_of_encoding_error_22(),
	X509Certificate_t223010983_StaticFields::get_offset_of_U3CU3Ef__switchU24mapF_23(),
	X509Certificate_t223010983_StaticFields::get_offset_of_U3CU3Ef__switchU24map10_24(),
	X509Certificate_t223010983_StaticFields::get_offset_of_U3CU3Ef__switchU24map11_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1092 = { sizeof (X509CertificateCollection_t1330376034), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1093 = { sizeof (X509CertificateEnumerator_t3123198498), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1093[1] = 
{
	X509CertificateEnumerator_t3123198498::get_offset_of_enumerator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1094 = { sizeof (X509Chain_t75116022), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1094[5] = 
{
	X509Chain_t75116022::get_offset_of_roots_0(),
	X509Chain_t75116022::get_offset_of_certs_1(),
	X509Chain_t75116022::get_offset_of__root_2(),
	X509Chain_t75116022::get_offset_of__chain_3(),
	X509Chain_t75116022::get_offset_of__status_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1095 = { sizeof (X509ChainStatusFlags_t4048765876)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1095[8] = 
{
	X509ChainStatusFlags_t4048765876::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1096 = { sizeof (X509Crl_t4257526033), -1, sizeof(X509Crl_t4257526033_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1096[11] = 
{
	X509Crl_t4257526033::get_offset_of_issuer_0(),
	X509Crl_t4257526033::get_offset_of_version_1(),
	X509Crl_t4257526033::get_offset_of_thisUpdate_2(),
	X509Crl_t4257526033::get_offset_of_nextUpdate_3(),
	X509Crl_t4257526033::get_offset_of_entries_4(),
	X509Crl_t4257526033::get_offset_of_signatureOID_5(),
	X509Crl_t4257526033::get_offset_of_signature_6(),
	X509Crl_t4257526033::get_offset_of_extensions_7(),
	X509Crl_t4257526033::get_offset_of_encoded_8(),
	X509Crl_t4257526033::get_offset_of_hash_value_9(),
	X509Crl_t4257526033_StaticFields::get_offset_of_U3CU3Ef__switchU24map13_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1097 = { sizeof (X509CrlEntry_t2600627726), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1097[3] = 
{
	X509CrlEntry_t2600627726::get_offset_of_sn_0(),
	X509CrlEntry_t2600627726::get_offset_of_revocationDate_1(),
	X509CrlEntry_t2600627726::get_offset_of_extensions_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1098 = { sizeof (X509Extension_t766436414), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1098[3] = 
{
	X509Extension_t766436414::get_offset_of_extnOid_0(),
	X509Extension_t766436414::get_offset_of_extnCritical_1(),
	X509Extension_t766436414::get_offset_of_extnValue_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1099 = { sizeof (X509ExtensionCollection_t3871348741), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1099[1] = 
{
	X509ExtensionCollection_t3871348741::get_offset_of_readOnly_1(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif