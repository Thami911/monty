#include "monty.h"
/**
 * _pall - prints all values on the stack
 *
 * @dbly: head of the linked list
 * @l_num: line numbers
 * Return: no return
 */
void _pall(stack_t **dbly, unsigned int l_num)
{
	stack_t *ux;
	(void)l_num;

	ux = *dbly;

	while (ux)
	{
		printf("%d\n", ux->n);
		ux = ux->next;
	}
}