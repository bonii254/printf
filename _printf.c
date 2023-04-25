#include "main.h"

 /**
   * _printf - a function that produces output according to a format.
   * @format: is a character string.
   *
   * Return: the number of characters printed
   * excluding the null byte used to end output to strings
   *
   * Description: this function print passed arguement to standard output
   * stream and return the number of characters printed (excluding the null
   * byte used to end output to strings)
   */

int _printf(const char *format, ...)
{
	int index = 0, printed_len = 0, printed_len_func, check = 0;

	va_list arg_list;

	if (!format)
		return (-1);

	va_start(arg_list, format);
	while (format[index] != '\0')
	{
		if (format[index] != '%')
		{
			check =  write(1, &format[index], 1);
			if (check == -1)
				return (-1);
			printed_len++;
		}
		else
		{
			++index;
			printed_len_func =  output_opt(format, &index, arg_list);
			if (printed_len_func == -1)
				return (printed_len_func);
			printed_len += printed_len_func;
		}

		index++;
	}
	return (printed_len);
}
