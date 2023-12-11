#include "shell.h"
/**
*string_length - the length of a string
*@pointer: pointer
*Return: length of s
*/
int string_length(char *pointer)
{
int s = 0;
while (*(pointer + s) != '\0')
{
s++;
}
return (s);
}
