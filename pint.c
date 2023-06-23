#include "monty.h"
/**
 * _pint - prints the value at the top of the stack
 *
 * @dbly: head of the linked list
 * @l_num: line number
 * Return: no return
 */
void _pint(stack_t **dbly, unsigned int l_num)
{
	(void)l_num;

	if (*dbly == NULL)
	{
		dprintf(2, "L%u: ", l_num);
		dprintf(2, "can't pint, stack empty\n");
		free_vglo();
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*dbly)->n);
}