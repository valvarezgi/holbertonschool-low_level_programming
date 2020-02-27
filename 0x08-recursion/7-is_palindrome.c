#include "holberton.h"

int _strlen_recursion(char *s);
int checkPalindrome(int n, int i, char *s);

/**
 * is_palindrome -  fucntion that checks if a string is palindrome
 * @s: a string
 * Return: 1 if is a palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	int n;

	n = _strlen_recursion(s);

	return (checkPalindrome(n, 0, s));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: the length of a string
 */

int _strlen_recursion(char *s)
{
	int n;

	if (s[0] != '\0')
	{
		n = _strlen_recursion(&s[1]);
}
	else
		return (0);
	return (n + 1);
}

/**
 * checkPalindrome - check palindrome
 * @n: l
 * @i: l
 * @s: string
 * Return: 1, 0 or i depends of the check
 */

int checkPalindrome(int n, int i, char *s)
{
	if (n / 2 == i)
		return (1);
	if (s[i] == s[n - 1 - i])
		i = checkPalindrome(n, i + 1, s);
	else
		return (0);
	return (i);
}
