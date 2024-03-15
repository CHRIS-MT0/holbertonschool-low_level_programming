#include "main.h"

/**
 *_isupper - function that verifies if a  character is uppercase or not
 * @c: character to verify
 *Return: if return is 1 the character is capital letter, otherwise is 0.
 */
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
{
return (0);
}
else
{
return (1);
}
}
