#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *free_listint2- A function that frees a list
 *@head: pointer to the list head
 *Return: Always 0 (success)
 */
void free_listint2(listint_t **head)
{
        listint_t *tp;

	if (head == NULL)
		return;

        while (*head != NULL)
        {
                tp = *head;
                *head = (*head)->next;
                free(tp);
        }
	*head = NULL;
}
