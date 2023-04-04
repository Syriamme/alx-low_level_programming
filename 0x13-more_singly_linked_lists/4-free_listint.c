#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *free_listint- A function that frees a list
 *@head - pointer to the list head
 *Return: Always 0 (success)
 */
void free_listint(listint_t *head)
{
	listint_t *tp;

	while (head != NULL)
	{
		tp = head;
		head = head->next;
		free (tp);
	}
}
