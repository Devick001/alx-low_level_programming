#include <stdio.h>
/**
 * main - Entry point
 *
 * Descrip1tion: printing lower case alphabets
 * Return: Zero(success)
 */
int main(void)
{
	char lower_case;

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++);
	{
		putchar(lower_case);
	}

	return (0);
}


