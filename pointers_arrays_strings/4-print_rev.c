#include "main.h"
#include <unistd.h>
#include <string.h>

/**
 */
void imprimir_rev(char *s)
{
int length = strlen(s);
for (int i = length - 1; i >= 0; i--)
{
write(STDOUT_FILENO, &s[i], 1);
}
write(STDOUT_FILENO, "\n", 1);
}
