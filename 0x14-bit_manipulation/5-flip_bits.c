#include "main.h"

/**
 * flip_bits - The function counts the number of bits needed to be
 *             flipped to get from one number to another.
 * @n: n The number it self.
 * @m: m is The number to flip n to.
 *
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, the_bits = 0;

	while (xor > 0)
	{
		the_bits += (xor & 1);
		xor >>= 1;
	}

	return (the_bits);
}
