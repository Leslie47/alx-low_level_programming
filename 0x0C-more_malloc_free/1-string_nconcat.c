#include <stdlib.h>
#include "main.h"

/**
 * _strlen - calculate and return string length
 * @str: string
 * Return: string length
 */

unsigned int _strlen(char *str)
{
	unsigned int length = 0;

	while (str && str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * string_nconcat - concatenates s1 and n bytes of s2; return ptr to string
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concat from string 2
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = _strlen(s1);
	unsigned int s2_len = _strlen(s2);
	unsigned int concat_len;
	char *result;
	unsigned int i;
	unsigned int j;

	if (n >= s2_len)
	{
	concat_len = s1_len + s2_len;
	}
	else
	{
	concat_len = s1_len + n;
	}

	result = malloc(concat_len + 1);

	if (result == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < s1_len; i++)
	{
		result[i] = s1[i];
	}

	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
	result[s1_len + j] = s2[j];
	}

	result[concat_len] = '\0';
	return (result);
}
