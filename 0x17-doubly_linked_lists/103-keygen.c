#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
char *username;
char *serial;
int len;
int i;
int sum;

if (argc != 2)
{
printf("Usage: %s username\n", argv[0]);
exit(1);
}

username = argv[1];

len = strlen(username);
if (len < 5)
{
printf("Invalid Username\n");
exit(1);
}

serial = malloc(len + 1);
if (serial == NULL)
{
printf("malloc() returned NULL\n");
exit(1);
}

serial[0] = username[0] ^ 0x1337;
sum = serial[0];
for (i = 1; i < len; i++)
{
serial[i] = username[i] ^ serial[i - 1];
sum += serial[i];
}

serial[len] = '\0';

printf("Serial: %s\n", serial);
printf("Sum: %d\n", sum);

return (0);
}
