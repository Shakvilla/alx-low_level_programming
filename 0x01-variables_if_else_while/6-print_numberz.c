#include <stdio.h>
/**
 * main - Prints all single digits of base 10
 *
 * Return: Return 0 if successful
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
