#include "main.h"
#include <unistd.h>

/**
 *print_most_numbers - numbers from 0 to 9, except 2 and 4
 */
void print_most_numbers(void)
{
int n;
char d;
for (n = 0; n < 10; n++)
{
if (n != 2 && n != 4)
{
d = n + '0';
write(STDOUT_FILENO, &d, 1);
}
}
write(STDOUT_FILENO, "\n", 1);
}
