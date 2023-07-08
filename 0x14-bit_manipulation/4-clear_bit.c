#include "main.h"

/**
 * clear_bit - clear
 * @n: number
 * @index: index
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int res;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	res = ~(1 << index);
	*n = *n & res;

	return (1);
}
