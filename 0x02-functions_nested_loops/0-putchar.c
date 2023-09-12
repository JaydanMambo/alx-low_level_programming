#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints _putchar, followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	char message[] = "_putchar\n";

	for (int i = 0; message[i] != '\0'; i++)
		_putchar(message[i]);
	return (0);
}
