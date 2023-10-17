#include "main.h"
/**
 * _printf - function that prints %c %s %
 * @format: pointer
 * Return: number of chara printed
 */
int _printf(const char *format, ...)
{
    int chara_printed = 0;
    va_list args;

    if (format == NULL)
        return (-1);
    va_start(args, format);
    while (*format)
    {
        if (*format == '%')
        format++;
        if (*format == '%')
        {write(1, format, 1);
        chara_printed++; }
        else if (*format == 'c')
        {char c = va_arg(args, int);
        write(1, &c, 1);
        chara_printed++; }
        else if (*format == 's')
        {char *s = va_arg(args, char*);
        int _strlen = 0;

        while (s[_strlen] != '\0')
            _strlen++;
        write(1, s, _strlen);
        chara_printed += _strlen;
        }
        else
        {write(1, format, strlen(*format));
            chara_printed++; }
       format++; }  
    va_end(args);
    return (chara_printed);}