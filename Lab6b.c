#include <stdio.h>
#include <math.h>

int main()
{

	char y;
	do
	{
		int n;
		double sum, mean, x;
		printf("\nEnter number of data n (2-10)	: ");
		scanf("%d", &n);

		while (n < 2 || n > 10)
		{
			printf("\nInvalid increment.\nEnter a value between 2 and 10: ");
			scanf("%d", &n);
		}
		printf("\n");
		for (int i = 1; i <= n; i++)
		{
			
			printf("Enter data - %d : ", i);
			scanf("%lf", &x);
			sum += x;
		}

		mean = sum / n;
		printf("The avaerage is %0.2lf", mean);
		printf("\nMore range of data ? (Y/N) ");
		scanf(" %c", &y);

	} while (y == 'Y' || y == 'y');

	return 0;
}