#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *add_nodeint- a function that adds a node at the beginning
 *@head: head of list
 *@n: n element
 *Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
