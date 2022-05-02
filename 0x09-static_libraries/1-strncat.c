#include <string.h>
#include "main.h"

/**
 * *_strncat - string concat
 * @dest: string destination value
 * @src: string src value
 * @n: int n value
 * Return: array:
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_len = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
