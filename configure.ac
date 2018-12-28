AC_INIT([christmas],[0.1.3],[cthompson10547@gmail.com])
AC_MSG_NOTICE([Initializing automake])
AM_INIT_AUTOMAKE
AC_MSG_NOTICE([Checking for C compiler])
AC_PROG_CC
AC_MSG_NOTICE([Checking for headers])
AC_CHECK_HEADERS(stdlib.h,[AC_MSG_NOTICE([stdlib.h found])],[AC_ERROR([A working stdlib.h is required])])
AC_CHECK_HEADERS(time.h,[AC_MSG_NOTICE([time.h found])],[AC_ERROR([A working time.h is required])])
AC_MSG_NOTICE([Checking for Makefile.in])
AC_CONFIG_FILES([Makefile])
AC_OUTPUT
