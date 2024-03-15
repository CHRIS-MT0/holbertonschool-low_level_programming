#include "main.h"
#include <unistd.h>

/**
 */
void print_triangle(int size)
{
  int a, j, k;
  for (a = 1; a <= size; a++)
    {
      for (k = 1; k <= size -a; k++)
	{
	  write(STDOUT_FILENO, " ", 1);
	}
      for (j = 1; j <= a; j++)
	{
	  write(STDOUT_FILENO, "*", 1);
	}
      write(STDOUT_FILENO, "\n", 1);
    }
}
