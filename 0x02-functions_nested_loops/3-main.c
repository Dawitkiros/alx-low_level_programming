#include "main.h"

/**
 * main - check the code
 * 
 * Return:  Alaways 0.
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	return (0);
}
