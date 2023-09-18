#include "main.h"

/**
 * swap_int - swaps the values of integers a and b
 * @a: temporary value
 * @b: value that is swapped
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
