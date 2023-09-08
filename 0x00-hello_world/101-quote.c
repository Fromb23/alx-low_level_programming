#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the specified message to the standard error stream.
 *
 * Return: Always 1
 */

int main(void)
{

	char *message = "and that piece of art is useful\" - Dora Korpar, "

	"2015-10-19\n";

	write(STDERR_FILENO, message, 59);

	return (1);
}
