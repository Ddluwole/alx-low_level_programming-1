#include "main.h"

/**
 * print_square - prints a square followed by a new line
 * @size: size of a square
 */

void print_square(int size)
{
	int width, height;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (height =; height < size; height++)
		{
			for (width = 0; width < size; width++)
				_putchar('\n');
		}
	}
}


