Custom printf function 
------------------------------------------------------------------------------------------------
Built as a project for the alx software engineering program. 

By Shelter Mashonganyika and Leul Yiheyis

Authorized functions and macros
> write, malloc, free, va_start, va_end, va_copy, va_arg

Code will be compiled this way:
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

Task 0: Write a function that produces output according to a format.
	Prototype: int _printf(const char *format, ...);
	Returns: the number of characters printed
		(excluding the null byte used to end output to strings)
	Write output to stdout, the standard output stream
	Handle the conversion specifiers c, s, %

Task 1: Handle the conversion specifiers d and i

Task 2: Create a man page

Task 3: Handle the conversion of unsigned int to binary using b

Task 4: Handle the conversion specifiers u, o, x, X

Task 5: Use a local buffer of 1024 chars in order to call write as little as possible

Task 6: Handle the conversion specifier p

Task 7: Handle the custom conversion specifier s

Task 8: Handle +, space and # as flag character for non-custom conversion specifiers

Task 9: Handle length modifiers l and h for d, i, u, o, x, X

Task 10: Handle the field width for non-custom conversion specifiers

Task 11: Handle the precision for non-custom conversion specifiers

Task 12: Handle the 0 flag for non-custom conversion specifiers

Task 13: Handle the - flag for non-custom conversion specifiers

Task 14: Handle the custom conversion specifier r for reversing a string

Task 15: Handle the custom conversion specifier R for printing rot13'ed string

Task 16: All the above options work together
