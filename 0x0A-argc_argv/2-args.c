#include "main.h"
#include <stdio.h>
/**
 * main - program that prints all arguments it receives
 * @argc: argument count
 * @argv: An array containing the program command line arguments.
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
