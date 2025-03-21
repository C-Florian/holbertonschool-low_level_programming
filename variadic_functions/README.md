# Variadic Functions in C  

This project focuses on the use of variadic functions in C programming. It includes various functions that demonstrate how to handle a variable number of arguments using macros from `<stdarg.h>`.  

## Files  

### `0-sum_them_all.c`  
- **Function:** `sum_them_all`  
- **Description:** Returns the sum of all its parameters.  

### `1-print_numbers.c`  
- **Function:** `print_numbers`  
- **Description:** Prints numbers followed by a new line, using a separator if provided.  

### `2-print_strings.c`  
- **Function:** `print_strings`  
- **Description:** Prints strings followed by a new line, replacing `NULL` strings with `(nil)`.  

### `3-print_all.c`  
- **Function:** `print_all`  
- **Description:** Prints various data types (char, int, float, string) based on a specified format.  

### `variadic_functions.h`  
- **Description:** Header file containing function prototypes and necessary includes.  

## Compilation  

Compile with:  
```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <source_files> -o <output_file>
