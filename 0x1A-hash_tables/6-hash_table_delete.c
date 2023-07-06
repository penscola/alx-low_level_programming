#include "hash_tables.h"

/**
 * hash_table_delete - function deletes a hash table
 *
 * @ht: hash table to delete
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *temp, *temp2;

if (ht == NULL)
return;
for (i = 0; i < ht->size; ++i)
{
temp = ht->array[i];
while (temp != NULL)
{
temp2 = temp;
temp = temp->next;
free(temp2->key);
free(temp2->value);
free(temp2);
}
}
free(ht->array);
free(ht);
}
