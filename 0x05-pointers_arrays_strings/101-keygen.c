#include "main.h"
#include "stdio.h"
#include "time.h"
#include "stdlib.h"

/**
 * main - Generates random valid passwords for the
 * program 101-crackme.
 * Return: Always 0.
 */

int main(void)
{
	char p[84];
	int i = 0;
	int sum = 0;
	int diff_half1;
	int diff_half2;

	srand(time(0));

	while (sum < 2772)
	{
		p[i] = 33 + rand() % 94;
		sum += p[i++];
	}

	p[i] = '\0';
	if (sum != 2772)
	{
		diff_half1 = (sum - 2772) / 2;
		diff_half2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			diff_half1++;

		for (i = 0; p[i]; i++)
		{
			if (p[i] >= (33 + diff_half1))
			{
				p[i] -= diff_half1;
				break;
			}
		}

		for (i = 0; p[i]; i++)
		{
			if (p[i] >= (33 + diff_half2))
			{
				p[i] -= diff_half2;
				break;
			}
		}
	}

	printf("%s", p);

	return (0);
}
