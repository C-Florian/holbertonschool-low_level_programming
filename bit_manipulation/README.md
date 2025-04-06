# Bit Manipulation in C

This project is part of the low-level programming module at Holberton School.  
It focuses on manipulating bits and performing operations on binary numbers in C without using standard functions like `printf`, `%`, or `/`.

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- OS: Ubuntu 20.04 LTS
- Compilation: `gcc` with flags `-Wall -Werror -Wextra -pedantic -std=gnu89`
- No use of global variables
- Max 5 functions per file
- Only allowed functions: `malloc`, `free`, `exit`, `_putchar`
- All header files are include guarded
- Betty style is mandatory

## Files and Functions

| File                 | Function Prototype                                                | Description                              |
|----------------------|-------------------------------------------------------------------|------------------------------------------|
| `0-binary_to_uint.c` | `unsigned int binary_to_uint(const char *b);`                    | Converts binary string to unsigned int   |
| `1-print_binary.c`   | `void print_binary(unsigned long int n);`                        | Prints binary representation of a number |
| `2-get_bit.c`        | `int get_bit(unsigned long int n, unsigned int index);`          | Gets the value of a bit at given index   |
| `3-set_bit.c`        | `int set_bit(unsigned long int *n, unsigned int index);`         | Sets bit at given index to 1             |
| `4-clear_bit.c`      | `int clear_bit(unsigned long int *n, unsigned int index);`       | Sets bit at given index to 0             |
| `5-flip_bits.c`      | `unsigned int flip_bits(unsigned long int n, unsigned long int m);` | Counts bits to flip to convert n to m |

## Usage

You can compile any file with a test main file like so:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 main.c file.c -o output
./output
