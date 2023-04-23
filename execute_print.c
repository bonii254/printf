#include "main.h"

/**
  * print_char - print character to standard output.
  * @arg_list: list of arguements.
  */
int print_char(va_list arg_list)
{
	char c = va_arg(arg_list, int);

	write(1, &c, 1);
	return (1);
}
/**
  * print_string - print string to standard output.
  * @arg_list: list of arguements.
  */
int print_string(va_list arg_list)
{
	int len = 0;
	char *str = va_arg(arg_list, char *);

	while (str[len] != '\0')
		len++;

	write(1, &str[0], len);
	return (len);
}
/**
  * print_percent - print % to standardout.
  * @arg_list: list of arguements.
  */
int print_percent(va_list arg_list)
{
	UNUSED(arg_list);
	write(1, "%%", 1);
	return (1);
}
