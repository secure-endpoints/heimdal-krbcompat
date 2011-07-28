/* This is a generated file */
#ifndef __kadm5_protos_h__
#define __kadm5_protos_h__

#include <stdarg.h>

#ifdef __cplusplus
extern "C" {
#endif

kadm5_ret_t
kadm5_ad_init_with_password (
	const char*,
	const char*,
	const char*,
	kadm5_config_params*,
	unsigned long,
	unsigned long,
	void**);

kadm5_ret_t
kadm5_ad_init_with_password_ctx (
	krb5_context,
	const char*,
	const char*,
	const char*,
	kadm5_config_params*,
	unsigned long,
	unsigned long,
	void**);

krb5_error_code
kadm5_add_passwd_quality_verifier (
	krb5_context,
	const char*);

const char*
kadm5_check_password_quality (
	krb5_context,
	krb5_principal,
	krb5_data*);

kadm5_ret_t
kadm5_chpass_principal (
	void*,
	krb5_principal,
	const char*);

kadm5_ret_t
kadm5_chpass_principal_with_key (
	void*,
	krb5_principal,
	int,
	krb5_key_data*);

kadm5_ret_t
kadm5_create_principal (
	void*,
	kadm5_principal_ent_t,
	uint32_t,
	const char*);

kadm5_ret_t
kadm5_delete_principal (
	void*,
	krb5_principal);

kadm5_ret_t
kadm5_destroy (void*);

kadm5_ret_t
kadm5_flush (void*);

void
kadm5_free_key_data (
	void*,
	int16_t*,
	krb5_key_data*);

void
kadm5_free_name_list (
	void*,
	char**,
	int*);

void
kadm5_free_principal_ent (
	void*,
	kadm5_principal_ent_t);

kadm5_ret_t
kadm5_get_principal (
	void*,
	krb5_principal,
	kadm5_principal_ent_t,
	uint32_t);

kadm5_ret_t
kadm5_get_principals (
	void*,
	const char*,
	char***,
	int*);

kadm5_ret_t
kadm5_get_privs (
	void*,
	uint32_t*);

kadm5_ret_t
kadm5_init_with_creds (
	const char*,
	krb5_ccache,
	const char*,
	kadm5_config_params*,
	unsigned long,
	unsigned long,
	void**);

kadm5_ret_t
kadm5_init_with_creds_ctx (
	krb5_context,
	const char*,
	krb5_ccache,
	const char*,
	kadm5_config_params*,
	unsigned long,
	unsigned long,
	void**);

kadm5_ret_t
kadm5_init_with_password (
	const char*,
	const char*,
	const char*,
	kadm5_config_params*,
	unsigned long,
	unsigned long,
	void**);

kadm5_ret_t
kadm5_init_with_password_ctx (
	krb5_context,
	const char*,
	const char*,
	const char*,
	kadm5_config_params*,
	unsigned long,
	unsigned long,
	void**);

kadm5_ret_t
kadm5_init_with_skey (
	const char*,
	const char*,
	const char*,
	kadm5_config_params*,
	unsigned long,
	unsigned long,
	void**);

kadm5_ret_t
kadm5_init_with_skey_ctx (
	krb5_context,
	const char*,
	const char*,
	const char*,
	kadm5_config_params*,
	unsigned long,
	unsigned long,
	void**);

kadm5_ret_t
kadm5_modify_principal (
	void*,
	kadm5_principal_ent_t,
	uint32_t);

kadm5_ret_t
kadm5_randkey_principal (
	void*,
	krb5_principal,
	krb5_keyblock**,
	int*);

kadm5_ret_t
kadm5_rename_principal (
	void*,
	krb5_principal,
	krb5_principal);

kadm5_ret_t
kadm5_ret_key_data (
	krb5_storage*,
	krb5_key_data*);

kadm5_ret_t
kadm5_ret_principal_ent (
	krb5_storage*,
	kadm5_principal_ent_t);

kadm5_ret_t
kadm5_ret_principal_ent_mask (
	krb5_storage*,
	kadm5_principal_ent_t,
	uint32_t*);

kadm5_ret_t
kadm5_ret_tl_data (
	krb5_storage*,
	krb5_tl_data*);

void
kadm5_setup_passwd_quality_check (
	krb5_context,
	const char*,
	const char*);

kadm5_ret_t
kadm5_store_key_data (
	krb5_storage*,
	krb5_key_data*);

kadm5_ret_t
kadm5_store_principal_ent (
	krb5_storage*,
	kadm5_principal_ent_t);

kadm5_ret_t
kadm5_store_principal_ent_mask (
	krb5_storage*,
	kadm5_principal_ent_t,
	uint32_t);

kadm5_ret_t
kadm5_store_tl_data (
	krb5_storage*,
	krb5_tl_data*);

#ifdef __cplusplus
}
#endif

#endif /* __kadm5_protos_h__ */
