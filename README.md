# [0x11. C - printf](https://github.com/leulyk/printf) - (Not fully implemented)

This is a custom printf function built as a project for the alx software engineering program. 

## Contributors
	
	Shelter V  Mashonganyika
	Leul Yiheyis
	
## Authorized functions and macros

> write, malloc, free, va_start, va_end, va_copy, va_arg

## Code will be compiled this way:

> $ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

## Tasks

- [x] **0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life**

	> Write a function that produces output according to a format.

		Prototype: int _printf(const char *format, ...);

		Returns: the number of characters printed (excluding the null byte used to end output to strings)

		Write output to stdout, the standard output stream

		Handle the conversion specifiers c, s, %

- [x] **1. Education is when you read the fine print. Experience is what you get if you don't**

	> Handle the following conversion specifiers: d, i
	
- [x] **2. Just because it's in print doesn't mean it's the gospel**

	> Create a man page. 
	
- [x] **3. With a face like mine, I do better in print**

	> Handle the following custom conversion specifiers:

    		b: the unsigned int argument is converted to binary

- [x] **4. What one has not experienced, one will never understand in print**

	> Handle the following conversion specifiers: u, o, x, X

- [ ] **5. Nothing in fine print is ever good news**

	> Use a local buffer of 1024 chars in order to call write as little as possible.

- [ ] **6. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print**

	> Handle the following conversion specifier: p

- [x] **7. My weakness is wearing too much leopard print**

	> Handle the following custom conversion specifier:

    		S : prints the string.
    		Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x,
		followed by the ASCII code value in hexadecimal (upper case - always 2 characters)


- [ ] **The big print gives and the small print takes away**

	> Handle the following flag characters for non-custom conversion specifiers: +, space, #

- [x] **9. Sarcasm is lost in print**

	> Handle the following length modifiers for non-custom conversion specifiers: l, h

		Conversion specifiers to handle: d, i, u, o, x, X

- [ ] **10. Print some money and give it to us for the rain forests**

	> Handle the field width for non-custom conversion specifiers.

- [ ] **11. The negative is the equivalent of the composer's score, and the print the performance**

	> Handle the precision for non-custom conversion specifiers.

- [ ] **12. It's depressing when you're still around and your albums are out of print**

	> Handle the 0 flag character for non-custom conversion specifiers.

- [ ] **13. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection**

	> Handle the - flag character for non-custom conversion specifiers.

- [x] **14. Print is the sharpest and the strongest weapon of our party**

	> Handle the following custom conversion specifier: r (prints the reversed string)

- [x] **15. The flood of print has turned reading into a process of gulping rather than savoring**

	> Handle the following custom conversion specifier: R (prints the rot13'ed string)

- [ ] **16. (All the above options work well together.)**
