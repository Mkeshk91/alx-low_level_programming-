#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments  receives.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return:  0 (Success)
 */
int main(int argc, char *argv[])
{
	int p;

	for (p = 0; p < argc; p++)
	{
		printf("%s\n", argv[p]);
	}

	return (0);
}
