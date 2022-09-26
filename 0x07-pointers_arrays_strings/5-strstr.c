#include <stdio.h>
#include "main.h"

/**
 * _strstr - a function that locates substring
 * @haystack: string to be tested
 * @needle: substring to be searched
 * Return: returns a pointer to the beginning
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j = 0, k;

	for (i = 0; haystack[i] != 0; 1++)
	{
		k = i;
		j = 0;

		for (; needle[j] != 0; )
		{
			if (haystack[k++] == needle[j++])
			{
				continue;
			}
			break;
		}
		if (needle[j] == '\0')
			return ((haystack + i));
	}
	return (NULL);
}
