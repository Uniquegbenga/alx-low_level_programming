#include <stdio.h>
#include <unistd.h>
/**
 * main - a program to print all single digit no
 *Description: print char below 10
 * Return: Always 0 (success)
 */

int main(void)
{
int k;
for (k = 0; k < 10; k++)

{
putchar(k + '0');
}
putchar('\n');
return (0);
}
