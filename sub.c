#include "monty.h"

/**
  *sub- sustration
  *@head: stack head
  *@count: line_number
  *Return: no return
 */

void s_sub(stack_t **head, unsigned int count)
{
	stack_t *xyz;
	int sus, nodes;

	xyz = *head;
	for (nodes = 0; xyz != NULL; nodes++)
		xyz = xyz->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	xyz = *head;
	sus = xyz->next->n - xyz->n;
	xyz->next->n = sus;
	*head = xyz->next;
	free(xyz);
}
