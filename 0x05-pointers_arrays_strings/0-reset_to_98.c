#include "main.h"

/**
 * reset_to_98(int *n) - Takes a pointer to an int as parameter
 *
 * Description: Accepts pointer to an int and updates its value to 98.
 * Return: Zero always
 */

void reset_to_98(int *n)
{
	int n;
	n = 402;

	print("n = %d/n", n);
	reset_to_98(&n);
	printf("n = %d\n, n);
	return (0);
}

