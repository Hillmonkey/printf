<p align="center">
<img src="https://pbs.twimg.com/profile_images/644908719050850305/LbLzZ2vf.jpg" alt="Holberton's logo"/>
</p>

# 0x10. C - Printf #

### Team Members ###
* "Jeffrey Kanemitsu" https://github.com/jeffreykanemitsu
* "Larry Madeo" https://github.com/Hillmonkey

### Objectives ###
* Create our own custom implementation of printf that is in the standard library`<stdio.h>`.
* Understand all concepts used in order to complete this project such as: variadic functions, typedef structs, function pointers, etc.

### Compilation ###
* The code will be compiled using:
`gcc -Wall -Werror -Wextra -pedantic *.c`
### Requirements ###
* [ ] Not allowed to use global variables
* [ ] No more than 5 functions per file
* [ ] The prototypes of all your functions should be included in your header file called holberton.h
* [ ] All your header files should be include guarded
* [ ] Authorized functions and macros:
	* write (man 2 write)
	* malloc (man 3 malloc)
	* free (man 3 free)
	* `va_start (man 3 va_start)`
	* `va_end (man 3 va_end)`
	* `va_copy (man 3 va_copy)`
	* `va_arg (man 3 va_arg)`
* [ ] Have to use own `_putchar` function

### Tasks ###
#### Mandatory ####

0. **I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life**

	* [ ] Write a function that produces output according to a format.
	* [ ] **Prototype**: int `_printf(const char *format, ...);`
	* [ ] Returns: the number of characters printed (excluding the null byte used to end output to strings)
	* [ ] format is a character string. The format string is composed of zero or more directives
	* [ ] You need to handle the following conversion sepcifiers:
		* [ ] c
		* [ ] s
		* [ ] %

#### Mandatory ####

1. **Education is when you read the fine print. Experience is what you get if you don't.**

	* [ ] Handle the following conversion specifiers:
		* [ ] d
		* [ ] i

#### Mandatory ####

2. **With a face like mine, I do better in print**

	* [ ] Create a man page for your function.
	* [ ] File name: `man_3_printf`

### Version ###
v.01
