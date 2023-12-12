#include "shell.h"
/**
 * *_strcat - concatenates two strings
 *
 * @dest: the resulting string
 * @src: source or original string
 * Return: pointer to destination
 */

char *_strcat(char *dest, char *src)
{
	int i, n;

	n = str_len(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[n + i] = src[i];
	}
	dest[n + i] = '\0';
	return (dest);
}
