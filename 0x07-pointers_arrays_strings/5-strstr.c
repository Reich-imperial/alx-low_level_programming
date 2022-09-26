#include <stdio.h>
#include "main.h"

/**
 * _strstr - afunction that locates a substring
 * @haystack: to be tasted
 * @needle: the substring to be searched for
 * Return: returns a pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j = 0, k;

	for (i = 0; haystack[i] != 0; i++)
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
