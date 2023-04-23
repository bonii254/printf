#include "main.h"

 /**
   * _printf - a function that produces output according to a format.
   * @format: is a character string.
   *
   * Return: the number of characters printed
   * (excluding the null byte used to end output to strings)
   *
   */
int _printf(const char *format, ...)
{
	int index = 0, printed_len = 0;
	/* char buffer[BUFF_SIZE]; */

	va_list arg_list;

	if (format == NULL)
		return (printed_len);

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
			printed_len += output_opt(format, &index, arg_list);
		}

		index++;
	}
	return (printed_len);
}
