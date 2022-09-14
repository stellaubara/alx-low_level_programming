#include "main.h"

/*
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Return: 0
 */

void print_alphabet(void)
{
		char letter c = 'a';

		while (letter c <= 'z')	
		{	
			_putchar(c);
			c++;								}
		_putchar('\n');
}
