#include "main.h"
#include <unistd.h>

/**
 *print_diagonal - print \
 */
void print_diagonal(int n)
{
int a, b;
char d = '\\';
if (n <= 0)
{
write(STDOUT_FILENO, "\n", 1);
}
else
{
for (a = 0; a < n; a++)
{
for (b = 0; b < a; b++)
{
write(STDOUT_FILENO, " ", 1);
}
write(STDOUT_FILENO, &d, 1);
write(STDOUT_FILENO, "\n", 1);
}
}
}
