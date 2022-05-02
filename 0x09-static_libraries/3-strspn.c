#include <string.h>
#include "main.h"

/**
 * _strspn - calculat length
 *
 * @s: initial string
 * @accept: search char
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
