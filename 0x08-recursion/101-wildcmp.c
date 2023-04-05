/**

wildcmp - compares two strings, one may contain wildcard characters
@s1: first string
@s2: second string, can contain wildcards
Return: 1 if the strings can be considered identical, 0 otherwise
*/
int wildcmp(char *s1, char *s2)
{
    if (s2 == '')
    {
        if (*s1 == '\0')
            return (wildcmp(s1, s2 + 1));
        else
            return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
    }
    else if (*s1 == '\0' || *s2 == '\0')
    {
        return (*s1 == *s2);
    }
    else if (*s1 == *s2)
    {
        return (wildcmp(s1 + 1, s2 + 1));
    }
    else
    {
        return (0);
    }
}
