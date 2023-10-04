#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments (unused).
 *
 * Description:
 *	This program prints the number of arguments passed into it.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	(void)argv; /* Ignoring the unused argv parameter */
	printf("%d\n", argc - 1); /* Subtract 1 to exclude the program name itself */
	return (0);
}

