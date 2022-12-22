#include "main.h"
/*
 * Description: _strcat :concatenate two strings together
 * return : always return dest
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
