#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([sample], [0.0.1], [koo05131@yahoo.co.kr])
AC_CONFIG_HEADERS([config.hpp])
AM_INIT_AUTOMAKE([foreign])

# Checks for programs.
AC_PROG_CXX

# Checks for libraries.
libdir=""
AC_ARG_WITH(libmemcached, libmemcached-path,[libdir=$withval],)

EXTRA_LDFLAGS="-Wl,-rpath,'$libdir/lib' -L$libdir/lib $LDFLAGS"
EXTRA_CXXFLAGS="-I$libdir/include $CFLAGS"

AC_SUBST(EXTRA_LDFLAGS)
AC_SUBST(EXTRA_CXXFLAGS)
# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_CONFIG_FILES([Makefile])
AC_OUTPUT
