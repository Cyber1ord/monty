#include "monty.h"

/**
 * addst - changes mode of push to stack
 * @n_stack: pointer to stack
 * @nline: line number
 *
 * Return: Nothing.
 */
void addst(stack_t **n_stack, unsigned int nline)
{
	(void)nline;
	(void)n_stack;
	arg.flag = 0;
}

/**
 * addqu - changes mode of push to queue
 * @n_stack: pointer to stack
 * @nline: line number
 *
 * Return: Nothing.
 */
void addqu(stack_t **n_stack, unsigned int nline)
{
	(void)nline;
	(void)n_stack;

	arg.flag = 1;
}
