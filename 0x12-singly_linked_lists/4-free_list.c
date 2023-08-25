#include "lists.h"
/**
 * free_list- frees list
 * @head: head of list
 */
void free_list(list_t *head)
{
	list_t *hold;
	/*variable declaration*/
	while (head)
	{
		hold = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
