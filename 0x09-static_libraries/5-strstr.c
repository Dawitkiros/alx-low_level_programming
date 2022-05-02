#include <string.h>
#include "main.h"

/**
 * *_strstr - locate substring
 *
 * @haystack: initial string
 * @needle: search char
 * Return: char pointer
 */
char *_strstr(char *haystack, char *needle)
{
return (strstr(haystack, needle));
}
