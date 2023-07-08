#include "main.h"

/**
 * set_bit - sets to 1 at index.
 * @index: index
 * @n: number
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int track;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	track = 1 << index;
	*n = *n | track;

	return (1);
}