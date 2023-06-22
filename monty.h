#ifndef MONTY_H
#define MONTY_H

#define _POSIX_C_SOURCE 200809L
#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct globals - global structure to use in the functions
 * @lifo: is stack or queue
 * @cont: current line
 * @arg: second parameter inside the current line
 * @head: doubly linked list
 * @fd: file descriptor
 * @buffer: input text
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct globals
{
	int lifo;
	unsigned int cont;
	char  *arg;
	stack_t *head;
	FILE *fd;
	char *buffer;
} global_t;

/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **a_stack, unsigned int l_nums);
} instruction_t;

extern global_t vglo;

/* opcode_instructuions*/
void _push(stack_t **a_stack, unsigned int l_nums);
void _pall(stack_t **a_stack, unsigned int l_nums);
void _pint(stack_t **a_stack, unsigned int l_nums);
void _pop(stack_t **a_stack, unsigned int l_nums);
void _swap(stack_t **a_stack, unsigned int l_nums);
void _queue(stack_t **a_stack, unsigned int l_nums);
void _stack(stack_t **a_stack, unsigned int l_nums);
void _add(stack_t **a_stack, unsigned int l_nums);
void _nop(stack_t **a_stack, unsigned int l_nums);
void _sub(stack_t **a_stack, unsigned int l_nums);
void _div(stack_t **a_stack, unsigned int l_nums);
void _mul(stack_t **a_stack, unsigned int l_nums);
void _mod(stack_t **a_stack, unsigned int l_nums);
void _pchar(stack_t **a_stack, unsigned int l_nums);
void _pstr(stack_t **a_stack, unsigned int l_nums);
void _rotl(stack_t **a_stack, unsigned int l_nums);
void _rotr(stack_t **a_stack, unsigned int l_nums);

/*get function*/
void (*get_opcodes(char *opc))(stack_t **a_stack, unsigned int l_nums);

/*imported functions*/
int _sch(char *srv, char cf);
char *_strtoky(char *srv, char *deli);
void *_realloc(void *ptr, unsigned int o_size, unsigned int n_size);
void *_calloc(unsigned int nmemb, unsigned int size);
int _strcmp(char *str_1, char *str_2);

/* doubly linked list functions */
stack_t *add_dnodeint_end(stack_t **a_head, const int s);
stack_t *add_dnodeint(stack_t **a_head, const int s);
void free_dlistint(stack_t *a_head);

/* main */
void free_vglo(void);

#endif /* __MONTY_H__ */
