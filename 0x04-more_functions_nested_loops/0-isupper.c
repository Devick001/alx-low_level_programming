#include "main.h"
#include <stdio.h>

/**
 *_isupper - Prints uppercase alphabets
 *
 * Description: Getting uppecase letters
 * Return: Always 0.
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
