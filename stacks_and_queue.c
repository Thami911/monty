#include "monty.h"

/**
 * _queue - sets format of data to queue(FIFI/LILO)
 * @dbly: head of linked list
 * @l_num: line number
 */
void _queue(stack_t **dbly, unsigned int l_num)
{
	(void)dbly;
	(void)l_num;

	vglo.lifo = 0;
}

/**
 * _stack - sets format of data to stack (LIFO/FILO)
 * @dbly: linked list head
 * @l_num: line number
 */
void _stack(stack_t **dbly, unsigned int l_num)
{
	(void)dbly;
	(void)l_num;

	vglo.lifo = 1;
}
