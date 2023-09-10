#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main- entry point
 *
 *Return: always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Enter a number\n");
	scanf("%d", &n);

	if (n > 0)
	printf("%d is positive\n", n);

	else if (n == 0)
	printf("%d is Zero\n", n);

	else
	printf("%d is negative\n", n);

	return (0);
}
