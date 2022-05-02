#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * checknumber - check is number
 * @s: string
 *
 * Return: integer
 *
 */
int checknumber(char *s)
{
	int i, check, d;

	i = 0, d = 0, check = 1;
	if (*s == '-')
		i++;
	for (; *(s + i) != 0; i++)
	{
		d = isdigit(*(s + i));
		if (d == 0)
		{
			check = 0;
			break;
		}
	}
	return (check);
}

/**
 * main - Entry point
 *
 * @argc: number of command line
 * @argv: array of command lin arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int j, ex, coins, cents, d;
	int c[5] = {25, 10, 5, 2, 1};

	ex = 1, j = 0, coins = 0;
	if (argc == 2)
	{
		if (checknumber(argv[1]))
		{
			ex = 0, cents = atoi(argv[1]);
			if (cents >= 0)
			{
				while (cents != 0)
				{
					d = cents / c[j];
					if (d == 0)
					{
						j++;
					}
					else
					{
						coins += d;
						cents -= (d * c[j]);
					}
				}
			}
		}
	}
	if (ex == 0)
		printf("%i\n", coins);
	else
		printf("%s\n", "Error");
	return (ex);
}
