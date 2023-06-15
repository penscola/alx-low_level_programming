#include "lists.h"

/**
 *delete_dnodeint_at_index - delete a node at the index
 *@head: the head of the node
 *@index: the index of the node
 *Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *tmp = *head;
dlistint_t *tmp2 = NULL;

if (*head == NULL)
return (-1);
if (index == 0)
{
*head = tmp->next;
if (tmp->next != NULL)
tmp->next->prev = NULL;
free(tmp);
return (1);
}
while (tmp != NULL)
{
if (i == index - 1)
{
tmp2 = tmp->next;
tmp->next = tmp2->next;
if (tmp2->next != NULL)
tmp2->next->prev = tmp;
free(tmp2);
return (1);
}
tmp = tmp->next;
i++;
}
return (-1);
}
