# 0x0B. C - malloc, free

## Description
This repository contains solutions to the tasks assigned in the **0x0B. C - malloc, free** project. The project focuses on memory allocation in C and the use of `malloc` and `free` functions.

## Learning Objectives
- Understand the difference between automatic and dynamic allocation
- Understand the usage of `malloc` and `free` functions
- Know when and why to use `malloc`
- Learn how to use valgrind to check for memory leaks

## Requirements
- Allowed editors: vi, vim, emacs
- All files are compiled on Ubuntu 20.04 LTS using gcc with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory
- Code should use the Betty style and will be checked using `betty-style.pl` and `betty-doc.pl`
- Global variables are not allowed
- Each function should have no more than 5 functions
- Only the `malloc` and `free` functions from the C standard library are allowed. Any use of other functions such as `printf`, `puts`, `calloc`, `realloc`, etc. is forbidden
- `_putchar` function is allowed, provided that it is not pushed to the repository
- The prototypes of all functions and the `_putchar` function should be included in the header file `main.h`

## Files
The following files are present in the repository:

### 0-create_array.c
- Function that creates an array of chars and initializes it with a specific char.
- Prototype: `char *create_array(unsigned int size, char c);`

### 1-strdup.c
- Function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
- Prototype: `char *_strdup(char *str);`

### 2-str_concat.c
- Function that concatenates two strings.
- Prototype: `char *str_concat(char *s1, char *s2);`

### 3-alloc_grid.c
- Function that returns a pointer to a 2-dimensional array of integers.
- Prototype: `int **alloc_grid(int width, int height);`

### 4-free_grid.c
- Function that frees a 2-dimensional grid previously created by the `alloc_grid` function.
- Prototype: `void free_grid(int **grid, int height);`

