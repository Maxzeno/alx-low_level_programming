#include "main.h"

/**
 * flip_bits - flip bit.
 * @n: first
 * @m: second
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, output;
	unsigned int track, index;

	track = 0;
	output = 1;
	diff = n ^ m;
	for (index = 0; index < (sizeof(unsigned long int) * 8); index++)
	{
		if (output == (diff & output))
			track++;
		output <<= 1;
	}

	return (track);
}
