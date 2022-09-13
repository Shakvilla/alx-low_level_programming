#include "main.h"
#include <stdio.h>
/**
 * _abs - value absolute
 *
 * @a: The int to print
 *
 * Return: Always 0.
 */

int _abs(int a)
{
	if (a < 0)
	{
		return (a * (-1));
	}
	else if (a == 0)
	{
		return (0);
	}
	else
	{
		return (a);
	}
}
