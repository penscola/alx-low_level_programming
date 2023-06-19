#include "main.h"
/**
 * _islower- lower case character
 *@c: a character argument
 * Return: return 1 and 0 depending on the conditio`n
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
