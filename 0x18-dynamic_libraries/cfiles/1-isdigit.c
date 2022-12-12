#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: Character used to determine if it is a digit
 * Return: Returns 1 if the character is a letter 0 is a digit
 */

int _isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
