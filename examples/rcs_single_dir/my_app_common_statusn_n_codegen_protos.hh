/*
*	New C++ Header  File starts here.
*	This file should be named my_app_common_statusn_n_codegen_protos.hh
*	Automatically generated by NML CodeGen Java Applet.
*	with command line arguments :  HHFile=my_app_common_statusn.hh
*
*	.gen script :
*		0:load my_app_common_statusn.hh
*		1:clear
*		2:select_from_file my_app_common_statusn.hh
*		3:generate C++ protos>my_app_common_statusn_n_codegen_protos.hh
*		4:generate C++ format>my_app_common_statusn_n.cc
*		5:generate C++ update>my_app_common_statusn_n.cc
*		6:generate C++ constructor>my_app_common_statusn_n.cc
*		7:exit
*
*/

#ifndef my_app_common_statusn_n_codegen_protos_hh_included
#define my_app_common_statusn_n_codegen_protos_hh_included

// Include all NML, CMS, and RCS classes and functions
#include "rcs.hh"

// Include command and status message definitions
#include "my_app_common_statusn.hh"

// Forward Function Prototypes


 // Format function name set from common root of selected classes. (MY_APP_COMMON_STAT_MSG
 // You may want to add a function prototype to a header or an explicit set_format_function line to the CodeGen script to set this explicitly.

#ifndef MAX_MY_APP_COMMON_STAT_MSG_NAME_LENGTH
#define MAX_MY_APP_COMMON_STAT_MSG_NAME_LENGTH 1
#endif
#ifndef MY_APP_COMMON_STAT_MSG_NAME_LIST_LENGTH
#define MY_APP_COMMON_STAT_MSG_NAME_LIST_LENGTH 1
#endif


/* This list must be in alphabetical order and the three lists must correspond. */
extern const NMLTYPE MY_APP_COMMON_STAT_MSG_id_list[MY_APP_COMMON_STAT_MSG_NAME_LIST_LENGTH];
extern const size_t MY_APP_COMMON_STAT_MSG_size_list[MY_APP_COMMON_STAT_MSG_NAME_LIST_LENGTH];

// Enumerated Type Constants

extern int MY_APP_COMMON_STAT_MSG_format(NMLTYPE type, void *buffer, CMS *cms);

#endif
	/* # endif my_app_common_statusn_n_codegen_protos_hh_included */ 

