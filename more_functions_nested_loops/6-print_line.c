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
char b = '\n';
if (n == 0)
{
write(1, &b, 1);
}
for (a = 0; a < n;  a++)
write(1, &u, 1);
{
write(1, &b, 1);
}
}
