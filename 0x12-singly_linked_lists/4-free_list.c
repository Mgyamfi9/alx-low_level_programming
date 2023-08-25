#include "lists.h"
/**
 * free_list- frees list
 * @head: head of list
 */
void free_list(list_t *head)
{
	list_t *hold;
	/*variable declaration*/
	while ((hold ==head) != NULL)
	{
		hold = head->next;
		free(hold->str);
		free(hold);
	}
}
