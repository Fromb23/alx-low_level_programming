#include "calc.h"
#include <stdio.h>

int main()

{
	int sum, substruction;

	calc calculator =
	{
	.add = add
	};

	sum = calculator.add(4, 7);
	printf("%d\n", sum);

	substruction = calculator.sub(8, 5);
	printf("8 - 5 = %d\n", substruction);
	return (0);
}
