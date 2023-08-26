#include <stdio.h>
/**
 * main - a program that prints the lowercase alphabet in reverse
 * Return: Always 0 (Success)
 */

int main(void)
{
	char let;

	for (let = 'z'; let >= 'a'; let--)
	{
	putchar(let);
	}
	putchar('\n');
	return (0);
}
