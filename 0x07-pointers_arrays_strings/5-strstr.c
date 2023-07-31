#include "main.h"
/**
 * _strstr - Locate sub string
 *
 * @haystack: arg typ char
 * @needle: arg typ char
 *
 * Return: pointer to start of needle
 */
char *_strstr(char *haystack, char *needle)
{
	char *occurance, *tempNeedle;

	if (!*needle)
		return (haystack);
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			occurance = haystack;
			tempNeedle = needle;
			while (*tempNeedle)
			{
				if (*haystack++ != *tempNeedle++)
				{
					haystack = occurance;
					break;
				}
			}
			if (occurance != haystack)
				return (occurance);
		}
		haystack++;
	}
	return (0);
}

