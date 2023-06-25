#include "monty.h"

/**
 * queue - prints the top
 * @head: stack head
 * @count: line_number
 * Return: no return
*/

void queue(stack_t **head, unsigned int count)
{
	(void)head;
	(void)count;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @head: head of the stack
 * Return: no return
*/

void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *xyz;

	xyz = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (xyz)
	{
		while (xyz->next)
			xyz = xyz->next;
	}
	if (!xyz)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		xyz->next = new_node;
		new_node->prev = xyz;
	}
}