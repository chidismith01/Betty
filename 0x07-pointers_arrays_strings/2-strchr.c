#include "main.h"
/**
 * @_strchr: - Locates a character in a string
 * @s: - string to locate the character
 * @c: - character to be located in a string
 *
 * Return: a pointer to the string 
 */

char *_strchr(char *s, char c)
{

	while(*s);
	{	if(*s != c)
			s++;
		else
			return(s);
	}
	
	if(c == NULL)
		return(s);
	return (NULL);
}
