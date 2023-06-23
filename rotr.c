#include "monty.h"
/**
 * _rotr - reverse stack
 * @dbly: linked list head
 * @l_num: line number
 */
void _rotr(stack_t **dbly, unsigned int l_num)
{
	stack_t *ux = NULL;
	(void)l_num;

	if (*dbly == NULL)
		return;

	if ((*dbly)->next == NULL)
		return;

	ux = *dbly;

	for (; ux->next != NULL; ux = ux->next)
		;

	ux->prev->next = NULL;
	ux->next = *dbly;
	ux->prev = NULL;
	(*dbly)->prev = ux;
	*dbly = ux;
}