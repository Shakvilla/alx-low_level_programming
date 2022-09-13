#include "main.h"
/**
 * main - Prints _putchar string in stdout
 * 
 * Return: Success(0)
 */
int main(void)
{
	int str[] = {72, 111, 108, 98, 101, 114, 116, 111, 110};
	int count, size;

	size = sizeof(str) / sizeof(int);
	for (count = 0; count < size; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
