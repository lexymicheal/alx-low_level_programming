#include "main.h"

/**
 * strncpy - copys a string with n
 * @dest: copy to 
 * @src: copy from
 * @n: number of char to be copied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < m && src[j] != '\0')
	{	
		dest[j] = src[j];
		j++;
	}
	while (j < m)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
