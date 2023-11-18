#include "main.h"

/**
 * print_string - prints a string.
 * @str: input string
 * Return: Always NULL or len
 */

int print_string(char *str)
{
	int len;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);  /*Return the length of "(null)"*/
	}

	len = 0;

	while (str[len] != '\0')
	{
		write(1, &str[len], 1);
		len++;
	}

	return (len);
}
