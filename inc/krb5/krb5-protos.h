/* This is a generated file */
#ifndef __C__src_heimdal_lib_krb5_______out_obj_XP32_RETAIL_lib_krb5_krb5_protos_h__
#define __C__src_heimdal_lib_krb5_______out_obj_XP32_RETAIL_lib_krb5_krb5_protos_h__

#include <stdarg.h>

#if !defined(__GNUC__) && !defined(__attribute__)
#define __attribute__(x)
#endif

#ifdef __cplusplus
extern "C" {
#endif

#ifndef KRB5_LIB
#ifndef KRB5_LIB_FUNCTION
#if defined(_WIN32)
#define KRB5_LIB_FUNCTION __declspec(dllimport)
#define KRB5_LIB_CALL __stdcall
#define KRB5_LIB_VARIABLE __declspec(dllimport)
#else
#define KRB5_LIB_FUNCTION
#define KRB5_LIB_CALL
#define KRB5_LIB_VARIABLE
#endif
#endif
#endif
KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb524_convert_creds_kdc (
	krb5_context,
	krb5_creds*,
	struct credentials*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb524_convert_creds_kdc_ccache (
	krb5_context,
	krb5_ccache,
	krb5_creds*,
	struct credentials*);

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_425_conv_principal (
	krb5_context,
	const char*,
	const char*,
	const char*,
	krb5_principal*);

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_425_conv_principal_ext (
	krb5_context,
	const char*,
	const char*,
	const char*,
	krb5_boolean (*)(krb5_context, krb5_principal),
	krb5_boolean,
	krb5_principal*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_425_conv_principal_ext2 (
	krb5_context,
	const char*,
	const char*,
	const char*,
	krb5_boolean (*)(krb5_context, void*, krb5_principal),
	void*,
	krb5_boolean,
	krb5_principal*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_524_conv_principal (
	krb5_context,
	const krb5_principal,
	char*,
	char*,
	char*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_abort (
	krb5_context,
	krb5_error_code,
	const char*,
	...)
     __attribute__ ((noreturn, format (printf, 3, 4)));

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_abortx (
	krb5_context,
	const char*,
	...)
     __attribute__ ((noreturn, format (printf, 2, 3)));

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_acl_match_file (
	krb5_context,
	const char*,
	const char*,
	...);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_acl_match_string (
	krb5_context,
	const char*,
	const char*,
	...);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_add_et_list (
	krb5_context,
	void (*)(struct et_list**));

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_add_extra_addresses (
	krb5_context,
	krb5_addresses*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_add_ignore_addresses (
	krb5_context,
	krb5_addresses*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_addlog_dest (
	krb5_context,
	krb5_log_facility*,
	const char*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_addlog_func (
	krb5_context,
	krb5_log_facility*,
	int,
	int,
	krb5_log_log_func_t,
	krb5_log_close_func_t,
	void*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_addr2sockaddr (
	krb5_context,
	const krb5_address*,
	struct sockaddr*,
	krb5_socklen_t*,
	int);

KRB5_LIB_FUNCTION krb5_boolean KRB5_LIB_CALL
krb5_address_compare (
	krb5_context,
	const krb5_address*,
	const krb5_address*);

KRB5_LIB_FUNCTION int KRB5_LIB_CALL
krb5_address_order (
	krb5_context,
	const krb5_address*,
	const krb5_address*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_address_prefixlen_boundary (
	krb5_context,
	const krb5_address*,
	unsigned long,
	krb5_address*,
	krb5_address*);

KRB5_LIB_FUNCTION krb5_boolean KRB5_LIB_CALL
krb5_address_search (
	krb5_context,
	const krb5_address*,
	const krb5_addresses*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_allow_weak_crypto (
	krb5_context,
	krb5_boolean);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_aname_to_localname (
	krb5_context,
	krb5_const_principal,
	size_t,
	char*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_anyaddr (
	krb5_context,
	int,
	struct sockaddr*,
	krb5_socklen_t*,
	int);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_appdefault_boolean (
	krb5_context,
	const char*,
	krb5_const_realm,
	const char*,
	krb5_boolean,
	krb5_boolean*);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_appdefault_string (
	krb5_context,
	const char*,
	krb5_const_realm,
	const char*,
	const char*,
	char**);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_appdefault_time (
	krb5_context,
	const char*,
	krb5_const_realm,
	const char*,
	time_t,
	time_t*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_append_addresses (
	krb5_context,
	krb5_addresses*,
	const krb5_addresses*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_auth_con_addflags (
	krb5_context,
	krb5_auth_context,
	int32_t,
	int32_t*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_auth_con_free (
	krb5_context,
	krb5_auth_context);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_auth_con_genaddrs (
	krb5_context,
	krb5_auth_context,
	krb5_socket_t,
	int);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_auth_con_generatelocalsubkey (
	krb5_context,
	krb5_auth_context,
	krb5_keyblock*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_auth_con_getaddrs (
	krb5_context,
	krb5_auth_context,
	krb5_address**,
	krb5_address**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_auth_con_getauthenticator (
	krb5_context,
	krb5_auth_context,
	krb5_authenticator*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_auth_con_getcksumtype (
	krb5_context,
	krb5_auth_context,
	krb5_cksumtype*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_auth_con_getflags (
	krb5_context,
	krb5_auth_context,
	int32_t*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_auth_con_getkey (
	krb5_context,
	krb5_auth_context,
	krb5_keyblock**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_auth_con_getkeytype (
	krb5_context,
	krb5_auth_context,
	krb5_keytype*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_auth_con_getlocalseqnumber (
	krb5_context,
	krb5_auth_context,
	int32_t*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_auth_con_getlocalsubkey (
	krb5_context,
	krb5_auth_context,
	krb5_keyblock**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_auth_con_getrcache (
	krb5_context,
	krb5_auth_context,
	krb5_rcache*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_auth_con_getrecvsubkey (
	krb5_context,
	krb5_auth_context,
	krb5_keyblock**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_auth_con_getremoteseqnumber (
	krb5_context,
	krb5_auth_context,
	int32_t*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_auth_con_getremotesubkey (
	krb5_context,
	krb5_auth_context,
	krb5_keyblock**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_auth_con_getsendsubkey (
	krb5_context,
	krb5_auth_context,
	krb5_keyblock**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_auth_con_init (
	krb5_context,
	krb5_auth_context*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_auth_con_removeflags (
	krb5_context,
	krb5_auth_context,
	int32_t,
	int32_t*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_auth_con_setaddrs (
	krb5_context,
	krb5_auth_context,
	krb5_address*,
	krb5_address*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_auth_con_setaddrs_from_fd (
	krb5_context,
	krb5_auth_context,
	void*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_auth_con_setcksumtype (
	krb5_context,
	krb5_auth_context,
	krb5_cksumtype);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_auth_con_setflags (
	krb5_context,
	krb5_auth_context,
	int32_t);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_auth_con_setkey (
	krb5_context,
	krb5_auth_context,
	krb5_keyblock*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_auth_con_setkeytype (
	krb5_context,
	krb5_auth_context,
	krb5_keytype);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_auth_con_setlocalseqnumber (
	krb5_context,
	krb5_auth_context,
	int32_t);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_auth_con_setlocalsubkey (
	krb5_context,
	krb5_auth_context,
	krb5_keyblock*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_auth_con_setrcache (
	krb5_context,
	krb5_auth_context,
	krb5_rcache);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_auth_con_setrecvsubkey (
	krb5_context,
	krb5_auth_context,
	krb5_keyblock*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_auth_con_setremoteseqnumber (
	krb5_context,
	krb5_auth_context,
	int32_t);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_auth_con_setremotesubkey (
	krb5_context,
	krb5_auth_context,
	krb5_keyblock*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_auth_con_setsendsubkey (
	krb5_context,
	krb5_auth_context,
	krb5_keyblock*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_auth_con_setuserkey (
	krb5_context,
	krb5_auth_context,
	krb5_keyblock*);

KRB5_DEPRECATED krb5_error_code KRB5_LIB_FUNCTION
krb5_auth_getremoteseqnumber (
	krb5_context,
	krb5_auth_context,
	int32_t*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_build_ap_req (
	krb5_context,
	krb5_enctype,
	krb5_creds*,
	krb5_flags,
	krb5_data,
	krb5_data*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_build_principal (
	krb5_context,
	krb5_principal*,
	int,
	krb5_const_realm,
	...);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_build_principal_ext (
	krb5_context,
	krb5_principal*,
	int,
	krb5_const_realm,
	...);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_build_principal_va (
	krb5_context,
	krb5_principal*,
	int,
	krb5_const_realm,
	va_list);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_build_principal_va_ext (
	krb5_context,
	krb5_principal*,
	int,
	krb5_const_realm,
	va_list);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_c_block_size (
	krb5_context,
	krb5_enctype,
	size_t*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_c_checksum_length (
	krb5_context,
	krb5_cksumtype,
	size_t*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_c_decrypt (
	krb5_context,
	const krb5_keyblock,
	krb5_keyusage,
	const krb5_data*,
	krb5_enc_data*,
	krb5_data*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_c_encrypt (
	krb5_context,
	const krb5_keyblock*,
	krb5_keyusage,
	const krb5_data*,
	const krb5_data*,
	krb5_enc_data*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_c_encrypt_length (
	krb5_context,
	krb5_enctype,
	size_t,
	size_t*);

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_c_enctype_compare (
	krb5_context,
	krb5_enctype,
	krb5_enctype,
	krb5_boolean*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_c_get_checksum (
	krb5_context,
	const krb5_checksum*,
	krb5_cksumtype*,
	krb5_data**);

KRB5_LIB_FUNCTION krb5_boolean KRB5_LIB_CALL
krb5_c_is_coll_proof_cksum (krb5_cksumtype);

KRB5_LIB_FUNCTION krb5_boolean KRB5_LIB_CALL
krb5_c_is_keyed_cksum (krb5_cksumtype);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_c_keylengths (
	krb5_context,
	krb5_enctype,
	size_t*,
	size_t*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_c_make_checksum (
	krb5_context,
	krb5_cksumtype,
	const krb5_keyblock*,
	krb5_keyusage,
	const krb5_data*,
	krb5_checksum*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_c_make_random_key (
	krb5_context,
	krb5_enctype,
	krb5_keyblock*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_c_prf (
	krb5_context,
	const krb5_keyblock*,
	const krb5_data*,
	krb5_data*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_c_prf_length (
	krb5_context,
	krb5_enctype,
	size_t*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_c_random_make_octets (
	krb5_context,
	krb5_data*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_c_set_checksum (
	krb5_context,
	krb5_checksum*,
	krb5_cksumtype,
	const krb5_data*);

KRB5_LIB_FUNCTION krb5_boolean KRB5_LIB_CALL
krb5_c_valid_cksumtype (krb5_cksumtype);

KRB5_LIB_FUNCTION krb5_boolean KRB5_LIB_CALL
krb5_c_valid_enctype (krb5_enctype);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_c_verify_checksum (
	krb5_context,
	const krb5_keyblock*,
	krb5_keyusage,
	const krb5_data*,
	const krb5_checksum*,
	krb5_boolean*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_cc_cache_end_seq_get (
	krb5_context,
	krb5_cc_cache_cursor);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_cc_cache_get_first (
	krb5_context,
	const char*,
	krb5_cc_cache_cursor*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_cc_cache_match (
	krb5_context,
	krb5_principal,
	krb5_ccache*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_cc_cache_next (
	krb5_context,
	krb5_cc_cache_cursor,
	krb5_ccache*);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_cc_clear_mcred (krb5_creds*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_cc_close (
	krb5_context,
	krb5_ccache);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_cc_copy_cache (
	krb5_context,
	const krb5_ccache,
	krb5_ccache);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_cc_copy_creds (
	krb5_context,
	const krb5_ccache,
	krb5_ccache);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_cc_copy_match_f (
	krb5_context,
	const krb5_ccache,
	krb5_ccache,
	krb5_boolean (*)(krb5_context, void*, const krb5_creds*),
	void*,
	unsigned int*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_cc_default (
	krb5_context,
	krb5_ccache*);

KRB5_LIB_FUNCTION const char* KRB5_LIB_CALL
krb5_cc_default_name (krb5_context);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_cc_destroy (
	krb5_context,
	krb5_ccache);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_cc_end_seq_get (
	krb5_context,
	const krb5_ccache,
	krb5_cc_cursor*);

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_cc_gen_new (
	krb5_context,
	const krb5_cc_ops*,
	krb5_ccache*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_cc_get_config (
	krb5_context,
	krb5_ccache,
	krb5_const_principal,
	const char*,
	krb5_data*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_cc_get_flags (
	krb5_context,
	krb5_ccache,
	krb5_flags*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_cc_get_friendly_name (
	krb5_context,
	krb5_ccache,
	char**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_cc_get_full_name (
	krb5_context,
	krb5_ccache,
	char**);

krb5_error_code
krb5_cc_get_kdc_offset (
	krb5_context,
	krb5_ccache,
	krb5_deltat*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_cc_get_lifetime (
	krb5_context,
	krb5_ccache,
	time_t*);

KRB5_LIB_FUNCTION const char* KRB5_LIB_CALL
krb5_cc_get_name (
	krb5_context,
	krb5_ccache);

const krb5_cc_ops*
krb5_cc_get_ops (
	krb5_context,
	krb5_ccache);

const krb5_cc_ops*
krb5_cc_get_prefix_ops (
	krb5_context,
	const char*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_cc_get_principal (
	krb5_context,
	krb5_ccache,
	krb5_principal*);

KRB5_LIB_FUNCTION const char* KRB5_LIB_CALL
krb5_cc_get_type (
	krb5_context,
	krb5_ccache);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_cc_get_version (
	krb5_context,
	const krb5_ccache);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_cc_initialize (
	krb5_context,
	krb5_ccache,
	krb5_principal);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_cc_last_change_time (
	krb5_context,
	krb5_ccache,
	krb5_timestamp*);

krb5_error_code
krb5_cc_move (
	krb5_context,
	krb5_ccache,
	krb5_ccache);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_cc_new_unique (
	krb5_context,
	const char*,
	const char*,
	krb5_ccache*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_cc_next_cred (
	krb5_context,
	const krb5_ccache,
	krb5_cc_cursor*,
	krb5_creds*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_cc_register (
	krb5_context,
	const krb5_cc_ops*,
	krb5_boolean);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_cc_remove_cred (
	krb5_context,
	krb5_ccache,
	krb5_flags,
	krb5_creds*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_cc_resolve (
	krb5_context,
	const char*,
	krb5_ccache*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_cc_retrieve_cred (
	krb5_context,
	krb5_ccache,
	krb5_flags,
	const krb5_creds*,
	krb5_creds*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_cc_set_config (
	krb5_context,
	krb5_ccache,
	krb5_const_principal,
	const char*,
	krb5_data*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_cc_set_default_name (
	krb5_context,
	const char*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_cc_set_flags (
	krb5_context,
	krb5_ccache,
	krb5_flags);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_cc_set_friendly_name (
	krb5_context,
	krb5_ccache,
	const char*);

krb5_error_code
krb5_cc_set_kdc_offset (
	krb5_context,
	krb5_ccache,
	krb5_deltat);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_cc_start_seq_get (
	krb5_context,
	const krb5_ccache,
	krb5_cc_cursor*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_cc_store_cred (
	krb5_context,
	krb5_ccache,
	krb5_creds*);

krb5_boolean KRB5_LIB_FUNCTION
krb5_cc_support_switch (
	krb5_context,
	const char*);

krb5_error_code KRB5_LIB_FUNCTION
krb5_cc_switch (
	krb5_context,
	krb5_ccache);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_cccol_cursor_free (
	krb5_context,
	krb5_cccol_cursor*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_cccol_cursor_new (
	krb5_context,
	krb5_cccol_cursor*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_cccol_cursor_next (
	krb5_context,
	krb5_cccol_cursor,
	krb5_ccache*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_cccol_last_change_time (
	krb5_context,
	const char*,
	krb5_timestamp*);

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_change_password (
	krb5_context,
	krb5_creds*,
	const char*,
	int*,
	krb5_data*,
	krb5_data*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_check_transited (
	krb5_context,
	krb5_const_realm,
	krb5_const_realm,
	krb5_realm*,
	unsigned int,
	int*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_check_transited_realms (
	krb5_context,
	const char*const*,
	unsigned int,
	int*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_checksum_disable (
	krb5_context,
	krb5_cksumtype);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_checksum_free (
	krb5_context,
	krb5_checksum*);

KRB5_LIB_FUNCTION krb5_boolean KRB5_LIB_CALL
krb5_checksum_is_collision_proof (
	krb5_context,
	krb5_cksumtype);

KRB5_LIB_FUNCTION krb5_boolean KRB5_LIB_CALL
krb5_checksum_is_keyed (
	krb5_context,
	krb5_cksumtype);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_checksumsize (
	krb5_context,
	krb5_cksumtype,
	size_t*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_cksumtype_to_enctype (
	krb5_context,
	krb5_cksumtype,
	krb5_enctype*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_cksumtype_valid (
	krb5_context,
	krb5_cksumtype);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_clear_error_message (krb5_context);

KRB5_DEPRECATED KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_clear_error_string (krb5_context);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_closelog (
	krb5_context,
	krb5_log_facility*);

KRB5_LIB_FUNCTION krb5_boolean KRB5_LIB_CALL
krb5_compare_creds (
	krb5_context,
	krb5_flags,
	const krb5_creds*,
	const krb5_creds*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_config_file_free (
	krb5_context,
	krb5_config_section*);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_config_free_strings (char**);

KRB5_LIB_FUNCTION krb5_boolean KRB5_LIB_CALL
krb5_config_get_bool (
	krb5_context,
	const krb5_config_section*,
	...);

KRB5_LIB_FUNCTION krb5_boolean KRB5_LIB_CALL
krb5_config_get_bool_default (
	krb5_context,
	const krb5_config_section*,
	krb5_boolean,
	...);

KRB5_LIB_FUNCTION int KRB5_LIB_CALL
krb5_config_get_int (
	krb5_context,
	const krb5_config_section*,
	...);

KRB5_LIB_FUNCTION int KRB5_LIB_CALL
krb5_config_get_int_default (
	krb5_context,
	const krb5_config_section*,
	int,
	...);

KRB5_LIB_FUNCTION const krb5_config_binding* KRB5_LIB_CALL
krb5_config_get_list (
	krb5_context,
	const krb5_config_section*,
	...);

KRB5_LIB_FUNCTION const char* KRB5_LIB_CALL
krb5_config_get_string (
	krb5_context,
	const krb5_config_section*,
	...);

KRB5_LIB_FUNCTION const char* KRB5_LIB_CALL
krb5_config_get_string_default (
	krb5_context,
	const krb5_config_section*,
	const char*,
	...);

KRB5_LIB_FUNCTION char** KRB5_LIB_CALL
krb5_config_get_strings (
	krb5_context,
	const krb5_config_section*,
	...);

KRB5_LIB_FUNCTION int KRB5_LIB_CALL
krb5_config_get_time (
	krb5_context,
	const krb5_config_section*,
	...);

KRB5_LIB_FUNCTION int KRB5_LIB_CALL
krb5_config_get_time_default (
	krb5_context,
	const krb5_config_section*,
	int,
	...);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_config_parse_file (
	krb5_context,
	const char*,
	krb5_config_section**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_config_parse_file_multi (
	krb5_context,
	const char*,
	krb5_config_section**);

KRB5_DEPRECATED krb5_error_code KRB5_LIB_FUNCTION
krb5_config_parse_string_multi (
	krb5_context,
	const char*,
	krb5_config_section**);

KRB5_LIB_FUNCTION krb5_boolean KRB5_LIB_CALL
krb5_config_vget_bool (
	krb5_context,
	const krb5_config_section*,
	va_list);

KRB5_LIB_FUNCTION krb5_boolean KRB5_LIB_CALL
krb5_config_vget_bool_default (
	krb5_context,
	const krb5_config_section*,
	krb5_boolean,
	va_list);

KRB5_LIB_FUNCTION int KRB5_LIB_CALL
krb5_config_vget_int (
	krb5_context,
	const krb5_config_section*,
	va_list);

KRB5_LIB_FUNCTION int KRB5_LIB_CALL
krb5_config_vget_int_default (
	krb5_context,
	const krb5_config_section*,
	int,
	va_list);

KRB5_LIB_FUNCTION const krb5_config_binding* KRB5_LIB_CALL
krb5_config_vget_list (
	krb5_context,
	const krb5_config_section*,
	va_list);

KRB5_LIB_FUNCTION const char* KRB5_LIB_CALL
krb5_config_vget_string (
	krb5_context,
	const krb5_config_section*,
	va_list);

KRB5_LIB_FUNCTION const char* KRB5_LIB_CALL
krb5_config_vget_string_default (
	krb5_context,
	const krb5_config_section*,
	const char*,
	va_list);

KRB5_LIB_FUNCTION char** KRB5_LIB_CALL
krb5_config_vget_strings (
	krb5_context,
	const krb5_config_section*,
	va_list);

KRB5_LIB_FUNCTION int KRB5_LIB_CALL
krb5_config_vget_time (
	krb5_context,
	const krb5_config_section*,
	va_list);

KRB5_LIB_FUNCTION int KRB5_LIB_CALL
krb5_config_vget_time_default (
	krb5_context,
	const krb5_config_section*,
	int,
	va_list);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_copy_address (
	krb5_context,
	const krb5_address*,
	krb5_address*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_copy_addresses (
	krb5_context,
	const krb5_addresses*,
	krb5_addresses*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_copy_checksum (
	krb5_context,
	const krb5_checksum*,
	krb5_checksum**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_copy_context (
	krb5_context,
	krb5_context*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_copy_creds (
	krb5_context,
	const krb5_creds*,
	krb5_creds**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_copy_creds_contents (
	krb5_context,
	const krb5_creds*,
	krb5_creds*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_copy_data (
	krb5_context,
	const krb5_data*,
	krb5_data**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_copy_host_realm (
	krb5_context,
	const krb5_realm*,
	krb5_realm**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_copy_keyblock (
	krb5_context,
	const krb5_keyblock*,
	krb5_keyblock**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_copy_keyblock_contents (
	krb5_context,
	const krb5_keyblock*,
	krb5_keyblock*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_copy_principal (
	krb5_context,
	krb5_const_principal,
	krb5_principal*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_copy_ticket (
	krb5_context,
	const krb5_ticket*,
	krb5_ticket**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_create_checksum (
	krb5_context,
	krb5_crypto,
	krb5_key_usage,
	int,
	void*,
	size_t,
	Checksum*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_create_checksum_iov (
	krb5_context,
	krb5_crypto,
	unsigned,
	krb5_crypto_iov*,
	unsigned int,
	krb5_cksumtype*);

unsigned long
krb5_creds_get_ticket_flags (krb5_creds*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_crypto_destroy (
	krb5_context,
	krb5_crypto);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_crypto_fx_cf2 (
	krb5_context,
	const krb5_crypto,
	const krb5_crypto,
	krb5_data*,
	krb5_data*,
	krb5_enctype,
	krb5_keyblock*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_crypto_get_checksum_type (
	krb5_context,
	krb5_crypto,
	krb5_cksumtype*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_crypto_getblocksize (
	krb5_context,
	krb5_crypto,
	size_t*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_crypto_getconfoundersize (
	krb5_context,
	krb5_crypto,
	size_t*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_crypto_getenctype (
	krb5_context,
	krb5_crypto,
	krb5_enctype*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_crypto_getpadsize (
	krb5_context,
	krb5_crypto,
	size_t*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_crypto_init (
	krb5_context,
	const krb5_keyblock*,
	krb5_enctype,
	krb5_crypto*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_crypto_length (
	krb5_context,
	krb5_crypto,
	int,
	size_t*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_crypto_length_iov (
	krb5_context,
	krb5_crypto,
	krb5_crypto_iov*,
	unsigned int);

size_t
krb5_crypto_overhead (
	krb5_context,
	krb5_crypto);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_crypto_prf (
	krb5_context,
	const krb5_crypto,
	const krb5_data*,
	krb5_data*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_crypto_prf_length (
	krb5_context,
	krb5_enctype,
	size_t*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_data_alloc (
	krb5_data*,
	int);

KRB5_LIB_FUNCTION int KRB5_LIB_CALL
krb5_data_cmp (
	const krb5_data*,
	const krb5_data*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_data_copy (
	krb5_data*,
	const void*,
	size_t);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_data_free (krb5_data*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_data_realloc (
	krb5_data*,
	int);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_data_zero (krb5_data*);

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_decode_Authenticator (
	krb5_context,
	const void*,
	size_t,
	Authenticator*,
	size_t*);

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_decode_ETYPE_INFO (
	krb5_context,
	const void*,
	size_t,
	ETYPE_INFO*,
	size_t*);

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_decode_ETYPE_INFO2 (
	krb5_context,
	const void*,
	size_t,
	ETYPE_INFO2*,
	size_t*);

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_decode_EncAPRepPart (
	krb5_context,
	const void*,
	size_t,
	EncAPRepPart*,
	size_t*);

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_decode_EncASRepPart (
	krb5_context,
	const void*,
	size_t,
	EncASRepPart*,
	size_t*);

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_decode_EncKrbCredPart (
	krb5_context,
	const void*,
	size_t,
	EncKrbCredPart*,
	size_t*);

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_decode_EncTGSRepPart (
	krb5_context,
	const void*,
	size_t,
	EncTGSRepPart*,
	size_t*);

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_decode_EncTicketPart (
	krb5_context,
	const void*,
	size_t,
	EncTicketPart*,
	size_t*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_decode_ap_req (
	krb5_context,
	const krb5_data*,
	krb5_ap_req*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_decrypt (
	krb5_context,
	krb5_crypto,
	unsigned,
	void*,
	size_t,
	krb5_data*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_decrypt_EncryptedData (
	krb5_context,
	krb5_crypto,
	unsigned,
	const EncryptedData*,
	krb5_data*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_decrypt_iov_ivec (
	krb5_context,
	krb5_crypto,
	unsigned,
	krb5_crypto_iov*,
	unsigned int,
	void*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_decrypt_ivec (
	krb5_context,
	krb5_crypto,
	unsigned,
	void*,
	size_t,
	krb5_data*,
	void*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_decrypt_ticket (
	krb5_context,
	Ticket*,
	krb5_keyblock*,
	EncTicketPart*,
	krb5_flags);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_derive_key (
	krb5_context,
	const krb5_keyblock*,
	krb5_enctype,
	const void*,
	size_t,
	krb5_keyblock**);

krb5_error_code
krb5_digest_alloc (
	krb5_context,
	krb5_digest*);

void
krb5_digest_free (krb5_digest);

krb5_error_code
krb5_digest_get_client_binding (
	krb5_context,
	krb5_digest,
	char**,
	char**);

const char*
krb5_digest_get_identifier (
	krb5_context,
	krb5_digest);

const char*
krb5_digest_get_opaque (
	krb5_context,
	krb5_digest);

const char*
krb5_digest_get_rsp (
	krb5_context,
	krb5_digest);

const char*
krb5_digest_get_server_nonce (
	krb5_context,
	krb5_digest);

krb5_error_code
krb5_digest_get_session_key (
	krb5_context,
	krb5_digest,
	krb5_data*);

krb5_error_code
krb5_digest_get_tickets (
	krb5_context,
	krb5_digest,
	Ticket**);

krb5_error_code
krb5_digest_init_request (
	krb5_context,
	krb5_digest,
	krb5_realm,
	krb5_ccache);

krb5_error_code
krb5_digest_probe (
	krb5_context,
	krb5_realm,
	krb5_ccache,
	unsigned*);

krb5_boolean
krb5_digest_rep_get_status (
	krb5_context,
	krb5_digest);

krb5_error_code
krb5_digest_request (
	krb5_context,
	krb5_digest,
	krb5_realm,
	krb5_ccache);

krb5_error_code
krb5_digest_set_authentication_user (
	krb5_context,
	krb5_digest,
	krb5_principal);

krb5_error_code
krb5_digest_set_authid (
	krb5_context,
	krb5_digest,
	const char*);

krb5_error_code
krb5_digest_set_client_nonce (
	krb5_context,
	krb5_digest,
	const char*);

krb5_error_code
krb5_digest_set_digest (
	krb5_context,
	krb5_digest,
	const char*);

krb5_error_code
krb5_digest_set_hostname (
	krb5_context,
	krb5_digest,
	const char*);

krb5_error_code
krb5_digest_set_identifier (
	krb5_context,
	krb5_digest,
	const char*);

krb5_error_code
krb5_digest_set_method (
	krb5_context,
	krb5_digest,
	const char*);

krb5_error_code
krb5_digest_set_nonceCount (
	krb5_context,
	krb5_digest,
	const char*);

krb5_error_code
krb5_digest_set_opaque (
	krb5_context,
	krb5_digest,
	const char*);

krb5_error_code
krb5_digest_set_qop (
	krb5_context,
	krb5_digest,
	const char*);

krb5_error_code
krb5_digest_set_realm (
	krb5_context,
	krb5_digest,
	const char*);

int
krb5_digest_set_responseData (
	krb5_context,
	krb5_digest,
	const char*);

krb5_error_code
krb5_digest_set_server_cb (
	krb5_context,
	krb5_digest,
	const char*,
	const char*);

krb5_error_code
krb5_digest_set_server_nonce (
	krb5_context,
	krb5_digest,
	const char*);

krb5_error_code
krb5_digest_set_type (
	krb5_context,
	krb5_digest,
	const char*);

krb5_error_code
krb5_digest_set_uri (
	krb5_context,
	krb5_digest,
	const char*);

krb5_error_code
krb5_digest_set_username (
	krb5_context,
	krb5_digest,
	const char*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_domain_x500_decode (
	krb5_context,
	krb5_data,
	char***,
	unsigned int*,
	const char*,
	const char*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_domain_x500_encode (
	char**,
	unsigned int,
	krb5_data*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_eai_to_heim_errno (
	int,
	int);

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_encode_Authenticator (
	krb5_context,
	void*,
	size_t,
	Authenticator*,
	size_t*);

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_encode_ETYPE_INFO (
	krb5_context,
	void*,
	size_t,
	ETYPE_INFO*,
	size_t*);

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_encode_ETYPE_INFO2 (
	krb5_context,
	void*,
	size_t,
	ETYPE_INFO2*,
	size_t*);

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_encode_EncAPRepPart (
	krb5_context,
	void*,
	size_t,
	EncAPRepPart*,
	size_t*);

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_encode_EncASRepPart (
	krb5_context,
	void*,
	size_t,
	EncASRepPart*,
	size_t*);

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_encode_EncKrbCredPart (
	krb5_context,
	void*,
	size_t,
	EncKrbCredPart*,
	size_t*);

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_encode_EncTGSRepPart (
	krb5_context,
	void*,
	size_t,
	EncTGSRepPart*,
	size_t*);

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_encode_EncTicketPart (
	krb5_context,
	void*,
	size_t,
	EncTicketPart*,
	size_t*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_encrypt (
	krb5_context,
	krb5_crypto,
	unsigned,
	const void*,
	size_t,
	krb5_data*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_encrypt_EncryptedData (
	krb5_context,
	krb5_crypto,
	unsigned,
	void*,
	size_t,
	int,
	EncryptedData*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_encrypt_iov_ivec (
	krb5_context,
	krb5_crypto,
	unsigned,
	krb5_crypto_iov*,
	int,
	void*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_encrypt_ivec (
	krb5_context,
	krb5_crypto,
	unsigned,
	const void*,
	size_t,
	krb5_data*,
	void*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_enctype_disable (
	krb5_context,
	krb5_enctype);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_enctype_enable (
	krb5_context,
	krb5_enctype);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_enctype_keybits (
	krb5_context,
	krb5_enctype,
	size_t*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_enctype_keysize (
	krb5_context,
	krb5_enctype,
	size_t*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_enctype_to_keytype (
	krb5_context,
	krb5_enctype,
	krb5_keytype*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_enctype_to_string (
	krb5_context,
	krb5_enctype,
	char**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_enctype_valid (
	krb5_context,
	krb5_enctype);

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_boolean KRB5_LIB_CALL
krb5_enctypes_compatible_keys (
	krb5_context,
	krb5_enctype,
	krb5_enctype);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_err (
	krb5_context,
	int,
	krb5_error_code,
	const char*,
	...)
     __attribute__ ((noreturn, format (printf, 4, 5)));

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_error_from_rd_error (
	krb5_context,
	const krb5_error*,
	const krb5_creds*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_errx (
	krb5_context,
	int,
	const char*,
	...)
     __attribute__ ((noreturn, format (printf, 3, 4)));

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_expand_hostname (
	krb5_context,
	const char*,
	char**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_expand_hostname_realms (
	krb5_context,
	const char*,
	char**,
	char***);

PA_DATA*
krb5_find_padata (
	PA_DATA*,
	unsigned,
	int,
	int*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_format_time (
	krb5_context,
	time_t,
	char*,
	size_t,
	krb5_boolean);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_free_address (
	krb5_context,
	krb5_address*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_free_addresses (
	krb5_context,
	krb5_addresses*);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_free_ap_rep_enc_part (
	krb5_context,
	krb5_ap_rep_enc_part*);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_free_authenticator (
	krb5_context,
	krb5_authenticator*);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_free_checksum (
	krb5_context,
	krb5_checksum*);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_free_checksum_contents (
	krb5_context,
	krb5_checksum*);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_free_config_files (char**);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_free_context (krb5_context);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_free_cred_contents (
	krb5_context,
	krb5_creds*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_free_creds (
	krb5_context,
	krb5_creds*);

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_free_creds_contents (
	krb5_context,
	krb5_creds*);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_free_data (
	krb5_context,
	krb5_data*);

KRB5_DEPRECATED KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_free_data_contents (
	krb5_context,
	krb5_data*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_free_default_realm (
	krb5_context,
	krb5_realm);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_free_error (
	krb5_context,
	krb5_error*);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_free_error_contents (
	krb5_context,
	krb5_error*);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_free_error_message (
	krb5_context,
	const char*);

KRB5_DEPRECATED KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_free_error_string (
	krb5_context,
	char*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_free_host_realm (
	krb5_context,
	krb5_realm*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_free_kdc_rep (
	krb5_context,
	krb5_kdc_rep*);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_free_keyblock (
	krb5_context,
	krb5_keyblock*);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_free_keyblock_contents (
	krb5_context,
	krb5_keyblock*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_free_krbhst (
	krb5_context,
	char**);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_free_principal (
	krb5_context,
	krb5_principal);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_free_salt (
	krb5_context,
	krb5_salt);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_free_ticket (
	krb5_context,
	krb5_ticket*);

KRB5_DEPRECATED KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_free_unparsed_name (
	krb5_context,
	char*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_fwd_tgt_creds (
	krb5_context,
	krb5_auth_context,
	const char*,
	krb5_principal,
	krb5_principal,
	krb5_ccache,
	int,
	krb5_data*);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_generate_random_block (
	void*,
	size_t);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_generate_random_keyblock (
	krb5_context,
	krb5_enctype,
	krb5_keyblock*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_generate_seq_number (
	krb5_context,
	const krb5_keyblock*,
	uint32_t*);

KRB5_DEPRECATED krb5_error_code KRB5_LIB_FUNCTION
krb5_generate_subkey (
	krb5_context,
	const krb5_keyblock*,
	krb5_keyblock**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_generate_subkey_extended (
	krb5_context,
	const krb5_keyblock*,
	krb5_enctype,
	krb5_keyblock**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_all_client_addrs (
	krb5_context,
	krb5_addresses*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_all_server_addrs (
	krb5_context,
	krb5_addresses*);

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_cred_from_kdc (
	krb5_context,
	krb5_ccache,
	krb5_creds*,
	krb5_creds**,
	krb5_creds***);

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_cred_from_kdc_opt (
	krb5_context,
	krb5_ccache,
	krb5_creds*,
	krb5_creds**,
	krb5_creds***,
	krb5_flags);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_credentials (
	krb5_context,
	krb5_flags,
	krb5_ccache,
	krb5_creds*,
	krb5_creds**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_credentials_with_flags (
	krb5_context,
	krb5_flags,
	krb5_kdc_flags,
	krb5_ccache,
	krb5_creds*,
	krb5_creds**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_creds (
	krb5_context,
	krb5_get_creds_opt,
	krb5_ccache,
	krb5_const_principal,
	krb5_creds**);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_get_creds_opt_add_options (
	krb5_context,
	krb5_get_creds_opt,
	krb5_flags);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_creds_opt_alloc (
	krb5_context,
	krb5_get_creds_opt*);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_get_creds_opt_free (
	krb5_context,
	krb5_get_creds_opt);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_get_creds_opt_set_enctype (
	krb5_context,
	krb5_get_creds_opt,
	krb5_enctype);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_creds_opt_set_impersonate (
	krb5_context,
	krb5_get_creds_opt,
	krb5_const_principal);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_get_creds_opt_set_options (
	krb5_context,
	krb5_get_creds_opt,
	krb5_flags);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_creds_opt_set_ticket (
	krb5_context,
	krb5_get_creds_opt,
	const Ticket*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_default_config_files (char***);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_default_in_tkt_etypes (
	krb5_context,
	krb5_enctype**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_default_principal (
	krb5_context,
	krb5_principal*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_default_realm (
	krb5_context,
	krb5_realm*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_default_realms (
	krb5_context,
	krb5_realm**);

KRB5_LIB_FUNCTION krb5_boolean KRB5_LIB_CALL
krb5_get_dns_canonicalize_hostname (krb5_context);

KRB5_DEPRECATED KRB5_LIB_FUNCTION const char* KRB5_LIB_CALL
krb5_get_err_text (
	krb5_context,
	krb5_error_code);

KRB5_LIB_FUNCTION const char* KRB5_LIB_CALL
krb5_get_error_message (
	krb5_context,
	krb5_error_code);

KRB5_LIB_FUNCTION char* KRB5_LIB_CALL
krb5_get_error_string (krb5_context);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_extra_addresses (
	krb5_context,
	krb5_addresses*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_fcache_version (
	krb5_context,
	int*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_forwarded_creds (
	krb5_context,
	krb5_auth_context,
	krb5_ccache,
	krb5_flags,
	const char*,
	krb5_creds*,
	krb5_data*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_host_realm (
	krb5_context,
	const char*,
	krb5_realm**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_ignore_addresses (
	krb5_context,
	krb5_addresses*);

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_in_cred (
	krb5_context,
	krb5_flags,
	const krb5_addresses*,
	const krb5_enctype*,
	const krb5_preauthtype*,
	const krb5_preauthdata*,
	krb5_key_proc,
	krb5_const_pointer,
	krb5_decrypt_proc,
	krb5_const_pointer,
	krb5_creds*,
	krb5_kdc_rep*);

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_in_tkt (
	krb5_context,
	krb5_flags,
	const krb5_addresses*,
	const krb5_enctype*,
	const krb5_preauthtype*,
	krb5_key_proc,
	krb5_const_pointer,
	krb5_decrypt_proc,
	krb5_const_pointer,
	krb5_creds*,
	krb5_ccache,
	krb5_kdc_rep*);

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_in_tkt_with_keytab (
	krb5_context,
	krb5_flags,
	krb5_addresses*,
	const krb5_enctype*,
	const krb5_preauthtype*,
	krb5_keytab,
	krb5_ccache,
	krb5_creds*,
	krb5_kdc_rep*);

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_in_tkt_with_password (
	krb5_context,
	krb5_flags,
	krb5_addresses*,
	const krb5_enctype*,
	const krb5_preauthtype*,
	const char*,
	krb5_ccache,
	krb5_creds*,
	krb5_kdc_rep*);

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_in_tkt_with_skey (
	krb5_context,
	krb5_flags,
	krb5_addresses*,
	const krb5_enctype*,
	const krb5_preauthtype*,
	const krb5_keyblock*,
	krb5_ccache,
	krb5_creds*,
	krb5_kdc_rep*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_init_creds_keyblock (
	krb5_context,
	krb5_creds*,
	krb5_principal,
	krb5_keyblock*,
	krb5_deltat,
	const char*,
	krb5_get_init_creds_opt*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_init_creds_keytab (
	krb5_context,
	krb5_creds*,
	krb5_principal,
	krb5_keytab,
	krb5_deltat,
	const char*,
	krb5_get_init_creds_opt*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_init_creds_opt_alloc (
	krb5_context,
	krb5_get_init_creds_opt**);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_get_init_creds_opt_free (
	krb5_context,
	krb5_get_init_creds_opt*);

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_init_creds_opt_get_error (
	krb5_context,
	krb5_get_init_creds_opt*,
	KRB_ERROR**);

KRB5_DEPRECATED KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_get_init_creds_opt_init (krb5_get_init_creds_opt*);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_get_init_creds_opt_set_address_list (
	krb5_get_init_creds_opt*,
	krb5_addresses*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_init_creds_opt_set_addressless (
	krb5_context,
	krb5_get_init_creds_opt*,
	krb5_boolean);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_get_init_creds_opt_set_anonymous (
	krb5_get_init_creds_opt*,
	int);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_init_creds_opt_set_canonicalize (
	krb5_context,
	krb5_get_init_creds_opt*,
	krb5_boolean);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_get_init_creds_opt_set_default_flags (
	krb5_context,
	const char*,
	krb5_const_realm,
	krb5_get_init_creds_opt*);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_get_init_creds_opt_set_etype_list (
	krb5_get_init_creds_opt*,
	krb5_enctype*,
	int);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_get_init_creds_opt_set_forwardable (
	krb5_get_init_creds_opt*,
	int);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_init_creds_opt_set_pa_password (
	krb5_context,
	krb5_get_init_creds_opt*,
	const char*,
	krb5_s2k_proc);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_init_creds_opt_set_pac_request (
	krb5_context,
	krb5_get_init_creds_opt*,
	krb5_boolean);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_init_creds_opt_set_pkinit (
	krb5_context,
	krb5_get_init_creds_opt*,
	krb5_principal,
	const char*,
	const char*,
	char* const*,
	char* const*,
	int,
	krb5_prompter_fct,
	void*,
	char*);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_get_init_creds_opt_set_preauth_list (
	krb5_get_init_creds_opt*,
	krb5_preauthtype*,
	int);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_init_creds_opt_set_process_last_req (
	krb5_context,
	krb5_get_init_creds_opt*,
	krb5_gic_process_last_req,
	void*);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_get_init_creds_opt_set_proxiable (
	krb5_get_init_creds_opt*,
	int);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_get_init_creds_opt_set_renew_life (
	krb5_get_init_creds_opt*,
	krb5_deltat);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_get_init_creds_opt_set_salt (
	krb5_get_init_creds_opt*,
	krb5_data*);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_get_init_creds_opt_set_tkt_life (
	krb5_get_init_creds_opt*,
	krb5_deltat);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_init_creds_opt_set_win2k (
	krb5_context,
	krb5_get_init_creds_opt*,
	krb5_boolean);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_init_creds_password (
	krb5_context,
	krb5_creds*,
	krb5_principal,
	const char*,
	krb5_prompter_fct,
	void*,
	krb5_deltat,
	const char*,
	krb5_get_init_creds_opt*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_kdc_cred (
	krb5_context,
	krb5_ccache,
	krb5_kdc_flags,
	krb5_addresses*,
	Ticket*,
	krb5_creds*,
	krb5_creds**out_creds );

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_kdc_sec_offset (
	krb5_context,
	int32_t*,
	int32_t*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_krb524hst (
	krb5_context,
	const krb5_realm*,
	char***);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_krb_admin_hst (
	krb5_context,
	const krb5_realm*,
	char***);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_krb_changepw_hst (
	krb5_context,
	const krb5_realm*,
	char***);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_krbhst (
	krb5_context,
	const krb5_realm*,
	char***);

KRB5_LIB_FUNCTION time_t KRB5_LIB_CALL
krb5_get_max_time_skew (krb5_context);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_permitted_enctypes (
	krb5_context,
	krb5_enctype**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_pw_salt (
	krb5_context,
	krb5_const_principal,
	krb5_salt*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_renewed_creds (
	krb5_context,
	krb5_creds*,
	krb5_const_principal,
	krb5_ccache,
	const char*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_server_rcache (
	krb5_context,
	const krb5_data*,
	krb5_rcache*);

KRB5_LIB_FUNCTION krb5_boolean KRB5_LIB_CALL
krb5_get_use_admin_kdc (krb5_context);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_get_validated_creds (
	krb5_context,
	krb5_creds*,
	krb5_principal,
	krb5_ccache,
	char*);

KRB5_LIB_FUNCTION krb5_log_facility* KRB5_LIB_CALL
krb5_get_warn_dest (krb5_context);

size_t
krb5_get_wrapped_length (
	krb5_context,
	krb5_crypto,
	size_t);

KRB5_LIB_FUNCTION int KRB5_LIB_CALL
krb5_getportbyname (
	krb5_context,
	const char*,
	const char*,
	int);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_h_addr2addr (
	krb5_context,
	int,
	const char*,
	krb5_address*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_h_addr2sockaddr (
	krb5_context,
	int,
	const char*,
	struct sockaddr*,
	krb5_socklen_t*,
	int);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_h_errno_to_heim_errno (int);

KRB5_LIB_FUNCTION krb5_boolean KRB5_LIB_CALL
krb5_have_error_string (krb5_context);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_hmac (
	krb5_context,
	krb5_cksumtype,
	const void*,
	size_t,
	unsigned,
	krb5_keyblock*,
	Checksum*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_init_context (krb5_context*);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_init_creds_free (
	krb5_context,
	krb5_init_creds_context);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_init_creds_get (
	krb5_context,
	krb5_init_creds_context);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_init_creds_get_creds (
	krb5_context,
	krb5_init_creds_context,
	krb5_creds*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_init_creds_get_error (
	krb5_context,
	krb5_init_creds_context,
	KRB_ERROR*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_init_creds_init (
	krb5_context,
	krb5_principal,
	krb5_prompter_fct,
	void*,
	krb5_deltat,
	krb5_get_init_creds_opt*,
	krb5_init_creds_context*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_init_creds_set_keyblock (
	krb5_context,
	krb5_init_creds_context,
	krb5_keyblock*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_init_creds_set_keytab (
	krb5_context,
	krb5_init_creds_context,
	krb5_keytab);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_init_creds_set_password (
	krb5_context,
	krb5_init_creds_context,
	const char*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_init_creds_set_service (
	krb5_context,
	krb5_init_creds_context,
	const char*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_init_creds_step (
	krb5_context,
	krb5_init_creds_context,
	krb5_data*,
	krb5_data*,
	krb5_krbhst_info*,
	unsigned int*);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_init_ets (krb5_context);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_init_etype (
	krb5_context,
	unsigned*,
	krb5_enctype**,
	const krb5_enctype*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_initlog (
	krb5_context,
	const char*,
	krb5_log_facility**);

KRB5_LIB_FUNCTION krb5_boolean KRB5_LIB_CALL
krb5_is_config_principal (
	krb5_context,
	krb5_const_principal);

KRB5_LIB_FUNCTION krb5_boolean KRB5_LIB_CALL
krb5_is_thread_safe (void);

krb5_error_code KRB5_LIB_FUNCTION
krb5_kcm_call (
	krb5_context,
	krb5_storage*,
	krb5_storage**,
	krb5_data*);

krb5_error_code
krb5_kcm_storage_request (
	krb5_context,
	uint16_t,
	krb5_storage**);

KRB5_LIB_FUNCTION const krb5_enctype* KRB5_LIB_CALL
krb5_kerberos_enctypes (krb5_context);

krb5_enctype
krb5_keyblock_get_enctype (const krb5_keyblock*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_keyblock_init (
	krb5_context,
	krb5_enctype,
	const void*,
	size_t,
	krb5_keyblock*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_keyblock_key_proc (
	krb5_context,
	krb5_keytype,
	krb5_data*,
	krb5_const_pointer,
	krb5_keyblock**);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_keyblock_zero (krb5_keyblock*);

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_error_code KRB5_CALLCONV
krb5_keytab_key_proc (
	krb5_context,
	krb5_enctype,
	krb5_salt,
	krb5_const_pointer,
	krb5_keyblock**);

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_keytype_to_enctypes (
	krb5_context,
	krb5_keytype,
	unsigned*,
	krb5_enctype**);

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_keytype_to_enctypes_default (
	krb5_context,
	krb5_keytype,
	unsigned*,
	krb5_enctype**);

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_keytype_to_string (
	krb5_context,
	krb5_keytype,
	char**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_krbhst_format_string (
	krb5_context,
	const krb5_krbhst_info*,
	char*,
	size_t);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_krbhst_free (
	krb5_context,
	krb5_krbhst_handle);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_krbhst_get_addrinfo (
	krb5_context,
	krb5_krbhst_info*,
	struct addrinfo**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_krbhst_init (
	krb5_context,
	const char*,
	unsigned int,
	krb5_krbhst_handle*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_krbhst_init_flags (
	krb5_context,
	const char*,
	unsigned int,
	int,
	krb5_krbhst_handle*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_krbhst_next (
	krb5_context,
	krb5_krbhst_handle,
	krb5_krbhst_info**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_krbhst_next_as_string (
	krb5_context,
	krb5_krbhst_handle,
	char*,
	size_t);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_krbhst_reset (
	krb5_context,
	krb5_krbhst_handle);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_kt_add_entry (
	krb5_context,
	krb5_keytab,
	krb5_keytab_entry*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_kt_close (
	krb5_context,
	krb5_keytab);

KRB5_LIB_FUNCTION krb5_boolean KRB5_LIB_CALL
krb5_kt_compare (
	krb5_context,
	krb5_keytab_entry*,
	krb5_const_principal,
	krb5_kvno,
	krb5_enctype);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_kt_copy_entry_contents (
	krb5_context,
	const krb5_keytab_entry*,
	krb5_keytab_entry*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_kt_default (
	krb5_context,
	krb5_keytab*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_kt_default_modify_name (
	krb5_context,
	char*,
	size_t);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_kt_default_name (
	krb5_context,
	char*,
	size_t);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_kt_destroy (
	krb5_context,
	krb5_keytab);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_kt_end_seq_get (
	krb5_context,
	krb5_keytab,
	krb5_kt_cursor*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_kt_free_entry (
	krb5_context,
	krb5_keytab_entry*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_kt_get_entry (
	krb5_context,
	krb5_keytab,
	krb5_const_principal,
	krb5_kvno,
	krb5_enctype,
	krb5_keytab_entry*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_kt_get_full_name (
	krb5_context,
	krb5_keytab,
	char**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_kt_get_name (
	krb5_context,
	krb5_keytab,
	char*,
	size_t);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_kt_get_type (
	krb5_context,
	krb5_keytab,
	char*,
	size_t);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_kt_next_entry (
	krb5_context,
	krb5_keytab,
	krb5_keytab_entry*,
	krb5_kt_cursor*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_kt_read_service_key (
	krb5_context,
	krb5_pointer,
	krb5_principal,
	krb5_kvno,
	krb5_enctype,
	krb5_keyblock**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_kt_register (
	krb5_context,
	const krb5_kt_ops*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_kt_remove_entry (
	krb5_context,
	krb5_keytab,
	krb5_keytab_entry*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_kt_resolve (
	krb5_context,
	const char*,
	krb5_keytab*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_kt_start_seq_get (
	krb5_context,
	krb5_keytab,
	krb5_kt_cursor*);

KRB5_LIB_FUNCTION krb5_boolean KRB5_LIB_CALL
krb5_kuserok (
	krb5_context,
	krb5_principal,
	const char*);

krb5_error_code
krb5_load_config_from_registry (
	krb5_context,
	krb5_config_section**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_log (
	krb5_context,
	krb5_log_facility*,
	int,
	const char*,
	...)
     __attribute__((format (printf, 4, 5)));

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_log_msg (
	krb5_context,
	krb5_log_facility*,
	int,
	char**,
	const char*,
	...)
     __attribute__((format (printf, 5, 6)));

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_make_addrport (
	krb5_context,
	krb5_address**,
	const krb5_address*,
	int16_t);

krb5_error_code KRB5_LIB_FUNCTION
krb5_make_principal (
	krb5_context,
	krb5_principal*,
	krb5_const_realm,
	...);

KRB5_LIB_FUNCTION size_t KRB5_LIB_CALL
krb5_max_sockaddr_size (void);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_mk_error (
	krb5_context,
	krb5_error_code,
	const char*,
	const krb5_data*,
	const krb5_principal,
	const krb5_principal,
	time_t*,
	int*,
	krb5_data*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_mk_priv (
	krb5_context,
	krb5_auth_context,
	const krb5_data*,
	krb5_data*,
	krb5_replay_data*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_mk_rep (
	krb5_context,
	krb5_auth_context,
	krb5_data*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_mk_req (
	krb5_context,
	krb5_auth_context*,
	const krb5_flags,
	const char*,
	const char*,
	krb5_data*,
	krb5_ccache,
	krb5_data*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_mk_req_exact (
	krb5_context,
	krb5_auth_context*,
	const krb5_flags,
	const krb5_principal,
	krb5_data*,
	krb5_ccache,
	krb5_data*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_mk_req_extended (
	krb5_context,
	krb5_auth_context*,
	const krb5_flags,
	krb5_data*,
	krb5_creds*,
	krb5_data*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_mk_safe (
	krb5_context,
	krb5_auth_context,
	const krb5_data*,
	krb5_data*,
	krb5_replay_data*);

KRB5_LIB_FUNCTION krb5_ssize_t KRB5_LIB_CALL
krb5_net_read (
	krb5_context,
	void*,
	void*,
	size_t);

KRB5_LIB_FUNCTION krb5_ssize_t KRB5_LIB_CALL
krb5_net_write (
	krb5_context,
	void*,
	const void*,
	size_t);

KRB5_LIB_FUNCTION krb5_ssize_t KRB5_LIB_CALL
krb5_net_write_block (
	krb5_context,
	void*,
	const void*,
	size_t,
	time_t);

krb5_error_code
krb5_ntlm_alloc (
	krb5_context,
	krb5_ntlm*);

krb5_error_code
krb5_ntlm_free (
	krb5_context,
	krb5_ntlm);

krb5_error_code
krb5_ntlm_init_get_challange (
	krb5_context,
	krb5_ntlm,
	krb5_data*);

krb5_error_code
krb5_ntlm_init_get_flags (
	krb5_context,
	krb5_ntlm,
	uint32_t*);

krb5_error_code
krb5_ntlm_init_get_opaque (
	krb5_context,
	krb5_ntlm,
	krb5_data*);

krb5_error_code
krb5_ntlm_init_get_targetinfo (
	krb5_context,
	krb5_ntlm,
	krb5_data*);

krb5_error_code
krb5_ntlm_init_get_targetname (
	krb5_context,
	krb5_ntlm,
	char**);

krb5_error_code
krb5_ntlm_init_request (
	krb5_context,
	krb5_ntlm,
	krb5_realm,
	krb5_ccache,
	uint32_t,
	const char*,
	const char*);

krb5_error_code
krb5_ntlm_rep_get_sessionkey (
	krb5_context,
	krb5_ntlm,
	krb5_data*);

krb5_boolean
krb5_ntlm_rep_get_status (
	krb5_context,
	krb5_ntlm);

krb5_error_code
krb5_ntlm_req_set_flags (
	krb5_context,
	krb5_ntlm,
	uint32_t);

krb5_error_code
krb5_ntlm_req_set_lm (
	krb5_context,
	krb5_ntlm,
	void*,
	size_t);

krb5_error_code
krb5_ntlm_req_set_ntlm (
	krb5_context,
	krb5_ntlm,
	void*,
	size_t);

krb5_error_code
krb5_ntlm_req_set_opaque (
	krb5_context,
	krb5_ntlm,
	krb5_data*);

krb5_error_code
krb5_ntlm_req_set_session (
	krb5_context,
	krb5_ntlm,
	void*,
	size_t);

krb5_error_code
krb5_ntlm_req_set_targetname (
	krb5_context,
	krb5_ntlm,
	const char*);

krb5_error_code
krb5_ntlm_req_set_username (
	krb5_context,
	krb5_ntlm,
	const char*);

krb5_error_code
krb5_ntlm_request (
	krb5_context,
	krb5_ntlm,
	krb5_realm,
	krb5_ccache);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_openlog (
	krb5_context,
	const char*,
	krb5_log_facility**);

krb5_error_code
krb5_pac_add_buffer (
	krb5_context,
	krb5_pac,
	uint32_t,
	const krb5_data*);

void
krb5_pac_free (
	krb5_context,
	krb5_pac);

krb5_error_code
krb5_pac_get_buffer (
	krb5_context,
	krb5_pac,
	uint32_t,
	krb5_data*);

krb5_error_code
krb5_pac_get_types (
	krb5_context,
	krb5_pac,
	size_t*,
	uint32_t**);

krb5_error_code
krb5_pac_init (
	krb5_context,
	krb5_pac*);

krb5_error_code
krb5_pac_parse (
	krb5_context,
	const void*,
	size_t,
	krb5_pac*);

krb5_error_code
krb5_pac_verify (
	krb5_context,
	const krb5_pac,
	time_t,
	krb5_const_principal,
	const krb5_keyblock*,
	const krb5_keyblock*);

KRB5_LIB_FUNCTION int KRB5_LIB_CALL
krb5_padata_add (
	krb5_context,
	METHOD_DATA*,
	int,
	void*,
	size_t);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_parse_address (
	krb5_context,
	const char*,
	krb5_addresses*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_parse_name (
	krb5_context,
	const char*,
	krb5_principal*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_parse_name_flags (
	krb5_context,
	const char*,
	int,
	krb5_principal*);

krb5_error_code
krb5_parse_nametype (
	krb5_context,
	const char*,
	int32_t*);

KRB5_LIB_FUNCTION const char* KRB5_LIB_CALL
krb5_passwd_result_to_string (
	krb5_context,
	int);

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_error_code KRB5_CALLCONV
krb5_password_key_proc (
	krb5_context,
	krb5_enctype,
	krb5_salt,
	krb5_const_pointer,
	krb5_keyblock**);

krb5_error_code
krb5_plugin_register (
	krb5_context,
	enum krb5_plugin_type,
	const char*,
	void*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_prepend_config_files (
	const char*,
	char**,
	char***);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_prepend_config_files_default (
	const char*,
	char***);

void KRB5_LIB_FUNCTION
krb5_prepend_error_message (
	krb5_context,
	krb5_error_code,
	const char*,
	...)
     __attribute__ ((format (printf, 3, 4)));

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_realm* KRB5_LIB_CALL
krb5_princ_realm (
	krb5_context,
	krb5_principal);

KRB5_DEPRECATED KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_princ_set_realm (
	krb5_context,
	krb5_principal,
	krb5_realm*);

KRB5_LIB_FUNCTION krb5_boolean KRB5_LIB_CALL
krb5_principal_compare (
	krb5_context,
	krb5_const_principal,
	krb5_const_principal);

KRB5_LIB_FUNCTION krb5_boolean KRB5_LIB_CALL
krb5_principal_compare_any_realm (
	krb5_context,
	krb5_const_principal,
	krb5_const_principal);

KRB5_LIB_FUNCTION const char* KRB5_LIB_CALL
krb5_principal_get_comp_string (
	krb5_context,
	krb5_const_principal,
	unsigned int);

KRB5_LIB_FUNCTION unsigned int KRB5_LIB_CALL
krb5_principal_get_num_comp (
	krb5_context,
	krb5_const_principal);

KRB5_LIB_FUNCTION const char* KRB5_LIB_CALL
krb5_principal_get_realm (
	krb5_context,
	krb5_const_principal);

KRB5_LIB_FUNCTION int KRB5_LIB_CALL
krb5_principal_get_type (
	krb5_context,
	krb5_const_principal);

krb5_boolean
krb5_principal_is_krbtgt (
	krb5_context,
	krb5_const_principal);

KRB5_LIB_FUNCTION krb5_boolean KRB5_LIB_CALL
krb5_principal_match (
	krb5_context,
	krb5_const_principal,
	krb5_const_principal);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_principal_set_realm (
	krb5_context,
	krb5_principal,
	krb5_const_realm);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_principal_set_type (
	krb5_context,
	krb5_principal,
	int);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_print_address (
	const krb5_address*,
	char*,
	size_t,
	size_t*);

KRB5_LIB_FUNCTION int KRB5_LIB_CALL
krb5_program_setup (
	krb5_context*,
	int,
	char**,
	struct getargs*,
	int,
	void (KRB5_LIB_CALL*usage)(int, struct getargs*, int));

KRB5_LIB_FUNCTION int KRB5_CALLCONV
krb5_prompter_posix (
	krb5_context,
	void*,
	const char*,
	const char*,
	int,
	krb5_prompt prompts[]);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_random_to_key (
	krb5_context,
	krb5_enctype,
	const void*,
	size_t,
	krb5_keyblock*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_rc_close (
	krb5_context,
	krb5_rcache);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_rc_default (
	krb5_context,
	krb5_rcache*);

KRB5_LIB_FUNCTION const char* KRB5_LIB_CALL
krb5_rc_default_name (krb5_context);

KRB5_LIB_FUNCTION const char* KRB5_LIB_CALL
krb5_rc_default_type (krb5_context);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_rc_destroy (
	krb5_context,
	krb5_rcache);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_rc_expunge (
	krb5_context,
	krb5_rcache);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_rc_get_lifespan (
	krb5_context,
	krb5_rcache,
	krb5_deltat*);

KRB5_LIB_FUNCTION const char* KRB5_LIB_CALL
krb5_rc_get_name (
	krb5_context,
	krb5_rcache);

KRB5_LIB_FUNCTION const char* KRB5_LIB_CALL
krb5_rc_get_type (
	krb5_context,
	krb5_rcache);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_rc_initialize (
	krb5_context,
	krb5_rcache,
	krb5_deltat);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_rc_recover (
	krb5_context,
	krb5_rcache);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_rc_resolve (
	krb5_context,
	krb5_rcache,
	const char*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_rc_resolve_full (
	krb5_context,
	krb5_rcache*,
	const char*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_rc_resolve_type (
	krb5_context,
	krb5_rcache*,
	const char*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_rc_store (
	krb5_context,
	krb5_rcache,
	krb5_donot_replay*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_rd_cred (
	krb5_context,
	krb5_auth_context,
	krb5_data*,
	krb5_creds***,
	krb5_replay_data*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_rd_cred2 (
	krb5_context,
	krb5_auth_context,
	krb5_ccache,
	krb5_data*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_rd_error (
	krb5_context,
	const krb5_data*,
	KRB_ERROR*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_rd_priv (
	krb5_context,
	krb5_auth_context,
	const krb5_data*,
	krb5_data*,
	krb5_replay_data*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_rd_rep (
	krb5_context,
	krb5_auth_context,
	const krb5_data*,
	krb5_ap_rep_enc_part**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_rd_req (
	krb5_context,
	krb5_auth_context*,
	const krb5_data*,
	krb5_const_principal,
	krb5_keytab,
	krb5_flags*,
	krb5_ticket**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_rd_req_ctx (
	krb5_context,
	krb5_auth_context*,
	const krb5_data*,
	krb5_const_principal,
	krb5_rd_req_in_ctx,
	krb5_rd_req_out_ctx*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_rd_req_in_ctx_alloc (
	krb5_context,
	krb5_rd_req_in_ctx*);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_rd_req_in_ctx_free (
	krb5_context,
	krb5_rd_req_in_ctx);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_rd_req_in_set_keyblock (
	krb5_context,
	krb5_rd_req_in_ctx,
	krb5_keyblock*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_rd_req_in_set_keytab (
	krb5_context,
	krb5_rd_req_in_ctx,
	krb5_keytab);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_rd_req_in_set_pac_check (
	krb5_context,
	krb5_rd_req_in_ctx,
	krb5_boolean);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_rd_req_out_ctx_free (
	krb5_context,
	krb5_rd_req_out_ctx);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_rd_req_out_get_ap_req_options (
	krb5_context,
	krb5_rd_req_out_ctx,
	krb5_flags*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_rd_req_out_get_keyblock (
	krb5_context,
	krb5_rd_req_out_ctx,
	krb5_keyblock**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_rd_req_out_get_server (
	krb5_context,
	krb5_rd_req_out_ctx,
	krb5_principal*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_rd_req_out_get_ticket (
	krb5_context,
	krb5_rd_req_out_ctx,
	krb5_ticket**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_rd_req_with_keyblock (
	krb5_context,
	krb5_auth_context*,
	const krb5_data*,
	krb5_const_principal,
	krb5_keyblock*,
	krb5_flags*,
	krb5_ticket**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_rd_safe (
	krb5_context,
	krb5_auth_context,
	const krb5_data*,
	krb5_data*,
	krb5_replay_data*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_read_message (
	krb5_context,
	krb5_pointer,
	krb5_data*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_read_priv_message (
	krb5_context,
	krb5_auth_context,
	krb5_pointer,
	krb5_data*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_read_safe_message (
	krb5_context,
	krb5_auth_context,
	krb5_pointer,
	krb5_data*);

KRB5_LIB_FUNCTION krb5_boolean KRB5_LIB_CALL
krb5_realm_compare (
	krb5_context,
	krb5_const_principal,
	krb5_const_principal);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_recvauth (
	krb5_context,
	krb5_auth_context*,
	krb5_pointer,
	const char*,
	krb5_principal,
	int32_t,
	krb5_keytab,
	krb5_ticket**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_recvauth_match_version (
	krb5_context,
	krb5_auth_context*,
	krb5_pointer,
	krb5_boolean (*)(const void*, const char*),
	const void*,
	krb5_principal,
	int32_t,
	krb5_keytab,
	krb5_ticket**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_ret_address (
	krb5_storage*,
	krb5_address*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_ret_addrs (
	krb5_storage*,
	krb5_addresses*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_ret_authdata (
	krb5_storage*,
	krb5_authdata*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_ret_creds (
	krb5_storage*,
	krb5_creds*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_ret_creds_tag (
	krb5_storage*,
	krb5_creds*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_ret_data (
	krb5_storage*,
	krb5_data*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_ret_int16 (
	krb5_storage*,
	int16_t*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_ret_int32 (
	krb5_storage*,
	int32_t*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_ret_int8 (
	krb5_storage*,
	int8_t*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_ret_keyblock (
	krb5_storage*,
	krb5_keyblock*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_ret_principal (
	krb5_storage*,
	krb5_principal*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_ret_string (
	krb5_storage*,
	char**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_ret_stringnl (
	krb5_storage*,
	char**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_ret_stringz (
	krb5_storage*,
	char**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_ret_times (
	krb5_storage*,
	krb5_times*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_ret_uint16 (
	krb5_storage*,
	uint16_t*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_ret_uint32 (
	krb5_storage*,
	uint32_t*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_ret_uint8 (
	krb5_storage*,
	uint8_t*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_salttype_to_string (
	krb5_context,
	krb5_enctype,
	krb5_salttype,
	char**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_sendauth (
	krb5_context,
	krb5_auth_context*,
	krb5_pointer,
	const char*,
	krb5_principal,
	krb5_principal,
	krb5_flags,
	krb5_data*,
	krb5_creds*,
	krb5_ccache,
	krb5_error**,
	krb5_ap_rep_enc_part**,
	krb5_creds**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_sendto (
	krb5_context,
	const krb5_data*,
	krb5_krbhst_handle,
	krb5_data*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_sendto_context (
	krb5_context,
	krb5_sendto_ctx,
	const krb5_data*,
	const krb5_realm,
	krb5_data*);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_sendto_ctx_add_flags (
	krb5_sendto_ctx,
	int);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_sendto_ctx_alloc (
	krb5_context,
	krb5_sendto_ctx*);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_sendto_ctx_free (
	krb5_context,
	krb5_sendto_ctx);

KRB5_LIB_FUNCTION int KRB5_LIB_CALL
krb5_sendto_ctx_get_flags (krb5_sendto_ctx);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_sendto_ctx_set_func (
	krb5_sendto_ctx,
	krb5_sendto_ctx_func,
	void*);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_sendto_ctx_set_type (
	krb5_sendto_ctx,
	int);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_sendto_kdc (
	krb5_context,
	const krb5_data*,
	const krb5_realm*,
	krb5_data*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_sendto_kdc_flags (
	krb5_context,
	const krb5_data*,
	const krb5_realm*,
	krb5_data*,
	int);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_set_config_files (
	krb5_context,
	char**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_set_default_in_tkt_etypes (
	krb5_context,
	const krb5_enctype*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_set_default_realm (
	krb5_context,
	const char*);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_set_dns_canonicalize_hostname (
	krb5_context,
	krb5_boolean);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_set_error_message (
	krb5_context,
	krb5_error_code,
	const char*,
	...)
     __attribute__ ((format (printf, 3, 4)));

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_set_error_string (
	krb5_context,
	const char*,
	...)
     __attribute__((format (printf, 2, 3)));

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_set_extra_addresses (
	krb5_context,
	const krb5_addresses*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_set_fcache_version (
	krb5_context,
	int);

krb5_boolean
krb5_set_home_dir_access (
	krb5_context,
	krb5_boolean);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_set_ignore_addresses (
	krb5_context,
	const krb5_addresses*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_set_kdc_sec_offset (
	krb5_context,
	int32_t,
	int32_t);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_set_max_time_skew (
	krb5_context,
	time_t);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_set_password (
	krb5_context,
	krb5_creds*,
	const char*,
	krb5_principal,
	int*,
	krb5_data*,
	krb5_data*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_set_password_using_ccache (
	krb5_context,
	krb5_ccache,
	const char*,
	krb5_principal,
	int*,
	krb5_data*,
	krb5_data*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_set_real_time (
	krb5_context,
	krb5_timestamp,
	int32_t);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_set_send_to_kdc_func (
	krb5_context,
	krb5_send_to_kdc_func,
	void*);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_set_use_admin_kdc (
	krb5_context,
	krb5_boolean);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_set_warn_dest (
	krb5_context,
	krb5_log_facility*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_sname_to_principal (
	krb5_context,
	const char*,
	const char*,
	int32_t,
	krb5_principal*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_sock_to_principal (
	krb5_context,
	int,
	const char*,
	int32_t,
	krb5_principal*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_sockaddr2address (
	krb5_context,
	const struct sockaddr*,
	krb5_address*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_sockaddr2port (
	krb5_context,
	const struct sockaddr*,
	int16_t*);

KRB5_LIB_FUNCTION krb5_boolean KRB5_LIB_CALL
krb5_sockaddr_uninteresting (const struct sockaddr*);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_std_usage (
	int,
	struct getargs*,
	int);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_storage_clear_flags (
	krb5_storage*,
	krb5_flags);

KRB5_LIB_FUNCTION krb5_storage* KRB5_LIB_CALL
krb5_storage_emem (void);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_storage_free (krb5_storage*);

KRB5_LIB_FUNCTION krb5_storage* KRB5_LIB_CALL
krb5_storage_from_data (krb5_data*);

KRB5_LIB_FUNCTION krb5_storage* KRB5_LIB_CALL
krb5_storage_from_fd (krb5_socket_t);

KRB5_LIB_FUNCTION krb5_storage* KRB5_LIB_CALL
krb5_storage_from_mem (
	void*,
	size_t);

KRB5_LIB_FUNCTION krb5_storage* KRB5_LIB_CALL
krb5_storage_from_readonly_mem (
	const void*,
	size_t);

KRB5_LIB_FUNCTION krb5_flags KRB5_LIB_CALL
krb5_storage_get_byteorder (krb5_storage*);

KRB5_LIB_FUNCTION int KRB5_LIB_CALL
krb5_storage_get_eof_code (krb5_storage*);

KRB5_LIB_FUNCTION krb5_boolean KRB5_LIB_CALL
krb5_storage_is_flags (
	krb5_storage*,
	krb5_flags);

KRB5_LIB_FUNCTION krb5_ssize_t KRB5_LIB_CALL
krb5_storage_read (
	krb5_storage*,
	void*,
	size_t);

KRB5_LIB_FUNCTION off_t KRB5_LIB_CALL
krb5_storage_seek (
	krb5_storage*,
	off_t,
	int);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_storage_set_byteorder (
	krb5_storage*,
	krb5_flags);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_storage_set_eof_code (
	krb5_storage*,
	int);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_storage_set_flags (
	krb5_storage*,
	krb5_flags);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_storage_to_data (
	krb5_storage*,
	krb5_data*);

KRB5_LIB_FUNCTION int KRB5_LIB_CALL
krb5_storage_truncate (
	krb5_storage*,
	off_t);

KRB5_LIB_FUNCTION krb5_ssize_t KRB5_LIB_CALL
krb5_storage_write (
	krb5_storage*,
	const void*,
	size_t);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_store_address (
	krb5_storage*,
	krb5_address);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_store_addrs (
	krb5_storage*,
	krb5_addresses);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_store_authdata (
	krb5_storage*,
	krb5_authdata);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_store_creds (
	krb5_storage*,
	krb5_creds*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_store_creds_tag (
	krb5_storage*,
	krb5_creds*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_store_data (
	krb5_storage*,
	krb5_data);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_store_int16 (
	krb5_storage*,
	int16_t);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_store_int32 (
	krb5_storage*,
	int32_t);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_store_int8 (
	krb5_storage*,
	int8_t);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_store_keyblock (
	krb5_storage*,
	krb5_keyblock);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_store_principal (
	krb5_storage*,
	krb5_const_principal);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_store_string (
	krb5_storage*,
	const char*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_store_stringnl (
	krb5_storage*,
	const char*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_store_stringz (
	krb5_storage*,
	const char*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_store_times (
	krb5_storage*,
	krb5_times);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_store_uint16 (
	krb5_storage*,
	uint16_t);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_store_uint32 (
	krb5_storage*,
	uint32_t);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_store_uint8 (
	krb5_storage*,
	uint8_t);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_string_to_deltat (
	const char*,
	krb5_deltat*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_string_to_enctype (
	krb5_context,
	const char*,
	krb5_enctype*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_string_to_key (
	krb5_context,
	krb5_enctype,
	const char*,
	krb5_principal,
	krb5_keyblock*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_string_to_key_data (
	krb5_context,
	krb5_enctype,
	krb5_data,
	krb5_principal,
	krb5_keyblock*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_string_to_key_data_salt (
	krb5_context,
	krb5_enctype,
	krb5_data,
	krb5_salt,
	krb5_keyblock*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_string_to_key_data_salt_opaque (
	krb5_context,
	krb5_enctype,
	krb5_data,
	krb5_salt,
	krb5_data,
	krb5_keyblock*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_string_to_key_derived (
	krb5_context,
	const void*,
	size_t,
	krb5_enctype,
	krb5_keyblock*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_string_to_key_salt (
	krb5_context,
	krb5_enctype,
	const char*,
	krb5_salt,
	krb5_keyblock*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_string_to_key_salt_opaque (
	krb5_context,
	krb5_enctype,
	const char*,
	krb5_salt,
	krb5_data,
	krb5_keyblock*);

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_string_to_keytype (
	krb5_context,
	const char*,
	krb5_keytype*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_string_to_salttype (
	krb5_context,
	krb5_enctype,
	const char*,
	krb5_salttype*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_ticket_get_authorization_data_type (
	krb5_context,
	krb5_ticket*,
	int,
	krb5_data*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_ticket_get_client (
	krb5_context,
	const krb5_ticket*,
	krb5_principal*);

KRB5_LIB_FUNCTION time_t KRB5_LIB_CALL
krb5_ticket_get_endtime (
	krb5_context,
	const krb5_ticket*);

unsigned long
krb5_ticket_get_flags (
	krb5_context,
	const krb5_ticket*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_ticket_get_server (
	krb5_context,
	const krb5_ticket*,
	krb5_principal*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_timeofday (
	krb5_context,
	krb5_timestamp*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_unparse_name (
	krb5_context,
	krb5_const_principal,
	char**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_unparse_name_fixed (
	krb5_context,
	krb5_const_principal,
	char*,
	size_t);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_unparse_name_fixed_flags (
	krb5_context,
	krb5_const_principal,
	int,
	char*,
	size_t);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_unparse_name_fixed_short (
	krb5_context,
	krb5_const_principal,
	char*,
	size_t);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_unparse_name_flags (
	krb5_context,
	krb5_const_principal,
	int,
	char**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_unparse_name_short (
	krb5_context,
	krb5_const_principal,
	char**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_us_timeofday (
	krb5_context,
	krb5_timestamp*,
	int32_t*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_vabort (
	krb5_context,
	krb5_error_code,
	const char*,
	va_list)
     __attribute__ ((noreturn, format (printf, 3, 0)));

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_vabortx (
	krb5_context,
	const char*,
	va_list)
     __attribute__ ((noreturn, format (printf, 2, 0)));

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_verify_ap_req (
	krb5_context,
	krb5_auth_context*,
	krb5_ap_req*,
	krb5_const_principal,
	krb5_keyblock*,
	krb5_flags,
	krb5_flags*,
	krb5_ticket**);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_verify_ap_req2 (
	krb5_context,
	krb5_auth_context*,
	krb5_ap_req*,
	krb5_const_principal,
	krb5_keyblock*,
	krb5_flags,
	krb5_flags*,
	krb5_ticket**,
	krb5_key_usage);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_verify_authenticator_checksum (
	krb5_context,
	krb5_auth_context,
	void*,
	size_t);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_verify_checksum (
	krb5_context,
	krb5_crypto,
	krb5_key_usage,
	void*,
	size_t,
	Checksum*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_verify_checksum_iov (
	krb5_context,
	krb5_crypto,
	unsigned,
	krb5_crypto_iov*,
	unsigned int,
	krb5_cksumtype*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_verify_init_creds (
	krb5_context,
	krb5_creds*,
	krb5_principal,
	krb5_keytab,
	krb5_ccache*,
	krb5_verify_init_creds_opt*);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_verify_init_creds_opt_init (krb5_verify_init_creds_opt*);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_verify_init_creds_opt_set_ap_req_nofail (
	krb5_verify_init_creds_opt*,
	int);

KRB5_LIB_FUNCTION int KRB5_LIB_CALL
krb5_verify_opt_alloc (
	krb5_context,
	krb5_verify_opt**);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_verify_opt_free (krb5_verify_opt*);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_verify_opt_init (krb5_verify_opt*);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_verify_opt_set_ccache (
	krb5_verify_opt*,
	krb5_ccache);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_verify_opt_set_flags (
	krb5_verify_opt*,
	unsigned int);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_verify_opt_set_keytab (
	krb5_verify_opt*,
	krb5_keytab);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_verify_opt_set_secure (
	krb5_verify_opt*,
	krb5_boolean);

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_verify_opt_set_service (
	krb5_verify_opt*,
	const char*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_verify_user (
	krb5_context,
	krb5_principal,
	krb5_ccache,
	const char*,
	krb5_boolean,
	const char*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_verify_user_lrealm (
	krb5_context,
	krb5_principal,
	krb5_ccache,
	const char*,
	krb5_boolean,
	const char*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_verify_user_opt (
	krb5_context,
	krb5_principal,
	const char*,
	krb5_verify_opt*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_verr (
	krb5_context,
	int,
	krb5_error_code,
	const char*,
	va_list)
     __attribute__ ((noreturn, format (printf, 4, 0)));

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_verrx (
	krb5_context,
	int,
	const char*,
	va_list)
     __attribute__ ((noreturn, format (printf, 3, 0)));

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_vlog (
	krb5_context,
	krb5_log_facility*,
	int,
	const char*,
	va_list)
     __attribute__((format (printf, 4, 0)));

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_vlog_msg (
	krb5_context,
	krb5_log_facility*,
	char**,
	int,
	const char*,
	va_list)
     __attribute__((format (printf, 5, 0)));

void KRB5_LIB_FUNCTION
krb5_vprepend_error_message (
	krb5_context,
	krb5_error_code,
	const char*,
	va_list)
     __attribute__ ((format (printf, 3, 0)));

KRB5_LIB_FUNCTION void KRB5_LIB_CALL
krb5_vset_error_message (
	krb5_context,
	krb5_error_code,
	const char*,
	va_list)
     __attribute__ ((format (printf, 3, 0)));

KRB5_DEPRECATED KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_vset_error_string (
	krb5_context,
	const char*,
	va_list)
     __attribute__ ((format (printf, 2, 0)));

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_vwarn (
	krb5_context,
	krb5_error_code,
	const char*,
	va_list)
     __attribute__ ((format (printf, 3, 0)));

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_vwarnx (
	krb5_context,
	const char*,
	va_list)
     __attribute__ ((format (printf, 2, 0)));

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_warn (
	krb5_context,
	krb5_error_code,
	const char*,
	...)
     __attribute__ ((format (printf, 3, 4)));

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_warnx (
	krb5_context,
	const char*,
	...)
     __attribute__ ((format (printf, 2, 3)));

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_write_message (
	krb5_context,
	krb5_pointer,
	krb5_data*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_write_priv_message (
	krb5_context,
	krb5_auth_context,
	krb5_pointer,
	krb5_data*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_write_safe_message (
	krb5_context,
	krb5_auth_context,
	krb5_pointer,
	krb5_data*);

KRB5_LIB_FUNCTION krb5_error_code KRB5_LIB_CALL
krb5_xfree (void*);

#ifdef __cplusplus
}
#endif

#endif /* __C__src_heimdal_lib_krb5_______out_obj_XP32_RETAIL_lib_krb5_krb5_protos_h__ */
