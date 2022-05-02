#include <string.h>
#include "main.h"

/**
 * *_memset -  fills string
 *
 * @s: string pointer
 * @b: replace char
 * @n: bytes number
 * Return: char*
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);

	return (s);
}
