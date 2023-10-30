#ifndef MAIN_H
#define MAIN_H
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>


/* Task 0: read_textfile */
ssize_t read_textfile(const char *filename, size_t letters);

/* Task 1: create_file */
int create_file(const char *filename, char *text_content);

/* Task 2: append_text_to_file */
int append_text_to_file(const char *filename, char *text_content);

/* Task 3: cp */
int copy_file(const char *file_from, const char *file_to);

/* Task 4: elf_header */
int elf_header(const char *elf_filename);

ssize_t read_textfile(const char *filename, size_t letters);

#endif /* MAIN_H */
