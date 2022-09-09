#include <stdio.h>
/** prints 0-9 without char or printf/puta
 * Return 0 on suceess
 */
int main(void)
{
	int i = '0';

	while(i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
