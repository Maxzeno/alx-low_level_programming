#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: input string
 * Return: length of s
 */
int _strlen_recursion(char *s)
{
    if (*s == '\0')
        return (0);
    return (_strlen_recursion(s + 1) + 1);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: input string
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int len = _strlen_recursion(s);
    if (len <= 1)
        return (1);
    if (*s != *(s + len - 1))
        return (0);
    *(s + len - 1) = '\0';
    return (is_palindrome(s + 1));
}
