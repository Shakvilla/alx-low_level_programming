#include "main.h"
/**
 * _isupper - Checks if character is uppercase
 *
 * @c: character entered
 *
 * Return: return 1 if c isupper
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
