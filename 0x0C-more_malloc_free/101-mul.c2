#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * isNumeric - Check if a string contains only digits.
 * @str: The input string to check.
 *
 * Return: 1 if the string contains only digits, 0 otherwise.
 */
int isNumeric(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, 98 if the number of arguments is incorrect or
 *         if num1 or num2 are not composed of digits.
 */
int main(int argc, char *argv[])
{
	int n1, n2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	if (!isNumeric(argv[1]) || !isNumeric(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	mul = n1 * n2;
	printf("%d\n", mul);
	return (0);
}
