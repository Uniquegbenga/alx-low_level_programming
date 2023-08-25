#include <stdio.h>
/**
 * main - program that prints the alphabet in lowercase
 *
 * Return: Always 0.
 */

int main(void)
{
char let;
for (let = 'a'; let <= 'z'; let++)
{
if (let != 'e' && let != 'q')
putchar(let);
}
putchar('\n');
return (0);
}

