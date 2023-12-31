#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: destination string
 * @src: source string to append
 * @n: maximum number of bytes to be used from src
 *
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	len = 0;
	while (dest[len] != '\0')
		len++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];

	dest[len + i] = '\0';

	return (dest);
}
