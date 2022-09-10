#include <stdio.h>

/**
 * main - Prints the alphabets is lowercase chars
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{

	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int a;

	for (a = 0; a < 26; a++)
	{
		putchar(alphabet[a]);
	}
	putchar('\n');
	return (0);
}
