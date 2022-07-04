#include <stdlib.h>

#include <time.h>
#include <stdio.h>
/* more headers goes there */



/**
 * main - arithmetic
 * Return: 0;
 */

int main(void)

{

		int n;
		int nLast;



			srand(time(0));

				n = rand() - RAND_MAX / 2;
				nLast = n % 10;

					if (n > 5)
						printf("Last digit of %d is %d and is greater than 5\n", n, nLast);
					else if (n == 0)
						printf("Last digit of %d is %d and is 0\n", n, nLast);
					else
						printf("Last digit of %d is %d and is less than 6  not 0\n", n, nLast);

					return (0);

}
