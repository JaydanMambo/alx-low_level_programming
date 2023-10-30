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


ssize_t read_textfile(const char *filename, size_t letters);

int _putchar(char c);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void validate_elf(unsigned char *e_ident);
unsigned int lit_to_big_endian(unsigned int x);
void print_entry(unsigned int e_type, unsigned char *e_ident);

#endif /* MAIN_H */
