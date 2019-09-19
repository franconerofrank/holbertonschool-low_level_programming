#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to the variable n each time it is executed
 * The string Last digit of n
 * Return: 0
 */

int main(void)
{
int n;
int x;

srand(time(0));
n = rand() - RAND_MAX / 2;
x = n;
n %= 10;
if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", x, n);
}
else if (n < 6 && n != 0)
{
printf("Last digit of %d is %d and less than 6 and not 0\n", x, n);
}
else
{
printf("Last digit of %d is %d and is 0\n", x, n);
}
return (0);
}
