#include "monty.h"

/**
 * _add - Adds the top two values of a stack_t linked list.
 * @dbly: hdn of the linked list
 * @l_num: line number
 * Description: The result is stored in the second value node
 * from the top and the top value  is removed.
 */
void _add(stack_t **dbly, unsigned int l_num)
{
	int x = 0;
	stack_t *nx = NULL;

	nx = *dbly;

	for (; nx != NULL; nx = nx->next, x++)
		;

	if (x < 2)
	{
		dprintf(2, "L%u: can't add, stack too short\n", l_num);
		free_vglo();
		exit(EXIT_FAILURE);
	}

	nx = (*dbly)->next;
	nx->n += (*dbly)->n;
	_pop(dbly, l_num);
}