#include "main.h"
#include <math.h>

/**
 * _pow_recursion - raises x to the power of y
 * @x: Represents the base value
 * @y: Takes the power of x
 * return:Always o.
 */

	int _pow_recursion(int x, int y)
{
	
		if (y < 0)
			return (-1);
		return _pow_recursion(pow(x, y));
}
