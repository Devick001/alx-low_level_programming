#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Getting sizes of C data types in bytes
 * Return: zero always(success)
 */

int main(void)
{
	char c;
	int i;
	long d;
	long long l;
	float f;

printf("Size of a char: %d bytes\n", sizeof(c));
printf("Size of an int: %d bytes\n", sizeof(i));
printf("Size of a long int: %d bytes\n", sizeof(d));
printf("size of a long long int: %zu bytes\n", sizeof(l));
printf("Size of a float: %d bytes\n", sizeof(f));

return (0);
}

