#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

#define UNUSED(x) (void)(x)

/**
  * p_opt - structure for switch function.
  * @str: switching case option.
  * @func: switching case function.
  */

typedef struct p_opt{
	char str;
	int (*func)(va_list);
}p_opt;

int output_opt(const char *format, int *index, va_list arg_list);
int _printf(const char *format, ...);

int print_char(va_list arg_list);
int print_string(va_list arg_list);
int print_percent(va_list arg_list);

#endif
