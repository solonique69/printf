#ifndef MAIN_H
#define MAIN_H

/* Header files used */
#include <stdarg.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct print - print
 * @parameter: Operator
 * @f: The generated function
 */

typedef struct print
{
	char *parameter;
	int (*f)(va_list ap);
} print_type;

/* _printf function */
int _printf(const char *format, ...);

/* function that handles specifiers */
int ro_print(const char *format, print_type argument[], va_list ap);

/* Msaidizi functions */
int ro_putchar(char ro);
int ro_printchar(va_list ap);
int ro_printstr(va_list ap);
int ro_printpercent(va_list ap);

#endif /* MAIN_H */
