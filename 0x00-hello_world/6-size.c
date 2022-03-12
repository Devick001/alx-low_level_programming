#include <stdio.h>
/**
*main: Entry point
*Getting sizes of bytes
*
*Description: Displays sizes of data types in bytes
*return: Always return(0);
*/
int main(void)

{
	char c;
	int d;
	long n;
	double i;
	long long a;
	float f;
  
printf("The size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("The size of an int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("The size of a long int: %lu byte(s)\n", (unsigned long)sizeof(n));
printf("The size of a double: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("The size of a long long int: %lu byte(s)\n", sizeof(a));
printf("The size of a float is: %lu byte(s)\n", (unsigned long)sizeof(f));
 
return(0);
}
