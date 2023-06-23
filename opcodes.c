#include "monty.h"
/**
 * _push - pushes an element to the stack
 *
 * @dbly: head of the linked list
 * @l_num: line number
 * Return: no return
 */
void _push(stack_t **dbly, unsigned int l_num)
{
	int y, z;

	if (!vglo.arg)
	{
		dprintf(2, "L%u: ", l_num);
		dprintf(2, "usage: push integer\n");
		free_vglo();
		exit(EXIT_FAILURE);
	}

	for (z = 0; vglo.arg[z] != '\0'; z++)
	{
		if (!isdigit(vglo.arg[z]) && vglo.arg[z] != '-')
		{
			dprintf(2, "L%u: ", l_num);
			dprintf(2, "usage: push integer\n");
			free_vglo();
			exit(EXIT_FAILURE);
		}
	}

	y = atoi(vglo.arg);

	if (vglo.lifo == 1)
		add_dnodeint_end(dbly, y);
	else
		add_dnodeint_end(dbly, y);
}

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


/**
 * _swap - swaps the top two elements of the stack
 *
 * @dbly: head of the linked list
 * @l_num: line number
 * Return: no return
 */
void _swap(stack_t **dbly, unsigned int l_num)
{
	int c = 0;
	stack_t *ux = NULL;

	ux = *dbly;

	for (; ux != NULL; ux = ux->next, c++)
		;

	if (c < 2)
	{
		dprintf(2, "L%u: can't swap, stack too short\n", l_num);
		free_vglo();
		exit(EXIT_FAILURE);
	}

	ux = *dbly;
	*dbly = (*dbly)->next;
	ux->next = (*dbly)->next;
	ux->prev = *dbly;
	(*dbly)->next = ux;
	(*dbly)->prev = NULL;
}
