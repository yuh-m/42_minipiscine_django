/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 23:57:49 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/12/04 00:07:01 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

# define MAX_FD 1024
# define BUFFER_SIZE 1024

/**
* @brief The isalpha() function checks whether a character is an alphabet or not.
* @param c argument to check
* @return 0	If the parameter isn't an alphabet
* "NonZero"	If the parameter is an alphabet.
*/
int		ft_isalpha(int c);

/**
* @brief Checks whether a character is numeric character (0-9) or not.
* @param c argument to check
* @return 0 	Argument is not a numeric character
* "NonZero"	Argument is a numeric character.
*/
int		ft_isdigit(int c);

/**
* @brief The isalnum() function checks whether the argument passed
* is an alphanumeric character (alphabet or number) or not.
* @param c argument to check
* @return Returns 0 if argument is neither an alphabet nor a digit.
* Returns "NonZero" if argument is an alphanumeric character.
*/
int		ft_isalnum(int c);

/**
* @brief isascii in c checks the passed value is ascii character or not.
* @param c argument to check
* @return This function returns non-zero value if passed value is ascii character
* otherwise zero.
*/
int		ft_isascii(int c);

/**
* @brief The isprint() function checks whether a character is a printable
* character or not.
* @param c argument to check
* @return If a character passed to isprint() is a printable character,
* it returns non-zero integer, if not it returns 0.
*/
int		ft_isprint(int c);

/**
* @brief Calculates the length of a given string.
* @param string as an argument
* @return returns its length
*/
size_t	ft_strlen(const char *string);

/**
* @brief Used to fill a block of memory with a particular value
* @param s: Starting address of memory to be filled
* @param c value to be filled
* @param n number of bytes to be filled starting on *s
* @return void
*/
void	*ft_memset(void *s, int c, size_t n);

/**
* @brief The bzero() function shall place n zero-valued bytes in 
* the area pointed to by s.
* @param s: An existing object that you want to fill with zeroes
* @param n: The number of bytes to fill
* @return void
*/
void	*ft_bzero(void *s, size_t n);

/**
* @brief Copies n characters from memory area src to memory area dest.
* @param dest − This is pointer to the destination array where the 
* content is to be copied, type-casted to a pointer of type void*.
* @param src − This is pointer to the source of data to be copied, type-casted
* to a pointer of type void*
* @param n − This is the number of bytes to be copied.
* @return void
*/
void	*ft_memcpy(void *dest, const void *src, size_t n);

/**
* @brief copies n characters from str2 to str1, but for 
* overlapping memory blocks
* @param dest − This is a pointer to the destination array where the 
* content is to be copied, type-casted to a pointer of type void*.
* @param src − This is a pointer to the source of data to be copied, 
* type-casted to a pointer of type void*.
* @param n − This is the number of bytes to be copied
* @return void
*/
void	*ft_memmove(void *dest, const void *src, size_t n);

/**
* @brief takes the full size of the buffer, not only the length, 
* and terminates the result with NUL as long as size is greater than 0.
* Include a byte for the NUL in your size value.
* @param dest - Pointer to the destination area of memory
* @param src - Pointer to the source area of memory
* @param n - Buffer size in bytes
* @return Total length of the string that would have been copied if 
* there was unlimited space.
*/
size_t	ft_strlcpy(char *dest, const char *src, size_t n);

/**
* @brief Appends the NULL-terminated string src to the end of dst. It will
* append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.
* @param dest - Pointer to the destination area of memory
* @param src - Pointer to the source area of memory
* @param n - Buffer size in bytes
* @return Total length of the string that would have been copied if 
* there was unlimited space.
*/
size_t	ft_strlcat(char *dest, const char *src, size_t n);

/**
* @brief converts a lowercase alphabet to an uppercase alphabet
* @param c as an argument
* @return corresponding uppercase character
*/
int		ft_toupper(int c);

/**
* @brief converts a UpperCase alphabet to an lower alphabet
* @param c as an argument
* @return corresponding lowercase character
*/
int		ft_tolower(int c);

/**
* @brief Searches for the first occurrence of the character c 
* (an unsigned char) in the string pointed to by the argument str.
* @param str - This is the C string to be scanned.
* @param c This is the character to be searched in str
* @return This returns a pointer to the first occurrence of the 
* character c in the string str, or NULL if the character is not found
*/
char	*ft_strchr(const char *s, int c);

