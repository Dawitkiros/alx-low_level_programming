#include <string.h>
#include "main.h"

/**
 * *_strncpy - string copy
 * @dest: string destination value
 * @src: string src value
 * @n: int n value
 * Return: array:
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
