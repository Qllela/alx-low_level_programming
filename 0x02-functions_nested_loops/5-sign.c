/*
 * File: 5-sign.c
 * Auth: Brennan D Baraban
*/

#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 * @n: The number of which the sign will be printed.
 * Return: 1 if the number is greater than zero,
 *         0 if the number is zero,
 *         -1 if the number is less than zero.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		putchar(43);
		return putchar(49);
	}
	else if (n == 0)
	{
		putchar(48);
		return putchar(48);
	}
	else if (n < 0)
	{
		putchar(45);
		return putchar(49);
	}
}
