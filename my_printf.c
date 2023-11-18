#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string containing conversion specifier
 * Return: Number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	if (format == NULL)
	{
		write(1, "(null)", 6);
		return (6); /* Return the length of "(null)"*/
	}

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%' && (*(format + 1) == 'c' ||
					*(format + 1) == 's' || *(format + 1) == '%'))
		{
			switch (*(format + 1))
			{
				case 'c':
					count += print_char(va_arg(args, int));
					break;
				case 's':
					count += print_string(va_arg(args, char *));
					break;
				case '%':
					count += print_percent();
					break;
			}

			format += 2; /*Move to the next format specifier*/
		}

		else
		{
			write(1, format, 1);
			count++;
			format++;
		}
	}

	va_end(args);

	return (count);
}
