#include "monty.h"
/**
 * _swap - swaps the top two elements of the stack
 *
 * @dbly: head of the linked list
 * @l_num: line number
 * Return: no return
 */
void _swap(stack_t **dbly, unsigned int l_num)
{
	int c = 0;
	stack_t *ux = NULL;

	ux = *dbly;

	for (; ux != NULL; ux = ux->next, c++)
		;

	if (c < 2)
	{
		dprintf(2, "L%u: can't swap, stack too short\n", l_num);
		free_vglo();
		exit(EXIT_FAILURE);
	}

	ux = *dbly;
	*dbly = (*dbly)->next;
	ux->next = (*dbly)->next;
	ux->prev = *dbly;
	(*dbly)->next = ux;
	(*dbly)->prev = NULL;
}