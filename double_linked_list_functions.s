#include "monty.h"

/**
 *add_dnodeint_end - add a note at the end of the doubly link list
 *@a_head: first position of linked list
 *@s: data to store
 *Return: a doubly linked list
 */

stack_t *add_dnodeint_end(stack_t **a_head, const int s)
{
	stack_t *tempo, *axe;

	if (a_head == NULL)
		return (NULL);
	tempo = malloc(sizeof(stack_t));
	if (!tempo)
	{
		dprintf(2, "Error: malloc failed\n");
		free_vglo();
		exit(EXIT_FAILURE);
	}
	tempo->n = s;
	/*Careful with the first time*/
	if (*a_head == NULL)
	{
		tempo->next = *a_head;
		tempo->prev = NULL;
		*a_head = tempo;
		return (*a_head);
	}
	axe = *a_head;
	while (axe->next)
		axe = axe->next;
	tempo->next = axe->next;
	tempo->prev = axe;
	axe->next = tempo;
	return (axe->next);
}

/**
 *add_dnodeint - add a note at the begining of the doubly link list
 *@a_head: first position of linked list
 *@s: data to store
 *Return: a doubly linked list
 */
stack_t *add_dnodeint(stack_t **a_head, const int s)
{
	stack_t *tempo;

	if (a_head == NULL)
		return (NULL);
	tempo = malloc(sizeof(stack_t));
	if (!tempo)
	{
		dprintf(2, "Error: malloc failed\n");
		free_vglo();
		exit(EXIT_FAILURE);
	}
	tempo->n = s;
	/*Careful with the first time*/
	if (*a_head == NULL)
	{
		tempo->next = *a_head;
		tempo->prev = NULL;
		*a_head = tempo;
		return (*a_head);
	}
	(*a_head)->prev = tempo;
	tempo->next = (*a_head);
	tempo->prev = NULL;
	*a_head = tempo;
	return (*a_head);
}

/**
 * free_dlistint - frees the doubly linked list
 *
 * @a_head: head of the list
 * Return: no return
 */
void free_dlistint(stack_t *a_head)
{
	stack_t *tempo;

	while ((tempo = a_head) != NULL)
	{
		a_head = a_head->next;
		free(tempo);
	}
}
