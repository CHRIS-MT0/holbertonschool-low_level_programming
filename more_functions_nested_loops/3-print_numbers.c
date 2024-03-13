#include "main.h"
#include <unistd.h>

/**
 *print_numbers - numbers from 0 to 9
 */
void print_numbers(void)
{
int n;
char d;
for (n = 0; n < 10; n++)
{
d = n + '0';
write(STDOUT_FILENO, &d, 1);
}
write(STDOUT_FILENO, "\n", 1);
}
