#include <stdio.h>
/**
 * main - Prints all single digits of base 10
 *
 * Return: Return 0 if successful
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
