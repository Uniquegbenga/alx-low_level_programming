#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - this is a function of this task
* Return: Always 0
*/
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int g;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	g = n % 10;
	if (g > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, g);
	}
	else if (g < 6 && g != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, g);
	}
	else
	{
	printf("Last digit of %d is %d and is 0\n", n, g);
	}
	return (0);
}
