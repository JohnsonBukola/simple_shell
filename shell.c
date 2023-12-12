#include "shell.h"
/**
*main - this is program entry point
*@ac: argument counter
*@av: argument vector
*@arr: refers to strings of array
*Return: always 0
*/

int main(int ac __attribute__((unused)), char *av[], char *arr[])
{
char *buffer = NULL;
size_t bufsize = 0;
int status;
pid_t child_pid;
signal(SIGINT, SIG_IGN);
while (1)
{
if (isatty(STDIN_FILENO))
printf("~$ ");
if (getline(&buffer, &bufsize, stdin) == -1)
break;
if (buffer == NULL)
exit(0);
av = parse_input_str(buffer);
if (!av[0])
{
free(av);
continue;
}
if (_strcmp(av[0], "env") == 0)
{
print_env(), free(av);
continue;
}
if (_strcmp(av[0], "exit") == 0)
free(av), free(buffer), exit(0);
child_pid = fork();
if (child_pid == 0)
{
if (str_chr(av[0], '/') == NULL)
av[0] = search_path(av[0]);
if (execve(av[0], av, arr))
{
perror("execve"), exit(EXIT_FAILURE);
break;
}
}
wait(&status), free(av);
}
free(buffer);
return (0);
}
