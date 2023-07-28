#include "shell.h"

/**
 * bfree - It frees a pointer and NULLs the address
 * @ptr: an address of the pointer to free
 *
 * Return: Returns 1 if freed, otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
