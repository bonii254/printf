#include "main.h"
/**
  * output_opt - check the datatype output option.
  * @format: string input.
  * @index: format index to determine output.
  * @arg_list: list of argument to be printed.
  *
  * Return: number of characters printed.
  */
int output_opt(const char *format, int *index, va_list arg_list)
{
	int i = 0;

	p_opt opt[] = {
		{'c', print_char}, {'s', print_string}, {'%', print_percent},
		{'i', print_int}, {'d', print_int}, {'b', print_binary},
		/*{'u', print_unsigned}, {'o', print_octal}, {'x', print_hexadecimal},
		{'X', print_hexa_upper},*/ {'-', print_flag}, {'+', print_flag},
		{'*', print_flag}, {'0', print_flag}, {'#', print_flag}, {'\0', NULL}
	};

	while (opt[i].str != '\0')
	{
		if (format[*index] == opt[i].str)
			return (opt[i].func(arg_list));
	i++;
	}

	if (opt[i].str == '\0')
		return (-1);
	return (-1);
}

/**
  * print_flag - check if flag is passed
  * @arg_list: arguement list.
  *
  * Return: 0. 
  * Description: return 0 to ignore use of flag
  */

int print_flag(va_list arg_list)
{
	UNUSED(arg_list);
	return (0);
}
