#include "main.h"

/**
 * reset_to_98 - Takes a pointer to an int as a parameter
 * @n: An intiger pointer
 *
 *Return: 0 Always.
 */

void reset_to_98(int *n)
{
	int num;
	num = 402;

	n = &num;

	*n = 98;
}
