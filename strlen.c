#include "shell.h"
/**
*str_len - length of a string
*@pointer: pointer
*Return: length of s
*/
int str_len(char *pointer)
{
int s = 0;
while (*(pointer + s) != '\0')
{
s++;
}
return (s);
}
