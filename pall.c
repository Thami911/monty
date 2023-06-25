#include "monty.h"

/**
 * pall - prints the stack
 * @head: stack head
 * @count: no used
 * Return: no return
*/

void pall(stack_t **head, unsigned int count)
{
	stack_t *h;
	(void)count;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}