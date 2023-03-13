#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 *
 * Return: pointer to the concatenated string, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	conct = malloc(sizeof(char) * (len1 + len2 + 1));

	if (conct == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		conct[i] = s1[i];

	for (j = 0; s2[j]; j++, i++)
		conct[i] = s2[j];

	conct[i] = '\0';

	return (conct);
}

