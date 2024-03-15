 #include "main.h"
#include <unistd.h>

/**
 *print_triangle - print to triangle
 *@size: print * to the triangle
 */
void print_triangle(int size)
{
int a, j, k;
if (size <= 0)
{
write(STDOUT_FILENO, "\n", 1);
}
else
{
for (a = 1; a <= size; a++)
{
for (k = 1; k <= size - a; k++)
{
write(STDOUT_FILENO, " ", 1);
}
for (j = 1; j <= a; j++)
{
write(STDOUT_FILENO, "#", 1);
}
write(STDOUT_FILENO, "\n", 1);
}
}
}
