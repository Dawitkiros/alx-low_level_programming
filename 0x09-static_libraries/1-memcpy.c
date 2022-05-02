#include <string.h>
#include "main.h"

/**
 * *_memcpy -  copy memory area
 *
 * @dest: string pointer
 * @src: string pointer
 * @n: bytes number
 * Return: char*
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);
}
