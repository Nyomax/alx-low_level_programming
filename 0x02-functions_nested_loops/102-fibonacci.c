#include <stdio.h>
/**
 *main - main function executed
 *Description:Prints the first 50 fibonacci numbers,
 *begining with 1 and 2 with numbers coma and space separated.
 *Return:0;
 */
int main(void)
{
	int count = 2;
	long int i = 1, j = 2;
	long int k;

	printf("%ld, ", i);
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%ld\n", j);
		}
		else
		{
			printf("%ld, ", j);
		}
		k = j;
		j += i;
		i = k;
		count++;
	}
	return (0);
}
