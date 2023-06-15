#include "lists.h"

/**
 *sum_dlistint - sum of all the data (n) of a dlistint_t linked list
 *@head: the head of the node
 *Return: The sum.
 */

int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *tmp = head;

if (head == NULL)
return (0);
while (tmp != NULL)
{
sum += tmp->n;
tmp = tmp->next;
}
return (sum);
}
