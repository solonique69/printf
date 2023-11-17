#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/* _printf function */
int _printf(const char *format, ...);

/* Msaidizi functions */
int handle_specifier(char specifier, va_list args);
int print_char(int ch);
int print_string(char *str);
int print_percent(void);

#endif /* MAIN_H */

