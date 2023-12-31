#include "shell.h"
/**
 * *_str_cat - it concatenates two strings
 *
 * @dest: resulting string
 * @src: source or original string
 * @n: string length
 * Return: pointer to destination
 */

char *_str_cat(char *dest, char *src, int n)
{
	int i, m;

	m = str_len(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[m + i] = src[i];
	}
	dest[m + i] = '\0';
	return (dest);
}
