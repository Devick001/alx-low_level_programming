#include "main.h"
#include <math.h>

/**
 * factorial - Finds the factorial of a given number
 * @n: The nuber whose factorial is to be determined
 *
 * Description: returns -1 if n < 0.
 * return: -1 if n < 0, n * factorial(n - 1) otherwise.
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
