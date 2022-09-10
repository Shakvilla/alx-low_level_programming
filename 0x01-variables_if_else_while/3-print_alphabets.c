#include <stdio.h>
/**
 * main - Prints alphabets in lowercase and uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	char alphabets[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (a = 0; a < 52; a++)
	{
		putchar(alphabets[a]);
	}
	putchar('\n');
	return (0);
}
