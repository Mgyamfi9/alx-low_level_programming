#include "lists.h"
/**
 * pop_listint - deletes head node of the list
 * @head: pointer to address of head node
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *hold;
	int data;
	/*variable declarations*/
	if (*head == NULL)
		return (0);
	hold = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(hold);
	return (data);
}
