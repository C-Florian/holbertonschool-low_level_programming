# Singly Linked Lists - Print List

## Description
This project involves implementing a function to print all the elements of a singly linked list of type `list_t`. The function traverses the list and displays the stored strings along with their lengths. If a node contains a `NULL` string, it outputs `[0] (nil)`.

## File Structure
- `lists.h` - Header file containing the structure definition and function prototypes.
- `0-print_list.c` - Implementation of the `print_list` function.
- `0-main.c` - Test file to verify the function.

## Data Structure
```c
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```

## Function Prototype
```c
size_t print_list(const list_t *h);
```
- **h**: Pointer to the head of the list.
- **Returns**: The number of nodes in the list.

## Compilation
To compile the program, use:
```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-print_list.c -o print_list
```

## Example Usage
```sh
./print_list
```
**Expected Output:**
```
[5] Hello
[5] World
-> 2 elements

[0] (nil)
[5] World
-> 2 elements
```

## Project Requirements
- Follow Betty coding style.
- No global variables.
- Maximum of 5 functions per file.
- Allowed functions: `malloc`, `free`, `exit`, `printf` (only in `print_list`).
- Header file `lists.h` must be include-guarded.

## Author
Chéreau Florian


