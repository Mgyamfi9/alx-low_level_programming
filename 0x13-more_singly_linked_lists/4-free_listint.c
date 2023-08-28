#include "lists.h"
/**
 * free_listint - frees list
 * @head: pointer to head node
 */
void free_listint(listint_t *head)
{
	listint_t *hold;
	/*variable pointer*/
	while (head)
	{
		hold = head->next;
		free(head);
		head = hold;
	}
}
