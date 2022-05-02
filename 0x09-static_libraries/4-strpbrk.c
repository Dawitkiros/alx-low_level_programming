#include <string.h>
#include "main.h"

/**
 * *_strpbrk - search string
 *
 * @s: initial string
 * @accept: search char
 * Return: int
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
