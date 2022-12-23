#include "main.h"
/**
 * *_strcat - concatenates the string pointed to by @src, including the terminat
 * null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: the source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, const char *src)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
		 dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
