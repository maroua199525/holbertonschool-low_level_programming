#include "3-calc.h"
#include <stdio.h>
/**
 *op_add - add two integers
 *@b:int
 *@a:int
 *Return:sum
 */
int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}
#include "3-calc.h"
#include <stdio.h>
/**
 *op_sub - sub two integers
 *@a:int
 *@b:int
 *Return:sub
 */
int op_sub(int a, int b)
{
	int sub;

	sub = (a - b);
	return (sub);
}
#include "3-calc.h"
#include <stdio.h>
/**
 *op_mul - print the multiplication of two integers
 *@a:int
 *@b:int
 *Return:mul
 */
int op_mul(int a, int b)
{
	int mul;

	mul = (a * b);
	return (mul);
}
#include "3-calc.h"
#include <stdio.h>
/**
 *op_div - print the index of an array
 *@a:int
 *@b:int
 *Return:div;
 */
int op_div(int a, int b)
{
	int div;

	div = (a / b);
	return (div);
}
#include "3-calc.h"
#include <stdio.h>
/**
 *op_mod - print the index of an array
 *@a:int
 *@b:int
 *Return:mod
 */
int op_mod(int a, int b)
{
	int mod;

	mod = (a % b);
	return (mod);
}
