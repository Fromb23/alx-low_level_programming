#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - Print a character.
 * @everything: A va_list containing the arguments.
 **/

void print_char(va_list everything)

{
	char arg_char = va_arg(everything, int);

	printf("%c", arg_char);
}

/**
 * print_int - Print an integer.
 * @everything: A va_list containing the arguments.
 **/

void print_int(va_list everything)

{
	int arg_int = va_arg(everything, int);

	printf("%d, ", arg_int);
}

/**
 * print_float - Print a floating-point number.
 * @everything: A va_list containing the arguments.
 **/

void print_float(va_list everything)

{
	double arg_float = va_arg(everything, double);

	printf("%f", arg_float);
}

/**
 * print_string - Print a string.
 * @everything:  va_list containing the arguments.
 **/

	char *arg_string = va_arg(everything, char *);

{
		if (arg_string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", arg_string);
		}
}

/**
 * print_all - Print values based on the format string.
 * @format: The format string specifying the types of values to print.
 * ...: The variable arguments to be printed.
 **/

void print_all(const char * const format, ...)

{

	va_list everything;

	unsigned int j = 0;
	char arg_char, output;
	char *arg_string = NULL;
	int arg_int;
	double arg_float;


	while (format[j] != '\0')
	{
		output = format[j];

		switch (output)
		{
			case 'c':
				{
				print_char(va_arg(everything, int));
				break;
				}

			case 'i':
				{
				print_int(va_arg(everything, int));
				break;
				}

			case 'f':
				{
				print_float(va_arg(everything, double));
				break;
				}

		case 's':
		{
		print_string(va_arg(everything, char *));
		break;
		}
	default:
	printf(", ");
	}
	j++;
	}
}

void print(const char * const format, ...)

{
	va_start(everything, format);
	print_all(format, everything);
	va_end(everything);
	printf("\n");
}
