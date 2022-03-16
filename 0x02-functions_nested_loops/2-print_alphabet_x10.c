#include "main.h"
/**
 * print_alphabet_x10 - Prints lower case alphabets in 10x
 * main - Entry point
 *
 * Return: Always o.
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int alphaCount;
	
	alphaCount = 0;
	while (alphaCount < 10)
	{
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	alphaCount++;

	_putchar('\n');
	}

}
