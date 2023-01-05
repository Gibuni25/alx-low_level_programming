#include "main.h"
/**
 * _memset - fills memory with aconstant byte
 * @s: memory area
 * @b: constant byte
 * @n: bytes filled
 * Return: the pointer to dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int 1;

	for (i = 0; i < n; i++)
		*(s + i) = b;

	return (s);
}
