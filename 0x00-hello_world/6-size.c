#include <stdio.h>
/**
*main - Entry point
*main: Getting sizes of bytes
*
*Description: Displays sizes of data types in bytes
*Return: Always return zero
*/
int main(void)
{
	char c;
	int d;
	long n;
	double i;
	long long a;
	float f;
       
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(n));
printf("Size of a long long int: %lu byte(s)\n", sizeof(a));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
 
return (0);
}
