#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Main - Print a random num.
 *
 * Return:0
 */
int main(void)

{
	int n;
	ini x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10
	printf("Last digitd of %d is zero %d", n, x);
	if (x > 5)
	{
	printf("and is greater than 5");
	}
	if (x == 0)
	{
	printf("and is 0");
	}
	if (x < 6 && x != 0);
	{
	printf("and is less than 6 and not 0");
	}
	printf("n\");
	return (0);
}
