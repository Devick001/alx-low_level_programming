#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: Where counting begins from
 * Return: AlWAYS 0.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
		{
			printf("%d, ", n);
			printf("%d\n", 98);
		}

	
		for (n = n; n > 98; n--)
		{
			printf("%d, ", n);
			printf("%d\n", 98);
		}
	}
}
