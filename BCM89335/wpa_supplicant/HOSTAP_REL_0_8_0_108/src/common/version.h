#ifndef VERSION_H
#define VERSION_H

#ifndef VERSION_STR_POSTFIX
#define VERSION_STR_POSTFIX ""
#endif /* VERSION_STR_POSTFIX */

#ifdef ANDROID_P2P
#define BRCM_MAJOR_VER		"108"
#define BRCM_MINOR_VER		""
#define BRCM_VER_INFO		" BRCM_VER:"BRCM_MAJOR_VER BRCM_MINOR_VER
#endif

#ifdef BRCM_DEBUG
#define OPENSRC_GIT_HASH	"2cebdee66de6a1c6befe327c2348610478e06032"
#define OPENSRC_SYNC_DATE	"(29/04/2014)"
#define BRCM_STR_POSTFIX BRCM_VER_INFO" GITHASH:"OPENSRC_GIT_HASH " "OPENSRC_SYNC_DATE" \nCompiled in" \
		SUP_SRC_BASE " on " __DATE__ " at " __TIME__ "\n"
#else
#define BRCM_STR_POSTFIX BRCM_VER_INFO
#endif

#ifdef ANDROID_P2P
#define VERSION_STR "2.1-devel" VERSION_STR_POSTFIX  BRCM_STR_POSTFIX
#else
#define VERSION_STR "2.1-devel" VERSION_STR_POSTFIX
#endif

#endif /* VERSION_H */