#include "main.h"

/**
 * binary_to_uint - binary_to_uint transforms a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: returns transformed number
 */

unsigned int binary_to_uint(const char *b)
{
    if (!b)
        return 0;

    unsigned int result = 0;
    for (int i = 0; b[i] != '\0'; i++)
    {
        if (b[i] != '0' && b[i] != '1')
            return 0;

        result <<= 1;
        if (b[i] == '1')
            result += 1;
    }

    return result;
}
