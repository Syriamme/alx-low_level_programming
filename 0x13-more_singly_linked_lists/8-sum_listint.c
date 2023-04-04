#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *sum_listint- returns the sum value of all the data
 *@head: the list
 *Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *tp;
	int sum = 0;
	
	tp = head;
	
	while (tp != NULL)
	{
		sum += tp->n;
		tp = tp->next;
	}
	return (sum);
}
