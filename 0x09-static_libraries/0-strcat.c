#include <string.h>
#include "main.h"

/**
 * *_strcat - string concat
 * @dest: string destination value
 * @src: string src value
 * Return: array:
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
