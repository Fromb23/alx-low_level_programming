#include "calc.h"

int add(int a, int b)

{       
        int result;

        result = a + b;
        
        return (result);
}

int substruct(int a, int b)

{
	int outcome;

	outcome = a - b;

	return (outcome);

	calc calculator = 
	{
		.sub = substruct
	};
}
