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
	int i, n, ex;

	ex = 0, n = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (checknumber(argv[i]))
				n += atoi(argv[i]);
			else
				ex = 1;
		}
	}
	if (ex == 0)
		printf("%i\n", n);
	else
		printf("%s\n", "Error");
	return (ex);
}