/**
* @brief Searches for the last occurrence of the character c 
* (an unsigned char) in the string pointed to, by the argument str.
* @param str − This is the C string.
* @param c − This is the character to be located. It is passed as its int 
* promotion, but it is internally converted back to char.
* @return pointer to the last occurrence of character in str.
*/
char	*ft_strrchr(const char *s, int c);

/**
* @brief Compares at most the first n bytes of str1 and str2.
* @param s1 − This is the first string to be compared.
* @param s2 − This is the second string to be compared.
* @param n − The maximum number of characters to be compared.
* @return if Return value < 0 then it indicates str1 is less than str2.
*if Return value > 0 then it indicates str2 is less than str1.
*if Return value = 0 then it indicates str1 is equal to str2.
*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/**
* @brief searches for the first occurrence of the character c (an unsigned 
* char) in the first n bytes of the string pointed to, by the argument str.
* @param s Pointer to the block of memory where the search is performed.
* @param c - Value to be located. The value is passed as an int, but the 
* function performs a byte per byte search using the unsigned char
* conversion of this value.
* @param n - Number of bytes to be analyzed. size_t is an unsigned 
* integral type.
* @return This function returns a pointer to the matching byte or NULL 
* if the character does not occur in the given memory area.
*/
void	*ft_memchr(const void *s, int c, size_t n);

/**
* @brief Compares the first n bytes of memory area str1 and memory area str2
* @param s1 − This is the pointer to a block of memory.
* @param s2 − This is the pointer to a block of memory.
* @param n − This is the number of bytes to be compared.
* @return if Return value < 0 then it indicates str1 is less than str2.
*if Return value > 0 then it indicates str2 is less than str1.
*if Return value = 0 then it indicates str1 is equal to str2.
*/
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/**
* @brief locates the first occurrence of the null-terminated
* string little in the null-terminated string big.
* @param dest - String to be searched by `little`
* @param src - String to search in `big`
* @param len - Number of bytes to search
* @return If little is an empty string, big is returned; if little occurs 
* nowhere * in big, NULL is returned; otherwise a pointer to the first 
* character of the first occurrence of little is returned.
*/
char	*ft_strnstr(const char	*dest, const char *src, size_t len);

/**
* @brief converts the string argument str to an integer (type int).
* @param nptr − This is the string representation of an integral number.
* @return This function returns the converted integral number as an int 
* value. If no valid conversion could be performed, it returns zero.
*/
int		ft_atoi(const char *nptr);

/**
* @brief allocates the requested memory and returns a pointer to it. 
* The difference in malloc and calloc is that malloc does not set the 
* memory to zero where as calloc sets allocated memory to zero.
* @param nmemb − This is the number of elements to be allocated.
* @param size - This is the size of elements.
* @return void
*/
void	*ft_calloc(size_t nmemb, size_t size);

/**
* @brief Duplicate String
* @param s to start of the string to be copied
* @return A pointer to a new string
*/
char	*ft_strdup(const char *s);

//part 2 - additional functions

/**
* @brief Allocates (with malloc(3)) and returns a substring
*from the string ’s’. The substring begins at index ’start’ 
*and is of maximum size ’len’.
* @param s: The string from which to create the substring.
* @param start: The start index of the substring in the string ’s’.
* @param len: The maximum length of the substring.
* @return The substring. NULL if the allocation fails.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len);

/**
* @brief Allocates (with malloc(3)) and returns a new
* string, which is the result of the concatenation
* of ’s1’ and ’s2’.
* @param s1: The prefix string.
* @param s2: The suffix string.
* @return The new string.
NULL if the allocation fails.
*/
char	*ft_strjoin(char const *s1, char const *s2);

/**
* @brief Allocates (with malloc(3)) and returns a copy of
*’s1’ with the characters specified in ’set’ removed
*from the beginning and the end of the string.
* @param s1: The string to be trimmed.
* @param set: The reference set of characters to trim.
* @return The trimmed string.
* NULL if the allocation fails.
*/
char	*ft_strtrim(char const *s1, char const *set);

/**
* @brief Allocates (with malloc(3)) and returns an array
*of strings obtained by splitting ’s’ using the
*character ’c’ as a delimiter. The array must end
*with a NULL pointer.
* @param s: The string to be split.
* @param c: The delimiter character.
* @return The array of new strings resulting from the split.
* NULL if the allocation fails.
*/
char	**ft_split(char const *s, char c);

