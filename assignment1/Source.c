#include <stdio.h>

int main() {

	/* initialise the variables needed */
	int a, b, c, d;

	/* first for loop to print 1, 2, 3, 4, 5, 6, 7 */
	for (a = 1; a <= 7; ++a)
	{
		/* prints out number in sequence */
		printf("%d, ", a);
	}

	printf("\n");

	/* second for loop to print 3, 8, 13, 18, 23 */

	for (b = 3; b <= 23; b += 5) 
	{
		/* prints out number in sequence */
		printf("%d, ", b);
	}

	printf("\n");

	/* third for loop to print 20, 14, 8, 2, -4, -10 */

	for (c = 20; c >= -10; c -= 6) 
	{
		/* prints out number in sequence */
		printf("%d, ", c);
	}

	printf("\n");

	/* fourth for loop to print 19, 27, 35, 43, 51 */

	for (d = 19; d <= 51; d += 8) 
	{
		/* prints out number in sequence */
		printf("%d, ", d);
	}

	printf("\n");

	return 0;
}