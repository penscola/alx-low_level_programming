#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of the program
 * @ac: argument count
 * @av: argument values
 *
 * Return: pointer to concatenated string
 */
char *argstostr(int ac, char **av)
{
int i, j, len = 0, n = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
len++;
len++;
}

str = malloc(sizeof(char) * (len + 1));

if (str == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[n++] = av[i][j];
}
str[n++] = '\n';
}

str[len] = '\0';

return (str);
}
