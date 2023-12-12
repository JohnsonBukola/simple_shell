#include "shell.h"
/**
**str_chr - finds a character in a string
*@s: string to be checked
*@c: character to be located
*Return: pointer to the first of NULL if no character found
*/
char *str_chr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return (0);
}
