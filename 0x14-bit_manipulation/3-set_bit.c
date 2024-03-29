#include "main.h"

/*
 * File: 3-set_bit.c
 * Author: Alex O. Arevalo T.
 * email: 3915@holbertonschool.com
 */

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: number to set
 * @index: index at which to set bit
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}