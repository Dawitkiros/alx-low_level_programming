#include <ctype.h>
/**
 * _isalpha - Verify if value is alphabetic caracter or not
 * @c: value to verify
 *
 * Return: 1 if lower else 0.
 */
/* verify is alphabetic caracter */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	return (0);
}
