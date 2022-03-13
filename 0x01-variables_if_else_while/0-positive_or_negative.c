#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *short description: Positive is better than negetive
 *
 *Description: Returns positive if n greater than 0, 0 if n is 0 and negetive otherwise
 *Return: zero always (suceess)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

if (n > 0);
{
	printf("%i is positive\n", n);
}
else if (n < 0);
{
	printf("%i is negetive\n", n);
}
else
{
	printf("%i is zero\n", n);
}
return(0);
}

	    
     
		 
	
