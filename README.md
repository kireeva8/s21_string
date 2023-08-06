# s21_string

![s21_stringplus](https://github.com/VoLoK/s21_string/assets/112762382/028849e5-e10f-4f45-b8c9-31c016a975cb)

## Introduction
In this project you will develop your own implementation of the string.h library in C programming language with some additions (with your own implementation of sprintf function). The string.h library is the main C library for string processing. As part of the project you’ll work on tasks with string data and consolidate the structured approach.
| No. | Function | Description |
| --- | -------- | ----------- |
| 1 | `void *memchr(const void *str, int c, size_t n)` | Searches for the first occurrence of the character c (an unsigned char) in the first n bytes of the string pointed to, by the argument str. |
| 2 | `int memcmp(const void *str1, const void *str2, size_t n)` | Compares the first n bytes of str1 and str2. |
| 3 | `void *memcpy(void *dest, const void *src, size_t n)` |Copies n characters from src to dest.|
| 4 | `void *memset(void *str, int c, size_t n)` | Copies the character c (an unsigned char) to the first n characters of the string pointed to, by the argument str.|
| 5 | `char *strncat(char *dest, const char *src, size_t n)` | Appends the string pointed to, by src to the end of the string pointed to, by dest up to n characters long.|
| 6 | `char *strchr(const char *str, int c)` | Searches for the first occurrence of the character c (an unsigned char) in the string pointed to, by the argument str. |
| 7 | `int strncmp(const char *str1, const char *str2, size_t n)` | Compares at most the first n bytes of str1 and str2. |
| 8 | `char *strncpy(char *dest, const char *src, size_t n)` | Copies up to n characters from the string pointed to, by src to dest. |
| 9 | `size_t strcspn(const char *str1, const char *str2)` | Calculates the length of the initial segment of str1 which consists entirely of characters not in str2. |
| 10 | `char *strerror(int errnum)` | Searches an internal array for the error number errnum and returns a pointer to an error message string. You need to declare macros containing arrays of error messages for mac and linux operating systems. Error descriptions are available in the original library. Checking the current OS is carried out using directives. |
| 11 | `size_t strlen(const char *str)` | Computes the length of the string str up to but not including the terminating null character. |
| 12 | `char *strpbrk(const char *str1, const char *str2)` | Finds the first character in the string str1 that matches any character specified in str2. |
| 13 | `char *strrchr(const char *str, int c)` | Searches for the last occurrence of the character c (an unsigned char) in the string pointed to by the argument str. |
| 14 | `char *strstr(const char *haystack, const char *needle)` | Finds the first occurrence of the entire string needle (not including the terminating null character) which appears in the string haystack. |
| 15 | `char *strtok(char *str, const char *delim)` | Breaks string str into a series of tokens separated by delim. |  

 ## sprintf Specifiers

| No. | Specifier | Sprintf output |
| :---: | :---: | ----------- |
| 1 | с | Character |
| 2 | d | Signed decimal integer |
| 3 | o | Unsigned octal |
| 4 | f | Decimal floating point |
| 5 | s | String of characters |
| 6 | u | Unsigned decimal integer |
| 7 | X | Unsigned hexadecimal integer (capital letters) |
| 8 | x | Unsigned hexadecimal integer |
| 9 | n | Number of characters printed until %n occurs |
| 10 | % | Character % |

## sprintf Flags

| No.| Flags | Description |
| :---: | :---: | ----------- |
| 1 | - |  Left-justify within the given field width; Right justification is the default (see width sub-specifier). |
| 2 | + | Forces to precede the result with a plus or minus sign (+ or -) even for positive numbers. By default, only negative numbers are preceded with a -ve sign. |
| 3 | (space) | If no sign is going to be written, a blank space is inserted before the value. |

## sprintf Length Description

| No. | Length | Description |
| :---: | :---: | ----------- |
| 1 | h | The argument is interpreted as a short int or unsigned short int (only applies to integer specifiers: i, d, o, u, x and X). |
| 2 | I | The argument is interpreted as a long int or unsigned long int for integer specifiers (i, d, o, u, x and X), and as a wide character or wide character string for specifiers c and s. |

## Special string processing functions (from the String class in C#)

| No. | Function | Description |
| --- | -------- | ----------- |
| 1 | `void *to_upper(const char *str)` | Returns a copy of string (str) converted to uppercase. In case of any error, return NULL |
| 2 | `void *to_lower(const char *str)` | Returns a copy of string (str) converted to lowercase. In case of any error, return NULL |
| 3 | `void *insert(const char *src, const char *str, size_t start_index)` | Returns a new string in which a specified string (str) is inserted at a specified index position (start_index) in the given string (src). In case of any error, return NULL |
| 4 | `void *trim(const char *src, const char *trim_chars)` | Returns a new string in which all leading and trailing occurrences of a set of specified characters (trim_chars) from the given string (src) are removed. In case of any error, return NULL |

## Implementation of the string.h library functions
### The functions of the string.h library described above are implemented, with the following requirements:

- The library must be developed in C language of C11 standard using gcc compiler
- Do not use outdated and legacy language constructions and library functions. Pay attention to the legacy and obsolete marks in the official documentation on the language and the libraries used. Use the POSIX.1-2017 standard.
- When writing code it is necessary to follow the Google style
- Make it as a static library (with the header file s21_string.h)
- The library must be developed in accordance with the principles of structured programming, duplication in the code must be avoided
- Prepare a full coverage of the library's functions by unit-tests using the Check library
- Test's code and the executable file must be located in the src folder or its any subfolder
- Unit-tests must check the results of your implementation by comparing them with the implementation of the standard string.h library
- Unit tests must cover at least 80% of each function (checked using gcov)
- Provide a Makefile for building the library and tests (with the targets all, clean, test, s21_string.a, gcov_report)
- The gcov_report target should generate a gcov report in the form of an html page. Unit tests must be run with gcov flags to do this
- Use prefix s21_ before each function
- It is forbidden to copy the implementation of the standard string.h library and other string processing libraries and to use them anywhere, except unit-tests
- It is forbidden to use system errors arrays, including those not specified in POSIX (sys_nerr, sys_errlist). Instead, you need to implement your own platform-specific errors arrays, as it was mentioned in the description of the strerror function


 
