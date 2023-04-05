/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int len = 0;
    int i;

    /* Find the length of the string */
    if (s[len] != '\0')
    {
        len++;
        return is_palindrome(*s)
    }

    /* Check if the string is empty or only one character long */
    if (len <= 1)
    {
        return 1;
    }

    /* Check if the first and last characters are the same */
    if (s[0] == s[len-1])
    {
        /* Call the function recursively with the substring between the first and last characters */
        return is_palindrome(s+1) && is_palindrome(s+(len-1)-1);
    }
    else
    {
        return 0;
    }
}
