#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes the charcter c to stdout
 * @c: The character to print
 *
 * Return: on sucess 1.
 * On error, -1 is returned, and error is set appropritely
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
