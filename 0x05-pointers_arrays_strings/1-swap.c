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
	int a;
	int b;

	a = 98;
	b = 42;

	printf("a = %d, b = %d\n", a, b);
	swap_int(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	return (0);
}
