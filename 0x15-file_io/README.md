# 0x15. C - File I/O

This repository contains exercise files related to file input/output (I/O) in the C programming language. These exercises cover various aspects of file handling, including reading, writing, creating, and manipulating files.

## Table of Contents

- [Task 0: read_textfile](#task-0-read_textfile)
- [Task 1: create_file](#task-1-create_file)
- [Task 2: append_text_to_file](#task-2-append_text_to_file)
- [Task 3: cp](#task-3-cp)
- [Task 4: elf_header](#task-4-elf_header)

## Task 0: read_textfile

File: [0-read_textfile.c](0-read_textfile.c)

Write a function that reads a text file and prints it to the POSIX standard output.

- Prototype: `ssize_t read_textfile(const char *filename, size_t letters);`
- `letters` is the number of letters it should read and print.
- Returns the actual number of letters it could read and print.
- If the file cannot be opened or read, return 0.
- If `filename` is NULL, return 0.
- If write fails or does not write the expected amount of bytes, return 0.

## Task 1: create_file

File: [1-create_file.c](1-create_file.c)

Create a function that creates a file.

- Prototype: `int create_file(const char *filename, char *text_content);`
- `filename` is the name of the file to create, and `text_content` is a NULL-terminated string to write to the file.
- Returns 1 on success, -1 on failure.
- The created file must have permissions: `rw-------`.
- If the file already exists, do not change the permissions.
- If the file already exists, truncate it.
- If `filename` is NULL, return -1.
- If `text_content` is NULL, create an empty file.

## Task 2: append_text_to_file

File: [2-append_text_to_file.c](2-append_text_to_file.c)

Write a function that appends text at the end of a file.

- Prototype: `int append_text_to_file(const char *filename, char *text_content);`
- `filename` is the name of the file, and `text_content` is the NULL-terminated string to add at the end of the file.
- Return 1 on success and -1 on failure.
- Do not create the file if it does not exist.
- If `filename` is NULL, return -1.
- If `text_content` is NULL, do not add anything to the file. Return 1 if the file exists and -1 if the file does not exist or if you do not have the required permissions to write the file.

## Task 3: cp

File: [3-cp.c](3-cp.c)

Write a program that copies the content of a file to another file.

- Usage: `cp file_from file_to`
- If the number of arguments is not correct, exit with code 97 and print "Usage: cp file_from file_to."
- If `file_to` already exists, truncate it.
- If `file_from` does not exist or if you cannot read it, exit with code 98 and print "Error: Can't read from file NAME_OF_THE_FILE."
- If you cannot create or if write to `file_to` fails, exit with code 99 and print "Error: Can't write to NAME_OF_THE_FILE."
- If you cannot close a file descriptor, exit with code 100 and print "Error: Can't close fd FD_VALUE."
- Permissions of the created file: `rw-rw-r--`. If the file already exists, do not change the permissions.
- You must read 1,024 bytes at a time from `file_from` to make fewer system calls. Use a buffer.
- You are allowed to use `dprintf`.

## Task 4: elf_header

File: [100-elf_header.c](100-elf_header.c)

Write a program that displays the information contained in the ELF header at the start of an ELF file.

- Usage: `elf_header elf_filename`
- Displayed information includes: Magic, Class, Data, Version, OS/ABI, ABI Version, Type, Entry point address.
- The format should be the same as `readelf -h` (version 2.26.1).
- If the file is not an ELF file or on error, exit with status code 98 and display a comprehensive error message to stderr.
- You are allowed to use `lseek` once.
- You are allowed to use `read` a maximum of 2 times at runtime.
- You are allowed to have as many functions as you want in your source file.
- You are allowed to use `printf`.

---

These exercises cover various aspects of file I/O in C and provide hands-on experience in working with files and file-related operations.

