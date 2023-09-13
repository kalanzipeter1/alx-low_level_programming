#include "main.h"

/***
 * _isalpha - shows 1 if input is a letter, shows 0 if otherwise
 *
 *@c: character in ASCII code
 *
 *Return: 1 if letters, 0 for rest
 */

int _isalpha(int c)
{
	if ((c >= 97 && c < 122) || (c >= 65 && c <= 90))
	{
		return (1);

	}

	else
	{
		return (0);

	}

	_putchar('\n');
}
