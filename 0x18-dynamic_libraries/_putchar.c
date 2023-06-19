#include "main.h"

/**
 * _putchar - write the character c to stdout
 * @c: the character to display
 *
 * Return : On success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));

}
