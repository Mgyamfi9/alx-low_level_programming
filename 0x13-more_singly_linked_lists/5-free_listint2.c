#include "lists.h"
/**
 * free_listint2 - frees a list
 * head: pointer to head node address
 */
void free_listint2(listint_t **head)
{
	listint_t *hold;
	/* pointer variable*/
	if (head == NULL)
		return (NULL);
	while (*head)
	{
		hold = (*head)->next;
		free(*head);
		*head = hold;
	}
	head = NULL;
}
