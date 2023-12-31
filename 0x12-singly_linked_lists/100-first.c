#include <stdio.h>

/**
 * before_main - Prints a message before the main function is executed.
 *
 * Description: This function is executed before the main function and
 * prints a message.
 */
void before_main(void) __attribute__((constructor));

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

