#include "main.h"

/**
 * ro_printpercent - handles % format specifier
 * @ap; argument pointer
 * Return: returns 1 if successful
 */

int ro_printpercent(va_list ap _attribute_((unused)))
{
	ro_putchar('%');
	return (1);
}
/* Codeod by Ofentse Ramphele and Solomon Okomowho */
