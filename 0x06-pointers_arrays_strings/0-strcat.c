#include "main.h"
#include <stdio.h>
/**
 * _stract - concatennates two strings
 * @dest: copy to
 * @src: copy from
 * Return: pointer to dest
 */
char *_strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;
	
	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	
	return (dest);
}

