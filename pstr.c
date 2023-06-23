#include "monty.h"
/**
 * _pstr - prints the string of the stack
 *
 * @dbly: head of the linked list
 * @l_num: line number;
 * Return: no return
 */
void _pstr(stack_t **dbly, unsigned int l_num)
{
	stack_t *ax;
	(void)l_num;

	ax = *dbly;

	while (ax && ax->n > 0 && ax->n < 128)
	{
		printf("%c", ax->n);
		ax = ax->next;
	}

	printf("\n");
}