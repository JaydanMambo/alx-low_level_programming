# 0x12. C - Singly linked lists
This repository contains exercises completed as part of the ALX Software Engineering course related to singly linked lists in C.

## Files and Descriptions
### 0-print_list.c
* Function print_list prints all the elements of a list_t list.
* Prototype: size_t print_list(const list_t *h);
* Returns: the number of nodes
* Format: See example
* If str is NULL, it prints [0] (nil)
### 1-list_len.c
* Function list_len returns the number of elements in a linked list_t list.
* Prototype: size_t list_len(const list_t *h);
### 2-add_node.c
* Function add_node adds a new node at the beginning of a list_t list.
* Prototype: list_t *add_node(list_t **head, const char *str);
* Returns: the address of the new element, or NULL if it failed
* str needs to be duplicated
* You are allowed to use strdup
### 3-add_node_end.c
* Function add_node_end adds a new node at the end of a list_t list.
* Prototype: list_t *add_node_end(list_t **head, const char *str);
* Returns: the address of the new element, or NULL if it failed
* str needs to be duplicated
* You are allowed to use strdup
### 4-free_list.c
* Function free_list frees a list_t list.
* Prototype: void free_list(list_t *head);
### 100-first.c
* Function that prints "You're beat! and yet, you must allow,\nI bore my house upon my back!\n" before the main function is executed.
* You are allowed to use the printf function.
### 101-hello_holberton.asm
* A 64-bit program in assembly that prints "Hello, Holberton," followed by a new line.
* You are only allowed to use the printf function.
* You are not allowed to use interrupts.
* Your program will be compiled using nasm and gcc.
