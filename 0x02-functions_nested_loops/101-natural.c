#include <stdio.h>
/**
 * main - Prints natural numbers below 1024
 * and multitples of 3 or 5
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;
	for (a = 1; a < 1024; a++)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
		{
			b += a;
		}
	}
	printf("%d\n", b);
	return (0);
}
