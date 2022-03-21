#include "main.h"

/**
 * swap_int - Swaps two intigers
 * @a: Takes first intiger
 * @b: Takes second intiger
 *
 * Return: Always o.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = 0;
	c = *a;
	*a = *b;
	*b = c;

}
