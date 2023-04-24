#include "main.h"

 /**
   * _printf - a function that produces output according to a format.
   * @format: is a character string.
   *
   * Return: the number of characters printed
   * excluding the null byte used to end output to strings
   * Description: this function print passed arguement to standard output
   * stream and return the number of characters printed (excluding the null
   * byte used to end output to strings)
   */

int _printf(const char *format, ...)
{
	int index = 0, printed_len = 0, printed_len_func;

	va_list arg_list;

	if (!format)
		return (--printed_len);

	va_start(arg_list, format);
	while (format[index] != '\0')
	{
		if (format[index] != '%')
		{
			write(1, &format[index], 1);
			printed_len++;
		}
		else
		{
			++index;
			printed_len_func =  output_opt(format, &index, arg_list);
			if (printed_len_func < 0)
				return (printed_len_func);
			printed_len += printed_len_func;
		}

		index++;
	}
	return (printed_len);
}
