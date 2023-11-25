#include "main.h"

/**
 * ro_printstr - uses ro_putchar to print strings
 * @ap: The string argument
 * Return: returns i
 */

int ro_printstr(va_list ap)
{
	int i;
	char *s;

	s = va_arg(ap, char *);

	if (!s)
	{
		s = "(null)";
	}

	for (i = 0; s[i]; i++)
	{
		ro_putchar(s[i]);
	}
	return (i);
}
/* Codeod by Ofentse Ramphele and Solomon Okomowho */
