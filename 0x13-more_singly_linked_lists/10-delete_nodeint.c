#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *delete_nodeint_at_index - A program that deletes a node
 *@head: pointer to the list head
 *@index: node to be deleted
 *Return: 1 if sucess or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *after, *pre;
	unsigned int sum = 0;

	pre = *head;

	if (index != 0)
	{
		while (pre != NULL && sum < index - 1)
		{
			pre = pre->next;
			sum++;
		}
	}
	if (pre == NULL || (pre->next == NULL && index != 0))
	{
		return (-1);
	}
		after = pre->next;
		if (index != 0)
		{
			pre->next = after->next;
			free(after);
		}
		else
		{
			free(pre);
			*head = after;
		}
		return (1);
}
