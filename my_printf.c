#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - Custom printf function
 * @format: Format string containing conversion specifiers
 *
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
    va_list args;
    int count = 0;

    va_start(args, format);

    while (*format != '\0')
    {
        if (*format == '%' && (*(format + 1) == 'c' || *(format + 1) == 's' || *(format + 1) == '%'))
        {
            // Handle conversion specifiers 'c', 's', and '%'
            count += handle_specifier(*(format + 1), args);
            format += 2; // Move to the next format specifier
        }
        else
        {
            // Regular character, write to stdout
            write(1, format, 1);
            count++;
            format++;
        }
    }

    va_end(args);

    return count;
}

/**
 * handle_specifier - Handle conversion specifiers 'c', 's', and '%'
 * @specifier: The conversion specifier to handle
 * @args: Variable arguments list
 *
 * Return: Number of characters printed for the specifier
 */
int handle_specifier(char specifier, va_list args)
{
    switch (specifier)
    {
    case 'c':
        return print_char(va_arg(args, int));
    case 's':
        return print_string(va_arg(args, char *));
    case '%':
        return print_percent();
    default:
        // Unknown specifier, print it as is
        write(1, "%", 1);
        return 1;
    }
}

/**
 * print_char - Print a character to stdout
 * @ch: The character to print
 *
 * Return: 1 (number of characters printed)
 */
int print_char(int ch)
{
    write(1, &ch, 1);
    return 1;
}

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

    return len;
}

/**
 * print_percent - Print a '%' character to stdout
 *
 * Return: 1 (number of characters printed)
 */
int print_percent(void)
{
    write(1, "%", 1);
    return 1;
}
