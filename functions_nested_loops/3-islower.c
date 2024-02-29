#include "main.h"

/**
 * _islower - funcion main
 * return -  es verdadero o falso
 * @c: caracter a comparar
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return(1);
}
return(0);
}
