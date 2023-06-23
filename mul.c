#include "monty.h"
/**
 *_mul -Multiplies 2nd value from the top of stack_t linked list by top value.
 * @hdn: the hdn node
 * @l_num: the line number
 * info:The result is stored in the 2nd value node
 * from the top and top value removed.
 */

void _mul(stack_t **hdn, unsigned int l_num)
{
	int x = 0;
	stack_t *crrnt;

	crrnt = *hdn;

	for (; crrnt != NULL; crrnt = crrnt->next, x++)
		;

	if (x < 2)
	{
		dprintf(2, "L%u: can't mul, stack too short\n", l_num);
		free_vglo();
		exit(EXIT_FAILURE);
	}

	crrnt = (*hdn)->next;
	crrnt->n *= (*hdn)->n;
	_pop(hdn, l_num);
}