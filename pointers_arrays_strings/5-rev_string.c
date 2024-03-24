#include "main.h"
#include <string.h>
#include <unistd.h>

/**
 */
void rev_string(char *s)
{
  int length = 0;
  while(s[length] != '\0')
    {
      length++;
    }
    int i, j;
    char temp;
    for (i = 0, j = length - 1; i < j; i++, j--)
      {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    write(STDOUT_FILENO, s, length);
}
