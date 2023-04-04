#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *insert_nodeint_at_index - inserting a node at a position
 *@head: list
 *@idx: where the node is inserted
 *@n: value being stored in the node
 *Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tp, *newnode;
	unsigned int sum;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	tp = *head;
	for (sum = 0; sum < idx; sum++)
	{
		tp = tp->next;
	}
	if (tp == NULL)
	{
		free (newnode);
		return (NULL);
	}
	newnode->next = tp->next;
	tp->next = newnode;
	return (newnode);
}
