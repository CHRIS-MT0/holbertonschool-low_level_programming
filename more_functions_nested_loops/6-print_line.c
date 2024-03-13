#include "main.h"
#include <unistd.h>

/**
 *print_line - print _
 *@n: character to print
 */
void print_line(int n)
{
int a;
char u = '_';
if (n == 0)
{
write(STDOUT_FILENO, "\n", 1);
}
else
{
for (a = 0; a < n;  a++)
{
write(STDOUT_FILENO, &u, 1);
}
write(STDOUT_FILENO, "\n", 1);
}
}
