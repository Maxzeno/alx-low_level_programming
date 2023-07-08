#include "main.h"

/**
 * get_bit - returns bit
 * @n: the val
 * @index: index
 *
 * Return: return bit at the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int track, output;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	track = 1 << index;
	output = n & track;
	if (output == track)
		return (1);

	return (0);
}
