/*
 * dprintf.h
 */

#ifndef _DPRINTF_H
#define _DPRINTF_H

#ifdef DEBUG

#include <stdio.h>

int dprintf(const char *, ...);
int vdprintf(const char *, va_list);

#else

#define dprintf(fmt, ...)	((void)(0))
#define vdprintf(fmt, ap)	((void)(0))

#endif /* DEBUG */

#endif /* _DPRINTF_H */
