#include "main.h"

/**
 * binary_to_uint -converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return:converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int count;

	count = 0;
	if (!b)
		return (0);
	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
	}
	for (index = 0; b[index] != '\0'; index++)
	{
		count <<= 1;
		if (b[index] == '1')
			count += 1;
	}
	return (count);
}
