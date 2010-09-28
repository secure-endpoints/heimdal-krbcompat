/* Generated from C:\src\heimdal\lib\kadm5\..\..\lib\kadm5\kadm5_err.et */
/* $Id$ */

#ifndef __kadm5_err_h__
#define __kadm5_err_h__

struct et_list;

void initialize_kadm5_error_table_r(struct et_list **);

void initialize_kadm5_error_table(void);
#define init_kadm5_err_tbl initialize_kadm5_error_table

typedef enum kadm5_error_number{
	KADM5_FAILURE = 43787520,
	KADM5_AUTH_GET = 43787521,
	KADM5_AUTH_ADD = 43787522,
	KADM5_AUTH_MODIFY = 43787523,
	KADM5_AUTH_DELETE = 43787524,
	KADM5_AUTH_INSUFFICIENT = 43787525,
	KADM5_BAD_DB = 43787526,
	KADM5_DUP = 43787527,
	KADM5_RPC_ERROR = 43787528,
	KADM5_NO_SRV = 43787529,
	KADM5_BAD_HIST_KEY = 43787530,
	KADM5_NOT_INIT = 43787531,
	KADM5_UNK_PRINC = 43787532,
	KADM5_UNK_POLICY = 43787533,
	KADM5_BAD_MASK = 43787534,
	KADM5_BAD_CLASS = 43787535,
	KADM5_BAD_LENGTH = 43787536,
	KADM5_BAD_POLICY = 43787537,
	KADM5_BAD_PRINCIPAL = 43787538,
	KADM5_BAD_AUX_ATTR = 43787539,
	KADM5_BAD_HISTORY = 43787540,
	KADM5_BAD_MIN_PASS_LIFE = 43787541,
	KADM5_PASS_Q_TOOSHORT = 43787542,
	KADM5_PASS_Q_CLASS = 43787543,
	KADM5_PASS_Q_DICT = 43787544,
	KADM5_PASS_REUSE = 43787545,
	KADM5_PASS_TOOSOON = 43787546,
	KADM5_POLICY_REF = 43787547,
	KADM5_INIT = 43787548,
	KADM5_BAD_PASSWORD = 43787549,
	KADM5_PROTECT_PRINCIPAL = 43787550,
	KADM5_BAD_SERVER_HANDLE = 43787551,
	KADM5_BAD_STRUCT_VERSION = 43787552,
	KADM5_OLD_STRUCT_VERSION = 43787553,
	KADM5_NEW_STRUCT_VERSION = 43787554,
	KADM5_BAD_API_VERSION = 43787555,
	KADM5_OLD_LIB_API_VERSION = 43787556,
	KADM5_OLD_SERVER_API_VERSION = 43787557,
	KADM5_NEW_LIB_API_VERSION = 43787558,
	KADM5_NEW_SERVER_API_VERSION = 43787559,
	KADM5_SECURE_PRINC_MISSING = 43787560,
	KADM5_NO_RENAME_SALT = 43787561,
	KADM5_BAD_CLIENT_PARAMS = 43787562,
	KADM5_BAD_SERVER_PARAMS = 43787563,
	KADM5_AUTH_LIST = 43787564,
	KADM5_AUTH_CHANGEPW = 43787565,
	KADM5_BAD_TL_TYPE = 43787566,
	KADM5_MISSING_CONF_PARAMS = 43787567,
	KADM5_BAD_SERVER_NAME = 43787568
} kadm5_error_number;

#define ERROR_TABLE_BASE_kadm5 43787520

#define COM_ERR_BINDDOMAIN_kadm5 "heim_com_err43787520"

#endif /* __kadm5_err_h__ */
