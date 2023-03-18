#include <stdio.h>

/**
 * main - prints the alphabelt in lower case
 * followed by a new line, except q and e
 * Retun: Always 0
 */
int main(void)
{
	char la;
	for (la = 'a' la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}
	putchar('\n');
	return (0);
}
