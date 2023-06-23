#include "monty.h"

/**
 * _rotl - rotates 1st element to the bottom and 2nd to the top
 * @dbly: linked list head
 * @l_num: line nummber
 */
void _rotl(stack_t **dbly, unsigned int l_num)
{
	stack_t *abx = NULL;
	stack_t *uxb = NULL;
	(void)l_num;

	if (*dbly == NULL)
		return;

	if ((*dbly)->next == NULL)
		return;

	abx = (*dbly)->next;
	uxb = *dbly;

	for (; uxb->next != NULL; uxb = uxb->next)
		;

	abx->prev = NULL;
	uxb->next = *dbly;
	(*dbly)->next = NULL;
	(*dbly)->prev = uxb;
	*dbly = abx;
}

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
