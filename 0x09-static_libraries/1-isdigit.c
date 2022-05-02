#include <ctype.h>
/**
 * _isdigit - Verify if number
 * @c: value to verify
 *
 * Return: 1 if number else 0.
 */
/* verify is number */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	return (0);
}
