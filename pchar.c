#include "monty.h"
/**
 * _pchar - print the char value of the first element
 *
 * @dbly: head of the linked list
 * @l_num: line number;
 * Return: no return
 */
void _pchar(stack_t **dbly, unsigned int l_num)
{
	if (dbly == NULL || *dbly == NULL)
	{
		dprintf(2, "L%u: can't pchar, stack empty\n", l_num);
		free_vglo();
		exit(EXIT_FAILURE);
	}
	if ((*dbly)->n < 0 || (*dbly)->n >= 128)
	{
		dprintf(2, "L%u: can't pchar, value out of range\n", l_num);
		free_vglo();
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*dbly)->n);
}