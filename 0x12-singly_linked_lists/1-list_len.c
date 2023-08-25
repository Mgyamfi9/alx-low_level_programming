#include "lists.h"
/**
 * list_len - number of elements
 * @h: pointer to list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t nodeNum;
	/*variable declaration*/
	nodeNum = 0;
	if (h != NULL)
	{
		h = h->next;
		nodeNum++;
	}
	return (nodeNum);
}
