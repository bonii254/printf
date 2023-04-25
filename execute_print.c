#include "main.h"

/**
  * print_char - print character to standard output.
  * @arg_list: list of arguements.
  *
  * Return: number of characters printed.
  */
int print_char(va_list arg_list)
{
	char c = va_arg(arg_list, int);

	return (write(1, &c, 1));
}
/**
  * print_string - print string to standard output.
  * @arg_list: list of arguements.
  *
  * Return: number of characters printed.
  */
int print_string(va_list arg_list)
{
	int len = 0;
	char *str = va_arg(arg_list, char *);

	while (str[len] != '\0')
		len++;

	return (write(1, &str[0], len));
}
/**
  * print_percent - print % to standardout.
  * @arg_list: list of arguements.
  *
  * Return: number of characters printed.
  */
int print_percent(va_list arg_list)
{
	UNUSED(arg_list);
	return (write(1, "%%", 1));
}

/**
  * print_int - print digits to standard output.
  * @arg_list: list of arguements.
  *
  * Return: number of characters printed.
  */

int print_int(va_list args_list)
{
	int n = va_arg(args_list, int);
	char buf[32];
	int len = 0;
	int i = 0;
	int is_negative = 0;

	if (n == 0)
	{
		buf[len++] = '0';
	}
	if (n < 0)
	{
		n = -n;
		is_negative = 1;

	}
	while (n > 0)
	{
		buf[len++] = (n % 10) + '0';
		n /= 10;
	}
	if (is_negative)
		buf[len++] = '-';
	for (i = len - 1; i >= 0; i--)
	{
		write(1, &buf[i], 1);
	}
	return len;
}
