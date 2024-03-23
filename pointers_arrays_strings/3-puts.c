#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 */
void _puts(char *str)
{
while (*str != '\0')
{
write(STDOUT_FILENO, str, sizeof(char));
str++;
}
putchar ('\n');
}
