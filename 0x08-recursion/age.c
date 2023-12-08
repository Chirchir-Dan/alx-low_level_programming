#include <stdio.h>

int main ()
{
	int *age;
	*age = 18;

	printf("Hello, my age is %d and address is %p", *age, &age);
}
