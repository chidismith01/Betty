#include "main.h"
/**
 * @_strchr: - Locates a character in a string
 * @s: - string to locate the character
 * @c: - character to be located in a string
 *
 * Return: A pointer to the first occurrence of the character @c in the string 
 * @s: - Return NULL if the character isn;t found
 **/

char *_strchr(char *s, char c)
{
	while(*s)
	{
		if(*s != c)
			s++;
		else
			return(s);
	}
	{
		if(*s == '\0'
				return(s);
				else
				return (NULL);
		}
}
