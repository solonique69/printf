#include "main.h"
/*write() used here. See main.h for header*/


/**
 * ro_putchar - writes argument ro to stdout
 * @c: argument to be printed
 * Description: This fuction behaves like putchar
 * Return: returns 1 on success and -1 on error
 */

int ro_putchar(char ro)
{
	return (write(1, &ro, 1));
}
/*Coded by Ofentse Ramphele and Solomon Okomowho*/
