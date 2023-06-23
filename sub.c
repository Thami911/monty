#include "monty.h"
/**
 * _sub - Subtracts 2nd value from the top of stack_t linked list by top value.
 * @hdn: the hdn node
 * @l_num: the line number
 * Description: The result is stored in the second value node
 * from the top and the top value is removed.
 */

void _sub(stack_t **hdn, unsigned int l_num)
{
	int x = 0;
	stack_t *crrnt;

	crrnt = *hdn;

	for (; crrnt != NULL; crrnt = crrnt->next, x++)
		;

	if (x < 2)
	{
		dprintf(2, "L%u: can't sub, stack too short\n", l_num);
		free_vglo();
		exit(EXIT_FAILURE);
	}

	crrnt = (*hdn)->next;
	crrnt->n -= (*hdn)->n;
	_pop(hdn, l_num);
}