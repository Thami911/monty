#include "monty.h"

/**
 * mul - multiplies the top two elements of the stack.
 * @head: stack head
 * @count: line_number
 * Return: no return
*/

void mul(stack_t **head, unsigned int count)
{
	stack_t *h;
	int len = 0, xyz;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	xyz = h->next->n * h->n;
	h->next->n = xyz;
	*head = h->next;
	free(h);
}