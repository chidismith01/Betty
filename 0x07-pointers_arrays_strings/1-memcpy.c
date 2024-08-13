#include "main.h"
/**
 * _memcpy - Copies memory area
 *
 * @dest: Where to copy the memory to
 * @n: - The number of bytes to copy
 * @src: The memory area to copy from
 *
 * Return: a pointer to the memory area @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
