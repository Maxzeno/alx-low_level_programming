#include "main.h"

/**
 * get_endianness - Function checks the endianness.
 *
 * Return: If big-endian - return 0.
 *         If little-endian - return 1.
 */
int get_endianness(void)
{
	int num = 1;
	char *endian = (char *)&num;

	if (*endian == 1)
		return (1);

	return (0);
}
