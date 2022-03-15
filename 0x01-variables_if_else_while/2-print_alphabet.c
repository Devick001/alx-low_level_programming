#include <stdio.h>
/**
 * main - Entry point
 *
 * Descrip1tion: printing lower case alphabets
 * Return: Zero(success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++);
	{
	putchar(alphabet);
	}
	putchar('\');
	return (0);

}
