#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: b is pointing to a string of 0 and 1 chars
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
    if (b == NULL) {
        return 0; 
    }

    unsigned int result = 0;

    for (int i = 0; b[i] != '\0'; i++) {
        if (b[i] == '0') {
            result = result * 2;
        } else if (b[i] == '1') {
            result = result * 2 + 1;
        } else {
            return 0;
        }
    }

    return result;
}
