#ifndef _FILES_
#define _FILES_
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
ssize_t read_textfile(const char *filename, size_t letters);