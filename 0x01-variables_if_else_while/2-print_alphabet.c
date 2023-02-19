
# include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Write a programm that prints the alphabet in lowercase
 * Return: 0
 */
int main(void)
{

	char c = 'a';

	while (c <= 'z')
	{        
		putchar(c);
		c++;
	}
	
	putchar('\n');
	return (0);
}	
