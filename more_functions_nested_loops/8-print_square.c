#include "main.h"
#include <unistd.h>

/**
 *print_square - print to square
 *@size: print to *
 */
void print_square(int size)
{
int a, b;
char c = '#';
if (size <= 0)
{
write(STDOUT_FILENO, "\n", 1);
}
else
{
for (a = 0; a < size; a++)
	{
	  for (b = 0; b < size; b++)
	    {
	      write(STDOUT_FILENO, &c, 1);
	    }
	  write(STDOUT_FILENO, "\n", 1);
	}
}
}
