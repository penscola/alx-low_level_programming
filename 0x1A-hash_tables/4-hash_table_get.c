#include "hash_tables.h"

/**
 * hash_table_get - function retrieves a value associated with a key
 *
 * @ht: hash table to look into
 * @key: key to look for
 *
 * Return: value associated with element, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *temp;

if (ht == NULL || key == NULL)
return (NULL);
index = key_index((const unsigned char *)key, ht->size);
temp = ht->array[index];
while (temp != NULL)
{
if (strcmp(temp->key, key) == 0)
return (strdup(temp->value));
temp = temp->next;
}
return (NULL);
}
