#include "lists.h"
/**
 * sum_listint - sums all the data of the list
 * @head: pointer to head node
 * Return: sum of data
 */
int sum_listint(listint_t *head)
{
	int s;
	/*variable declaration*/
	s = 0;
	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum)
}
