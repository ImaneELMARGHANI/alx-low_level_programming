<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 *  * main - Entry point
 *   * Description: prints "_putchar" to stdrout
 *    * Return: Always (0)
 *     */

int main(void)
{
		write(1, "_putchar\n", 9);
			return (0);
}
=======
#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - function
 * Description: takes nothing as arguments, prints the alphabet in lowercase
 */

void print_alphabet(void)
{
	int i = 97;

	while (i < 123)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
>>>>>>> 6b1991c023014b1a82ec10e43cfa9f3d97f427c1
