#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.71])
AC_INIT([Geometry], [0.0], [dg.briseno@gmail.com])
AM_INIT_AUTOMAKE([foreign -Wall])
AC_CONFIG_FILES([
  Makefile
  src/Makefile
])
AC_CONFIG_SRCDIR([src/main.cpp])
AC_CONFIG_HEADERS([config.h])

# Checks for programs.
AC_PROG_CXX

# Checks for libraries.
AC_CHECK_LIB([sdl2], [SDL_RenderDrawLine], [], [AC_MSG_ERROR([Need SDL2 to compile this program])])

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_OUTPUT
