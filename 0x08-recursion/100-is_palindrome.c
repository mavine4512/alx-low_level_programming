#include "main.h"

int _strlen_recursion(char *s);
int help_chack_pal(char *s, int i, int len);

/**
 * is_palindrome - check if string is palindrome
 * @s: string input
 *
 * Return: 0 it is not palindrome
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (help_chack_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - A function that chack if s is a palindrome string
 * @s: An input tsring
 * Return: i if is a string palindrome or  0 in otherwise
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * help_chack_pal - A function with a revesed string
 * @s: an input string
 * @len:length of string
 * @i: iterator
 * Return: reverse string
 */
int help_chack_pal(char *s, int i,  int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (help_chack_pal(s, i + 1, len - 1));
}
