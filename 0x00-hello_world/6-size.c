#include <stdio.h>
/**
 *main: Entry point
 *
 *Description: Displays sizes of data types in bytes
 *
 *return: 0
*/
int main(void)
{
	char c;
	int d;
	double i;
	float f;

        printf ("The size of char is: %lu.\n", (unsigned long)sizeof(c));
	printf ("The size of an int is: %lu.\n", (unsigned long)sizeof(d));
	printf ("The size of a double is: %lu.\n", (unsigned long)sizeof(i));
        printf ("The size of a float is: %LU.\n", (unsigned long)sizeof(f));

	return (0);
}
