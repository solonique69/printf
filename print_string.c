#include "main.h"

/**
 * print_string - Print a string to stdout
 * @str: The string to print
 *
 * Return: Number of characters printed
 */

int print_string(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		write(1, &str[len], 1);
		len++;
	}

	return (len);
}
