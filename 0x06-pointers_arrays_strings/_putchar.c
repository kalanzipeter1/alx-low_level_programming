#include <unistd.h>

/**
 * _putchar - write the character c to standard output
 * @c: The character to print
 * 
 * Return: On success 1
 * on error, return -1, and errno is set appropriately.
 */
  
int _putchar(char c)
{
          return (write(1, &c, 1));
}

