#include "main.h"
/**
 * main - Prints _putchar string in stdout
 *
 * Return: Success(0)
 */
int main(void)
{


	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};

	int count, size;

	size = sizeof(str) / sizeof(int);

	for (count = 0; count < size; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
