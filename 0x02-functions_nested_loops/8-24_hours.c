#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int a;
	int c;

	for (a = 0; a <= 23; a++)
	{
		for (c = 0; c <= 59; c++)
		{
			_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			_putchar(':');
			_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
			_putchar('\n');
		}

	}
}
