#include "main.h"
/**
 * _isupper - Checks for uppercase characters
 * @c: Takes input
 *
 * Return: 0 Always.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
