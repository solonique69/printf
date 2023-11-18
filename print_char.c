#include "main.h"

/**
 * print_char - Print a character to stdout
 * @ch: The character to print
 * Return: 1 (number of characters printed)
 */

int print_char(int ch)
{
	if (ch == '\0')
	{
		write(1, "\\0", 2);
		return (2); /*return length of "\\0"*/
	}
	write(1, &ch, 1);
	return (1);
}
