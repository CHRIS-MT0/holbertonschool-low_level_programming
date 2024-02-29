#include "main.h"

/**
 * print_alphabet_x10 - "imprmir 10 veces el abecedario"
 */
void print_alphabet_x10(void)
{
char x;
char n;

for (x = '0'; x <= '9'; x++)
{
for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
_putchar('\n');
}
}
