#include "lists.h"
/**
 * free_list- frees list
 * @head: head of list
 */
void free_list(list_t *head)
{
	list_t *c_node;
	/*variable declaration*/
	while ((c_node = head) != NULL)
	{
		c_node = head->next;
		free(c_node->str);
		free(c_node);
	}
}
