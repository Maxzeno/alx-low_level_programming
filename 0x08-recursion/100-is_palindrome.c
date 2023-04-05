/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int len = 0, i;

    /* Get length of string */
    while (*(s + len))
        len++;

    /* Check if string is a palindrome */
    for (i = 0; i < len / 2; i++)
    {
        if (*(s + i) != *(s + len - 1 - i))
            return (0);
    }

    return (1);
}
