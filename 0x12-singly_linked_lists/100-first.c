#include <stdio.h>

/**
 * before_main - Prints a message before the main function is executed.
 *
 * This function is executed before the main function and prints a message.
 */
void before_main() __attribute__((constructor));

void before_main()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

