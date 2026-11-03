#include <stdio.h>

int main(void)
{
	char text[]="\"Programming is like building a multilingual puzzle"
	
	for (int i = 0; text[i] != '\0'; i++)
		putchar(text[i]);

	putchar('\n')
	return (0);
}
