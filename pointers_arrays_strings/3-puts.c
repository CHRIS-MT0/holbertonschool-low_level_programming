#include "main.h"
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
write(STDOUT_FILENO, "\n", sizeof(char));
}
