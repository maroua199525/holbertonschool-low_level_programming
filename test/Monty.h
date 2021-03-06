#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <ctype.h>
/******************Struct************************/
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
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/****************Function***********************************/
void func_push(stack_t **stack, unsigned int line_number);
void func_pall(stack_t **stack, unsigned int line_number);
void func_pint(stack_t **stack, unsigned int line_number);
void func_nop(stack_t **head, unsigned int line_number);
void func_swap(stack_t **stack, unsigned int line_number);
void func_sub(stack_t **head, unsigned int line_number);
void func_add(stack_t **stack, unsigned int line_number);
void getfunc_monty(char *op_code, stack_t **stack, unsigned int line_number);
void free_stack(stack_t **head, FILE *fp, char *line);
int is_digit(char *str);
void add_node(stack_t **head, int n);
#endif
