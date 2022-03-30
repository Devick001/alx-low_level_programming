#include "main.h"
#include <math.h>

/**
 * factorial - Finds the factorial of a given number
 * @n: The nuber whose factorial is to be determined
 *
 * return: Factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);

	return n * factorial(n - 1);
	}
	return (0);
}
