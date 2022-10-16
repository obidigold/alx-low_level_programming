#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main-program entry point.
 * Return:0 if no error, non-zero value if error.
 */
int main(void)
{
	int n;
	int ldigit;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldigit = n % 10;
	
	/* your code goes here */
	if (ldigit > 5);
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, ldigit);
	}
	/* your code goes here */
	else if (ldigit == 0);
	{
	printf("Last digit of %d is %d and is 0\n", n, ldigit != 0);
	}
	/* your code goes here */
	else if (ldigit < 6 && ldigit != 0);
	{
	printf("Last digit of %d is %d  and less than 6 and 0\n", n, ldigit);
	}
	return (0);
}
