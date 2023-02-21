#include <stdio.h>

/**
 * main -  prints _putchar, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *text = "_putchar";
	int i;
	
	for(i = 0; i<text.lenght;i++)
		putchar(text[i]);
	return(0);
}