/**
* @brief Allocates (with malloc(3)) and returns a string
* representing the integer received as an argument.
* Negative numbers must be handled.
* Is used to convert int data type to string data type in C.
* @param n: the integer to convert
* @return The string representing the integer.
* NULL if the allocation fails.
*/
char	*ft_itoa(int n);

/**
* @brief Applies the function ’f’ to each character of the
* string ’s’, and passing its index as first argument
* to create a new string (with malloc(3)) resulting
* from successive applications of ’f’.
* @param s: The string on which to iterate.
* @param f: The function to apply to each character.
* @return The string created from the successive applications
* of ’f’. *Returns NULL if the allocation fails.
*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/**
* @brief Applies the function ’f’ on each character of
* the string passed as argument, passing its index
* as first argument. Each character is passed by
* address to ’f’ to be modified if necessary.
* @param s: The string on which to iterate.
* @param f: The function to apply to each character.
* @return void
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/**
* @brief Outputs the character ’c’ to the given file
* descriptor.
* @param c: The character to output.
* @param fd: The file descriptor on which to write.
* @return void
*/
void	ft_putchar_fd(char c, int fd);

/**
* @brief Outputs the string ’s’ to the given file
* descriptor.
* @param s: The string to output.
* @param fd: The file descriptor on which to write.
* @return void
*/
void	ft_putstr_fd(char *s, int fd);

/**
* @brief Outputs the string ’s’ to the given file descriptor
* followed by a newline.
* @param s: The string to output.
* @param fd: The file descriptor on which to write.
* @return void
*/
void	ft_putendl_fd(char *s, int fd);

/**
* @brief Outputs the integer ’n’ to the given file
* descriptor.
* @param n: The integer to output.
* @param fd: The file descriptor on which to write.
* @return void
*/
void	ft_putnbr_fd(int n, int fd);

// GNL project //

/**
* @brief Reads a fd and get the string till a new line is found
* @param fd: The file descriptor on which to write.
* @return a string
*/
char	*get_next_line(int fd);

//printf project //

/**
* @brief Return the lenght of an unsigned number
* @param number: unsigned number
* @return int
*/
int		ft_len_unsigned(unsigned int number);

/**
* @brief Transfrom a number to a string following the base change
* @param number: unsigned number
* @param base: base number to transform (eg. 012345689)
* @return char *
*/
char	*ft_itoa_base(unsigned long long number, char *base);

/**
* @brief print on terminal a set of charathers
* @return number of bytes/char printed
*/
int		ft_printf(const char *format, ...);

/**
* @brief print on terminal a set of charathers
* @return number of bytes/char printed
*/
int		ft_print_char(char chr);

/**
* @brief print on terminal a set of charathers
* @return number of bytes/char printed
*/
int		ft_print_string(char *chr);

/**
* @brief print on terminal a set of charathers
* @return number of bytes/char printed
*/
int		ft_print_integer(int number);

/**
* @brief print on terminal a set of charathers
* @return number of bytes/char printed
*/
int		ft_print_unsigned_int(unsigned int number);

/**
* @brief print on terminal a set of charathers
* @return number of bytes/char printed
*/
int		ft_print_pointer(void *pointer);

/**
* @brief print on terminal a hexadecimal number
* @return number of bytes/char printed
*/
int		ft_print_x(unsigned int number, char specifier);

/**
* @brief write on fd an unsgined integer
* @return void
*/
void	ft_putnbr_unsig(unsigned int u, int fd);

/**
* @brief print on the fd a set of charathers
* @return number of bytes/char printed
*/
int		ft_fprintf(int fd, const char *format, ...);

/**
* @brief print on fd a set of charathers
* @return number of bytes/char printed
*/
int		ft_fprint_char(int fd, char chr);

/**
* @brief print on terminal a set of charathers
* @return number of bytes/char printed
*/
int		ft_fprint_string(int fd, char *chr);

/**
* @brief print on terminal a set of charathers
* @return number of bytes/char printed
*/
int		ft_fprint_integer(int fd, int number);

/**
* @brief print on terminal a set of charathers
* @return number of bytes/char printed
*/
int		ft_fprint_unsigned_int(int fd, unsigned int number);

/**
* @brief print on terminal a set of charathers
* @return number of bytes/char printed
*/
int		ft_fprint_pointer(int fd, void *pointer);

/**
* @brief print on terminal a hexadecimal number
* @return number of bytes/char printed
*/
int		ft_fprint_x(int fd, unsigned int number, char specifier);

#endif
