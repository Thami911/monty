#include "monty.h"

/**
  *rotl- rotates the stack to the top
  *@head: stack head
  *@count: line_number
  *Return: no return
 */

void rotl(stack_t **head,  __attribute__((unused)) unsigned int count)
{
	stack_t *tmp = *head, *xyz;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	xyz = (*head)->next;
	xyz->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = xyz;
}