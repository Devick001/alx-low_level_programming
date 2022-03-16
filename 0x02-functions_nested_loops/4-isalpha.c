#include "main.h"
/**
 * _isalpha - Returns 1 if c is a letter, 0 otherwise.
 * @c: contains the value to be compared
 *
 * Return: Always 0
 */

int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
