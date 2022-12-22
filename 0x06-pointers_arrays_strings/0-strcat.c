#include "main.h"
/**
 * _strcat - function that copies a string.
 * @dest: This is pointer to the destination array.
 * @src: This is the string to be appended.
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	while (dest[i] != '\0') {
		dest[j] = dest[i];
		i++;
		j++;
	}
	i = 0;
	while (src[i] != '\0') {
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
