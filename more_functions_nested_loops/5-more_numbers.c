#include "main.h"
#include <unistd.h>

/**
 */
void more_numbers(void)
{
  int n;
  for (n = 0; n <= 14; n++)
    {
      char num = n + '0';
      write(STDOUT_FILENO, &num, 1);
    }
  write(STDOUT_FILENO, "\n", 1);
}
