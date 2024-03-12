#include "main.h"
#include <stdio.h>

/**
 *print_numbers - prints the numbers
 *@n: numero entero
 */
void print_numbers(void)
{
int n;
for (n = 0; n <= 9; n++)
{
putchar(n + '0');
}
putchar('\n');
}

