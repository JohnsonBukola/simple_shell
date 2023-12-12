#include "shell.h"
/**
*_strcmp - this compares two string
*@s1: the first string
*@s2: the second string
*Return: Always 0
*/
int _strcmp(char *s1, char *s2)
{
int res, i = 0;
while (s1[i] == s2[i])
{
if (s1[i] == '\0' && s2[i] == '\0')
{
break;
}
i++;
}
res = s1[i] - s2[i];
return (res);
}
