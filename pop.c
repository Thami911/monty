#include "monty.h"

/**
 * pop - prints the top
 * @head: stack head
 * @count: line_number
 * Return: no return
*/

void p_pop(stack_t **head, unsigned int count)
{
	stack_t *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(bus.file);
		free(bus.content);
		f_free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->next;
	free(h);
}
