#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 * @c: the character to write
 *
 * Return: on success, the character written; on error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

