#include "main.h"

/**
 *swap_int - let's exchange the values
 *@a: a is changed with c
 *@b: b is changed with a
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
