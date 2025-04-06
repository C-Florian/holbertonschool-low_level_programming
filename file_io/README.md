# Project: File Descriptors and Permissions

## Description

This project focuses on file handling and permissions in C. The objective is to create functions to interact with files using system calls. It involves:

1. **Reading text files** and printing the contents.
2. **Creating a new file** and writing content to it.
3. **Appending text** to an existing file.
4. **Copying the content** from one file to another.

Each task should handle specific errors, use system calls, and manage file permissions.

## Tasks

### 0. `read_textfile`
Write a function that reads a text file and prints it to the POSIX standard output.

- Prototype: `ssize_t read_textfile(const char *filename, size_t letters);`
- Returns the actual number of letters it could read and print.
- If the file cannot be opened or read, return 0.
- If `filename` is `NULL`, return 0.
- If `write` fails or does not write the expected amount of bytes, return 0.

### 1. `create_file`
Create a function that creates a file.

- Prototype: `int create_file(const char *filename, char *text_content);`
- Returns 1 on success, -1 on failure.
- If the file already exists, truncate it.
- If `filename` is `NULL`, return -1.
- If `text_content` is `NULL`, create an empty file.

### 2. `append_text_to_file`
Write a function that appends text at the end of a file.

- Prototype: `int append_text_to_file(const char *filename, char *text_content);`
- Returns 1 on success, -1 on failure.
- If `filename` is `NULL`, return -1.
- If `text_content` is `NULL`, do not add anything to the file.

### 3. `cp`
Write a program that copies the content of one file to another.

- Usage: `cp file_from file_to`
- If the number of arguments is incorrect, exit with code 97 and print the usage.
- If `file_from` does not exist or cannot be read, exit with code 98.
- If `file_to` cannot be created or written to, exit with code 99.
- If the program cannot close a file descriptor, exit with code 100.

## Compilation

All files must be compiled on Ubuntu 20.04 LTS using `gcc` with the following options:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 file_io/*.c -o cp
