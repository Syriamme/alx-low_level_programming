#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint -a function that deletes the head node
 *@head: the list
 *Return:the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *tp;

	if (*head == NULL)
		return (0);
	{
		tp = *head;
		num = tp->n;
		*head = tp->next;
		free(tp);
	}
	return (num);
}
