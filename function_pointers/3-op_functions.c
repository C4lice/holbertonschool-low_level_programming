#include "3-calc.h"
/**
 * op_add - addition deux nombres
 * @a: le premier nombre
 * @b: le deuxième nombre
 * Return: la somme de a est b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - faire la soustraction entre a et b
 * @a: le premier nombre
 * @b: le deuxième nombre
 * Return: le résultat de la soustration entre a et b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - faire la multiplication de a et b
 * @a: le premier nombre
 * @b: le deuxième nombre
 * Return: le résultat de la multiplication de a et b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - faire la division de a et b
 * @a: le premier nombre
 * @b: le deuxième nombre
 * Return: le résultat de la division de a et b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - faire la division de a et b
 * @a: le premier nombre
 * @b: le deuxième nombre
 * Return: le reste de la division de a et b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
