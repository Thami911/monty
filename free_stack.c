#include "monty.h"

/**
* free_stack - frees a doubly linked list
* @head: head of the stack
*/

void f_free_stack(stack_t *head)
{
	stack_t *xyz;

	xyz = head;
	while (head)
	{
		xyz = head->next;
		free(head);
		head = xyz;
	}
}
