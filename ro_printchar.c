#include "main.h"

/**
 * ro_printchar - writes the argument to stdout
 * @ap: Argument to print
 * Return: returns 1 on successful completion
 */

int ro_printchar(va_list ap)
{
	ro_putchar(va_arg(ap, int));
	return (1);
}
/* Codeod by Ofentse Ramphele and Solomon Okomowho */
