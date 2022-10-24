#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string to print
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;
	int j = 0;
	int n;

	while (str[i++])
	{
		j++;
	}

	if (j % 2 == 0)
	{
		n = j / 2;
	}

	else
	{
		n = (j + 1) / 2;
	}

	for (i = n; i < j; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
