#include <stdio.h>
/**
*main - entry point
*
*Return: always 0(success)
*/

int main(void)
{
	char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int x;

	for (x = 0; x < 52; x++)
	{
		putchar(alphabet[x]);
	}

	putchar('\n');

	return (0);
}
