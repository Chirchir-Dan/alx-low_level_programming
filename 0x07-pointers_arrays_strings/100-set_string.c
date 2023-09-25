#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to a pointer to a char.
 * @to: Pointer to a char that will be the new value of *s.
 *
 * Description:
 * This function takes a pointer to a pointer to a char, 's', and a
 * pointer to a char, 'to', and sets the value of 's' to the address pointed to
 * by 'to', effectively changing the value it points to.
 */
void set_string(char **s, char *to)
{
	*s = to;
}

