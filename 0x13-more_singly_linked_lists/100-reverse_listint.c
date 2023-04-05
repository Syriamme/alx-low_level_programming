#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 **reverse_listint- a functions that reverses a list
 *@head: pointer to head of list
 *Return: a pointer to the first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre, *after;

	pre = NULL;

	while (*head != NULL)
	{
		after = (**head).next;
		(**head).next = pre;
		
		pre = *head;
		*head = after;
	}
	*head = pre;
	return(*head);
}
