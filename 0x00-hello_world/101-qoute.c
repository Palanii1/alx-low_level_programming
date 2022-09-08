#include <stdio.h>
#include <unistd.h>
/**
 * main - Prints out 'that piece of art is useful - dora korpar, 2015-10-19'
 * then a new line to the standard error
 * Returns: 1 success
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return(1);
}

