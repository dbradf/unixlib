/*
 * putc.c
 *
 * Licensed under GNU GPL v3
 * Contributors:
 * - Garuda1
 *
 */

/*
 * This function prints an ASCII encoded character to the standard output
 *
 */

#include <unistd.h>

int putc(const char c)
{
  return (write(STDOUT_FD, &c, sizeof(c)));
}