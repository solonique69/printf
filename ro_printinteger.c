#include "main.h"

/**
 * ro_prininteger - Prints an integer
 * @ap: Action pointer
 * Return: Number of digits
 */

int ro_printinteger(va_list ap)
{
	int i;
	int count = 0;
	int n = va_arg(ap, int);

	if (n < 0)
	{
		count += ro_putchar('-');
	}
	for (i = 1000000000; i > 0; i /= 10)
	{
		if (n / i)
		{
			if ((n / i) % 10 < 0)
				count += ro_putchar(-(n / i % 10) + '0');
			else
				count += ro_putchar((n / i % 10) + '0');
		}
		else if (n / i == 0 && i == 1)
		{
			count += ro_putchar(n / i % 10 + '0');
		}
	}
	return (count);
}
/* Coded by Oftense Ramphele and Solomon Okomowho */
