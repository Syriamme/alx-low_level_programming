#ifndef MAIN_H
#define MAIN_H



#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);
#endif /*MAIN_H*/