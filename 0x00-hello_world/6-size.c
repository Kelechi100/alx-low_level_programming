#include <stdio.h>
/**
 * main - A programm that prints the size of various computer types
 * Return 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	int long c;
	long long int d;
	float f;

printf("size of a char; %lu byte(s)\n",(unsigned long)sizeof(a));
printf("size of an int; %lu",(unsigned long)sizeof(b));
printf("size of a long int; %lu",(unsigned long)sizeof(c));
printf("size of a long long int; %lu",(unsigned long)sizeof(d));
printf("size of a float; %lu",(unsigned long)sizeof(f));
return (0);
}
