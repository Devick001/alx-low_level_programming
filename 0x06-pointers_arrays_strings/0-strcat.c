#include "main.h"

/**
 * *_strcat - Concantinates two strings
 * @*dest: Takes one of the strigs
 * @*src: Takes the second string.
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	strcat(*dest, *src);

	return (0);
}
