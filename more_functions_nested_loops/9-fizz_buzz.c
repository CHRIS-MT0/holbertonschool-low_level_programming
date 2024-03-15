#include <stdio.h>

/**
 *main - function of the FizzBuzz program
 *The program print the numbers from 1 to 100
 *If the numbers is multiple of three, it print "Fizz"
 *If the numbers is multiple of five, it print "Buzz"
 *If the numbers is multiple of both, it print "FizzBuzz"
 *@return - return 0 if is true
 */
int main(void)
{
int n;
for (n = 1; n <= 100; n++)
{
if (n % 3 == 0 && n % 5 == 0)
{
printf("FizzBuzz ");
}
else if (n % 3 == 0)
{
printf("Fizz ");
}
else if (n % 5 == 0)
{
printf("Buzz ");
if (n != 0)
{
printf(" ");
}
}
else
{
printf("%d ", n);
}
}
printf("\n");
return (0);
}
