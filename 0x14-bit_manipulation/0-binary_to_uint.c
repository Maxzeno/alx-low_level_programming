#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return:converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int ind;
	unsigned int j;

	j = 0;
	if (!b)
		return (0);
	for (ind = 0; b[ind] != '\0'; ind++)
	{
		if (b[ind] != '0' && b[ind] != '1')
			return (0);
	}
	for (ind = 0; b[ind] != '\0'; ind++)
	{
		j <<= 1;
		if (b[ind] == '1')
			j += 1;
	}
	return (j);
}
