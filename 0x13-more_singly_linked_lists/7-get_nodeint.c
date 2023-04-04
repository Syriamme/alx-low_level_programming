#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *get_nodeint_at_index - a function returning nth node
 *@head: list
 *@index: index of the node
 *Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nod;
	unsigned int num = 0;

	nod = head;
	if (nod == NULL)
		return(NULL);
	while (num < index && nod != NULL)
	{
		nod = nod->next;
		num++;
	}
	if (num < index)
		return (NULL);
	return (nod);
}
