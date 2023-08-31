#include "main.h"
#include <unistd.h>
/**
 * _putchar - The function writes the character c to stdout
 * @c: The character to be needed to print
 *
 * Return:Always On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

