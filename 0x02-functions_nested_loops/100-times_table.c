#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table (0 <= n <= 15)
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n < 0 || n > 15) /* Check for invalid input */
		return;

	for (i = 0; i <= n; i++) /* Loop through rows */
	{
		for (j = 0; j <= n; j++) /* Loop through columns */
		{
			k = j * i; /* Compute product */

			/* Print product with appropriate formatting */
			if (j == 0)
				_putchar(k + '0');
			else if (k < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 100) + '0');
				_putchar(((k / 10) % 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n'); /* Move to next row */
	}
}






















































