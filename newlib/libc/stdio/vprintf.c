/*
 * Copyright (c) 1990 The Regents of the University of California.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms are permitted
 * provided that the above copyright notice and this paragraph are
 * duplicated in all such forms and that any documentation,
 * and/or other materials related to such
 * distribution and use acknowledge that the software was developed
 * by the University of California, Berkeley.  The name of the
 * University may not be used to endorse or promote products derived
 * from this software without specific prior written permission.
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */
/* doc in vfprintf.c */

#define _DEFAULT_SOURCE
#include <stdio.h>
#include <stdarg.h>
#include "local.h"

int
vprintf (const char *fmt,
       va_list ap)
{
  _REENT_SMALL_CHECK_INIT (reent);
  return vfprintf ( _stdout_r (reent), fmt, ap);
}

#ifdef _NANO_FORMATTED_IO
int __nonnull((1))
viprintf (const char *, __VALIST) _ATTRIBUTE ((__alias__("vprintf")));
#endif
