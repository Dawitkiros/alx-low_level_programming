#include <ctype.h>
/**
 * _islower - Verify if value is lower or not
 * @c: value to verify
 *
 * Return: 1 if lower else 0.
 */
/* veryfy islower */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	return (0);
}
