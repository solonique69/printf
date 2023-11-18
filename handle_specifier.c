#include "main.h"

/**
 * handle_specifier - Handle conversion specifiers 'c',     's', and '%'
 * @specifier: The conversion specifier to handle
 * @args: Variable arguments list
 * Return: Number of characters printed for the specifie    r
 */

int handle_specifier(char specifier, va_list args)
{
	switch (specifier)
	{
		case 'c':
			return (print_char(va_arg(args, int)));
		case 's':
			return (print_string(va_arg(args, char *)));
		case '%':
			return (print_percent());
		default:
			/* Unknown specifier, print it as is*/
			write(1, &specifier, 1);
			return (1);
	}
}
