#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string containing conversion specifiers
 *
 * Return: Number of characters printed (excluding null byte)
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	if (format == NULL)
	{
		return (-1); /*handles NULL format string*/
	}

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%' && *(format + 1) == '\0')
		{
			/*handles when '%' is the only argument*/
			va_end(args);
			return (0);
		}
		if (*format == '%' && (*(format + 1) == 'c' ||
			*(format + 1) == 's' || *(format + 1) == '%' || *(format + 1) == ' '))
		{
			/* Handle conversion specifiers 'c', 's', and '%'*/
			count += handle_specifier(*(format + 1), args);
			format += 2; /* Move to the next format specifier*/
		}
		else
		{
			/* Regular character, write to stdout*/
			write(1, format, 1);
			count++;
			format++;
		}
	}

	va_end(args);
	return (count);
}
