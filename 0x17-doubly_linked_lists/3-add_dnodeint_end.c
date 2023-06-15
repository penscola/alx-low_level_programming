#include "lists.h"

/**
 *add_dnodeint_end - add a node at the end
 *@head: the head of the node
 *@n : the int to add
 *Return: The new node.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
dlistint_t *tmp = *head;

if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
{
new_node->prev = NULL;
*head = new_node;
return (new_node);
}
else
{
while (tmp->next != NULL)
tmp = tmp->next;
new_node->prev = tmp;
tmp->next = new_node;
return (new_node);
}
}
