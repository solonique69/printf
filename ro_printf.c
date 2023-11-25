#include "main.h"

/**
 * _printf - A custom version of printf
 * @format: Argument stream
 *
 * Return:  Arguments to be printed
 */

int _printf(const char *format, ...)
{
	print_type argument[] = {
		{"c", ro_printchar},
		{"s", ro_printstr},
		{"%", ro_printpercent},
		{NULL, NULL}
	};
	va_list ap;
	int count = 0;

	va_start(ap, format);
	count = ro_handspec(format, argument, ap);
	va_end(ap);
	return (count);
}
