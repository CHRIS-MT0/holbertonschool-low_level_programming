#include "main.h"
#include <unistd.h>

/**
 */
void imprimir_rev(char *s)
{
  while (*s != '\0')
    {
      s++;
    }
  while (s-- != NULL)
    {
      write(STDOUT_FILENO, s, sizeof(char));
    }
  write(STDOUT_FILENO, "\n", sizeof(char));
}
