#include <stdio.h>
/**
 *main - entry point
 *
 *Return: always 0 (success)
*/

int main(void)
{
	int x;

	for (x = 97; x < 123; x++)
	{
		if (x != 101 && x != 113)
		{
			putchar(x);

		}
	}
		putchar('\n');
		return (0);
}
