#include "monty.h"
/**
 * _mod - computes the rest of the division of the second element
 * by the top element of the stack
 * @dbly: head of the linked list
 * @l_num: line number;
 * Return: no return
 * info:The result is stored in 2nd value node from the top
 * and top value removed.
 */

void _mod(stack_t **dbly, unsigned int l_num)
{
	int k = 0;
	stack_t *ax = NULL;

	ax = *dbly;

	for (; ax != NULL; ax = ax->next, k++)
		;

	if (k < 2)
	{
		dprintf(2, "L%u: can't mod, stack too short\n", l_num);
		free_vglo();
		exit(EXIT_FAILURE);
	}

	if ((*dbly)->n == 0)
	{
		dprintf(2, "L%u: division by zero\n", l_num);
		free_vglo();
		exit(EXIT_FAILURE);
	}

	ax = (*dbly)->next;
	ax->n %= (*dbly)->n;
	_pop(dbly, l_num);
}