#include "main.h"
#include <math.h>

int _sqrt_recursion(int n)


{
	double guess;
       double next_guess;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1 || n == 0)
	{
	return (n);
	}
	else
	{
	
	guess = n / 2.0;
	next_guess = 0.5 * (guess + n / guess);

	if (next_guess == guess || (next_guess * next_guess == n))
	{
            return next_guess;
        }
	else
	{
            return _sqrt_recursion(n);
        }
   	}
}
