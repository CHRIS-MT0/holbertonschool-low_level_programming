#include "main.h"

/**
 *_isupper - function that verifies if a  character is uppercase or not
 * @c: character to verify
 *Return: if return is 1 the character is capital letter, otherwise is 0.
 */
int _isupper(int c)
{
if ((c >= 'a') && (c <= 'z'))
return (0);
return (1);
}
