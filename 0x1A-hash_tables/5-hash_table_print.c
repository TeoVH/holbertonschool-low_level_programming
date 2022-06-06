#include "hash_tables.h"

/**
 * hash_table_print - Function that prints a hash table
 * @ht: Is the hash table
 * Return: none
 */

 void hash_table_print(const hash_table_t *ht)
 {
	 hash_node_t *tmp;
	 unsigned long int i;
	 char *ch;

	 if (ht == NULL)
	 {
		 return;
	 }
	 printf("{");
	 ch = "";

	 for (i = 0; i < ht->size; i++)
	 {
		 tmp = ht->array[i];
		 while (tmp)
		 {
			 printf("%s'%s': '%s'", ch, tmp->key, tmp->value);
			 ch = ", ";
			 tmp = tmp->next;
		 }
	 }
	 printf("}\n");
 }
