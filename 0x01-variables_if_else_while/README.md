# 0x01. C - Variables, if, else, while  

## Description  

This project introduces fundamental concepts in C programming, focusing on variables, conditional statements, loops, and operators. By the end of this project, you should be able to use arithmetic, logical, and relational operators, understand how boolean values work in C, and implement simple loops and conditional statements.  

## Learning Objectives  

By completing this project, you will be able to:  

- Understand and use arithmetic operators.  
- Utilize logical (boolean) and relational operators.  
- Differentiate between TRUE and FALSE values in C.  
- Use `if` and `if...else` statements.  
- Write comments to improve code readability.  
- Declare and assign values to `char`, `int`, and `unsigned int` variables.  
- Print values using `printf`.  
- Implement and control loops using `while`.  
- Work with ASCII characters.  
- Understand the purpose of `gcc` flags `-m32` and `-m64`.  

## Requirements  

- **Editors**: vi, vim, emacs  
- **OS**: Ubuntu 20.04 LTS  
- **Compiler**: gcc with `-Wall -Werror -Wextra -pedantic -std=gnu89` flags  
- **Coding Style**: Betty style (checked using `betty-style.pl` and `betty-doc.pl`)  
- **No Warnings/Errors**: Code must compile without warnings or errors.  
- **Restrictions**:  
  - No use of `system` function.  
  - All files must end with a new line.  

---

## Tasks  

### **0. Positive anything is better than negative nothing**  
- Program assigns a random number to `n` and prints if it is positive, zero, or negative.  
- File: `0-positive_or_negative.c`  

### **1. The last digit**  
- Program prints the last digit of `n` and categorizes it.  
- File: `1-last_digit.c`  

### **2. The alphabet game**  
- Prints lowercase alphabet using `putchar`.  
- File: `2-print_alphabet.c`  

### **3. alphABET**  
- Prints lowercase and uppercase alphabets using `putchar`.  
- File: `3-print_alphabets.c`  

### **4. Alphabet soup**  
- Prints lowercase alphabet except 'q' and 'e'.  
- File: `4-print_alphabt.c`  

### **5. Numbers**  
- Prints single-digit numbers of base 10.  
- File: `5-print_numbers.c`  

### **6. Numberz**  
- Prints single-digit numbers using `putchar`, without char variables.  
- File: `6-print_numberz.c`  

### **7. Smile in the mirror**  
- Prints the lowercase alphabet in reverse.  
- File: `7-print_tebahpla.c`  

### **8. Hexadecimal**  
- Prints numbers of base 16 in lowercase.  
- File: `8-print_base16.c`  

### **9. Combinations of single-digit numbers**  
- Prints all possible combinations of single-digit numbers.  
- File: `9-print_comb.c`  

### **10. Two-digit combinations** *(Advanced)*  
- Prints all different combinations of two digits.  
- File: `100-print_comb3.c`  

### **11. Three-digit combinations** *(Advanced)*  
- Prints all different combinations of three digits.  
- File: `101-print_comb4.c`  

### **12. Two two-digit numbers** *(Advanced)*  
- Prints all possible combinations of two two-digit numbers.  
- File: `102-print_comb5.c`  

---

## Compilation and Execution  

To compile any program, use:  
```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <filename.c> -o <output_name>
./<output_name>
```

Example:  
```sh
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
./0-positive_or_negative
```

## Repository Information  

- **GitHub Repository**: [alx-low_level_programming](https://github.com/your_github_username/alx-low_level_programming)  
- **Project Directory**: `0x01-variables_if_else_while`  

---

### **Author**  
This project is part of the ALX Software Engineering program.
