#ifndef MK1MF_BUILD
  /* auto-generated by Configure for crypto/cversion.c:
   * for Unix builds, crypto/Makefile.ssl generates functional definitions;
   * Windows builds (and other mk1mf builds) compile cversion.c with
   * -DMK1MF_BUILD and use definitions added to this file by util/mk1mf.pl. */
  #error "Windows builds (PLATFORM=VC-CE) use mk1mf.pl-created Makefiles"
#endif
#ifdef MK1MF_PLATFORM_VC_WIN32
  /* auto-generated/updated by util/mk1mf.pl for crypto/cversion.c */
  #define CFLAGS "cl  /MD /Ox /O2 /Ob2 /W3 /WX /Gs0 /GF /Gy /nologo -DOPENSSL_SYSNAME_WIN32 -DWIN32_LEAN_AND_MEAN -DL_ENDIAN -DDSO_WIN32 -D_CRT_SECURE_NO_DEPRECATE -D_CRT_NONSTDC_NO_DEPRECATE -DOPENSSL_USE_APPLINK -I. /Fdout32dll -DOPENSSL_NO_CAMELLIA -DOPENSSL_NO_SEED -DOPENSSL_NO_RC5 -DOPENSSL_NO_MDC2 -DOPENSSL_NO_TLSEXT -DOPENSSL_NO_CMS -DOPENSSL_NO_CAPIENG -DOPENSSL_NO_KRB5 -DOPENSSL_NO_DYNAMIC_ENGINE    "
  #define PLATFORM "VC-WIN32"
  #define DATE "Wed Apr 13 14:19:23 2016"
#endif
#ifdef MK1MF_PLATFORM_VC_CE
  /* auto-generated/updated by util/mk1mf.pl for crypto/cversion.c */
  #define CFLAGS "$(CC)  /O1i /W3 /WX /GF /Gy /nologo -DUNICODE -D_UNICODE -DOPENSSL_SYSNAME_WINCE -DWIN32_LEAN_AND_MEAN -DL_ENDIAN -DDSO_WIN32 -DNO_CHMOD -I$(WCECOMPAT)/include -DOPENSSL_SMALL_FOOTPRINT -D_WIN32_WCE=600 -DUNDER_CE=600 -DWCE_PLATFORM_VC-CE -DARM -D_ARM_ -DARMV4I /Fdout32dll_$(TARGETCPU) -DOPENSSL_NO_CAMELLIA -DOPENSSL_NO_SEED -DOPENSSL_NO_RC5 -DOPENSSL_NO_MDC2 -DOPENSSL_NO_TLSEXT -DOPENSSL_NO_CMS -DOPENSSL_NO_CAPIENG -DOPENSSL_NO_KRB5 -DOPENSSL_NO_DYNAMIC_ENGINE    "
  #define PLATFORM "VC-CE"
  #define DATE "Wed Apr 13 14:19:23 2016"
#endif
