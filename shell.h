#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
extern char **environ;
#include <string.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
void print_env(void);
int _strcmp(char *s1, char *s2);
char *search_path(char *cmd);
char **parse_input_str(char *buffer);
char *_str_cat(char *dest, char *src, int n);
char *_strcat(char *dest, char *src);
int str_len(char *pointer);
char *str_chr(char *s, char c);
char *find_path(ino_t *, char *, char *);
#endif
