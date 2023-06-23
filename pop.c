#include "monty.h"
/**
 * _pop - removes the top element of the stack
 *
 * @dbly: head of the linked list
 * @l_num: line number
 * Return: no return
 */
void _pop(stack_t **dbly, unsigned int l_num)
{
	stack_t *ux;

	if (dbly == NULL || *dbly == NULL)
	{
		dprintf(2, "L%u: can't pop an empty stack\n", l_num);
		free_vglo();
		exit(EXIT_FAILURE);
	}
	ux = *dbly;
	*dbly = (*dbly)->next;
	free(ux);
}