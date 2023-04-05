#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *print_listint_safe - a function that prints a listint_t linked list
 *@head: pointer to the head of the list
 *Program uses Floyd's cycle-finding algorithm
 *Return: number of nodes in a list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *normal, *fastcheck;
	int count = 0;

	if (head == NULL)
		exit(98);
	normal = head;
	fastcheck = head;

	while (normal != NULL && fastcheck != NULL && fastcheck->next != NULL)
	{
		count++;
		normal = normal->next;
		fastcheck = fastcheck->next->next;
	}
	if (normal == fastcheck)
		exit(98);
	return (count);
}
