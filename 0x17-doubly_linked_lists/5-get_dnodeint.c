#include "lists.h"

/**
 *get_dnodeint_at_index - get a node at the index
 *@head: the head of the node
 *@index: the index of the node
 *Return: The node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *tmp = head;

if (head == NULL)
return (NULL);
while (i < index)
{
tmp = tmp->next;
i++;
}
return (tmp);
}
