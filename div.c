#include"monty.h"
/**
 *_div -Divides 2nd value from the top of stack_t linkedlist by the top value.
 * @dbly: hdn of the linked list
 * @l_num: line number;
 * Return: no return
 */

void _div(stack_t **dbly, unsigned int l_num)
{
	int x = 0;
	stack_t *nx = NULL;

	nx = *dbly;

	for (; nx != NULL; nx = nx->next, x++)
		;

	if (x < 2)
	{
		dprintf(2, "L%u: can't div, stack too short\n", l_num);
		free_vglo();
		exit(EXIT_FAILURE);
	}

	if ((*dbly)->n == 0)
	{
		dprintf(2, "L%u: division by zero\n", l_num);
		free_vglo();
		exit(EXIT_FAILURE);
	}

	nx = (*dbly)->next;
	nx->n /= (*dbly)->n;
	_pop(dbly, l_num);
}