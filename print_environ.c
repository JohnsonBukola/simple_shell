#include "shell.h"
/**
 * print_env - it prints all variables of environment
 * Return: Nothing.
 */

void print_env(void)
{
	int i;

	i = 0;
	while (environ[i])
		printf("%s\n", environ[i++]);
}
