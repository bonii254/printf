#include "main.h"

 /**
   * _printf - a function that produces output according to a format.
   * @format: is a character string.
   *
   * Return: the number of characters printed
   * (excluding the null byte used to end output to strings)
   */
int _printf(const char *format, ...)
{
	int index = 0;
	int sum = 0;

	va_list arg_list;

	if (format == NULL)
		return (sum);

	va_start(arg_list, format);
	while (format[index] != '\0')
	{
		if (format[index] != '%')
		{
			_putchar(format[index]);
		}
		else
		{
			++index;
			sum += print_opt(format, &index, arg_list);
		}
		index++;
		}
		va_end(arg_list);
		return (sum);
}
