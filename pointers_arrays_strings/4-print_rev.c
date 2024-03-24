#include "main.h"
#include <unistd.h>

/**
 */
void print_rev(char *s)
{
  int length = 0;
    while (s[length] != '\0')
      {
        length++;
    }
    for (int i = length - 1; i >= 0; i--)
      {
        write(STDOUT_FILENO, &s[i], sizeof(char));
    }
    write(STDOUT_FILENO, "\n", sizeof(char));
}
