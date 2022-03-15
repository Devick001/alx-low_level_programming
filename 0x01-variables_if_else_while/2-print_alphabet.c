#include <stdio.h>
/**
 * main - Entry point
 *
 * Descrip1tion: printing lower case alphabets
 * Return: Zero(success)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
	putchar(alphabet);
	alphabet++;
	}
	putchar('\n');
	return (0);
}
