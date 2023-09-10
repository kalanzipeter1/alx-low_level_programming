#include <stdio.h>

/**
 *main - entry point
 *
 *Return: always 0 (success)
 */

int main(void)
{
	int x, y;

	for (x = 48; y <= 56; x++)
	{
		for (y = 49; y <= 57; y++)
		{
			if (y > x)
			{
				putchar(x);
				putchar(y);
				if (x != 56 || y != 57)
				{
					putchar(',');
					putchar(' ');
				}

			}
		}
	}
	putchar('\n');
	return (0);
}

