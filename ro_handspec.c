#include "main.h"
/*Other headers were used see main.h file*/

/**
 * ro_print - Handles specifier
 * @format: argument stream
 * @argument: Specifiers being checked
 * @ap: Action pointer
 * Return:  number of arguments printed
 */

int ro_print(const char *format, print_type argument[], va_list ap)
{
	int r, o;
	int count = 0;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	for (r = 0; format && format[r]; r++)
	{
		if (format[r] != '%')
		{
			count += ro_putchar(format[r]);
			continue;
		}
		for (o = 0; argument[o].parameter; o++)
		{
			if (*argument[o].parameter == format[r + 1])
			{
				count += argument[o].f(ap);
				break;
			}
		}
		r++;
		if (!argument[o].parameter)
		{
			count += ro_putchar('%');
			count += ro_putchar(format[r]);
		}
	}
	return (count);
}
/* Coded by Ofentse Ramphele and Solomon Okomowho*/
