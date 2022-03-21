#include "main.h"

/**
 * _strlen - calculates the lenght of a string
 * @s: the string to calculate it's length.
 * Return: Legth of a string
 */

int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
			{
				lenght++;
			}
	return (length);
}

