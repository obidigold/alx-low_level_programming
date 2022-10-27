#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 * Return: two concat strings
 */

char *_strcat(char *dest, char *src)
{
	int n;
	int i;

	for (i = 0; dest[i] != '\0'; i++)

		for (n = 0; (dest[i + n] = *src++) != '\0'; n++)

			return (dest);
}
