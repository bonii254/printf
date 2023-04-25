#include "main.h"
/**
  * print_hexa_upper - print hexadecimal in uppercase.
  * @arg_list: arguement list.
  *
  * Return: number of characters printed.
  */

int print_hexa_upper(va_list arg_list)
{
	unsigned int n = va_arg(arg_list, unsigned int);
	int i = 0, len = 0;
	char buf[32];
	int check = 0;
	const char HEX_DIGITS[] = "0123456789ABCDEF";

	do {
		buf[len++] = HEX_DIGITS[n % 16];
		n /= 16;
	} while (n != 0);

	for (i = len - 1; i >= 0; i--)
	{
		check = write(STDOUT_FILENO, &buf[i], 1);
		if (check == -1)
			return (-1);
	}
	return (len);
}

/**
  * print_hexa_lower - print hexadecimal in lowercase.
  * @arg_list: arguement list.
  *
  * Return: number of characters printed.
  */

int print_hexa_lower(va_list arg_list)
{
	unsigned int n = va_arg(arg_list, unsigned int);
	int i = 0, len = 0;
	char buf[32];
	int check = 0;
	const char HEX_DIGITS[] = "0123456789abcdef";

	do {
		buf[len++] = HEX_DIGITS[n % 16];
		n /= 16;
	} while (n != 0);

	for (i = len - 1; i >= 0; i--)
	{
		check = write(STDOUT_FILENO, &buf[i], 1);
		if (check == -1)
			return (-1);
	}
	return (len);
}

/**
  * print_octal - print octal to standard output.
  * @arg_list: arguement list.
  *
  * Return: number of characters printed.
  */

int print_octal(va_list arg_list)
{
	unsigned int n = va_arg(arg_list, unsigned int);
	int i = 0, len = 0;
	char buf[32];
	int check = 0;
	const char octal_digit[] = "01234567";

	do {
		buf[len++] = octal_digit[n % 8];
		n /= 8;
	} while (n != 0);
	for (i = len - 1; i >= 0; i--)
	{
		check = write(STDOUT_FILENO, &buf[i], 1);
		if (check == -1)
			return (-1);
	}
	return (len);
}
/**
  * print_unsigned - print unsigned int to std out.
  * @arg_list: arguement list.
  *
  * Return: number of characters printed.
  */

int print_unsigned(va_list arg_list)
{
	unsigned int n = va_arg(arg_list, unsigned int);
	int i = 0, len = 0;
	char buf[32];
	int check = 0;
	const char unsigned_digit[] = "0123456789";

	do {
		buf[len++] = unsigned_digit[n % 10];
		n /= 10;
	} while (n != 0);
	for (i = len - 1; i >= 0; i--)
	{
		check = write(STDOUT_FILENO, &buf[i], 1);
		if (check == -1)
			return (-1);
	}
	return (len);
}
