#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string s
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int len = 0;
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	return (len);
}

/**
 * _strcpy - copies a string to a buffer
 * @dest: buffer
 * @src: string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
		dest[i] = src[i];

	return (dest);
}

