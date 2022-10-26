#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @a: the string to look at
 * Return: the capitalized string
 */

char *cap_string(char *a)
{
	int i = 0;
	int j;
	char best[] = " \n\t,;.!?\"(){}";

	if (a[0] >= 'a' && a[0] <= 'a')
		a[0] -= 32;

	for (; a[i] != '\0'; i++)
	{
		for (j = 0; j < 14; j++)
		{
			if (a[i] == best[j])
			{
				if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
					a[i + 1] -= 32;
			}
		}
	}

	return (a);
}
