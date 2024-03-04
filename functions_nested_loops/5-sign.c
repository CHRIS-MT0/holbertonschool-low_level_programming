#include "main.h"

/**
 * print_sign - funcion main
 * @n: character to compare
 * Return: if 1 is positive, if 0 is zero, -0 is negative
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar ('+');
return (1);
}
if (n == 0)
{
_putchar ('0');
return (0);
}
_putchar ('-');
return (-1);
}
