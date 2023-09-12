

#include "main.h"
	#include <unistd.h>
	/**
	 * _putchar - printss out cgaracter c
	 * @c: Is the variable to be printed
	 *
	 * Return: 1 if succeeded, -1 if error is encountered.
	 * and the error number is set appropriately.
	 */
	int _putchar(char c)
	{
		return (write(1, &c, 1));
	}

