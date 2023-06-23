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
		add_dnodeint(dbly, y);
	else
		add_dnodeint_end(dbly, y);
}