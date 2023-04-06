#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number, or 0 if there is one or more chars in the
 * string that is not 0 or 1 or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int uint_value = 0;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
			uint_value = uint_value * 2 + 0;
		else if (b[i] == '1')
			uint_value = uint_value * 2 + 1;
		else
			return (0);
	}

	return (uint_value);
}
