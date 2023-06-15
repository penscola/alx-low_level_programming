#include "lists.h"

/**
 *free_dlistint - free a list
 *@head: the head of the node
 *Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *tmp;

while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp);
}
}
