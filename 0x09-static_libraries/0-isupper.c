#include <ctype.h>
/**
 * _isupper - Verify if value is uppercase
 * @c: value to verify
 *
 * Return: 1 if upper else 0.
 */
/* verify is uppercase */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	return (0);
}
