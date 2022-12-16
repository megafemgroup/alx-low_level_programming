#include "main.h"

/**
 * _isupper - define if a character is uppercase
 *
 * Description: Prints the alphabet with _putchar
 * @c: charater
 * Return: void
 */

int _isupper(int c)
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
int _isupper(int c)
{

	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
