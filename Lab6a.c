#include <stdio.h>
#include <math.h>

int main()
{
	int T_initial, T_inc, n, T_stop;
	double T_F, T_C, T_K;

	printf("Enter inital temp (\u00B0F)          : ");
	scanf("%d", &T_initial);
	printf("Enter temp increment (\u00B0F)       : ");
	scanf("%d", &T_inc);

	printf("Enter number of rows (2-20)      : ");
	scanf("%d", &n);

	while (n < 2 || n > 20)
	{
		printf("Invalid increment. Enter a value between 2 and 20: ");
		scanf("%d", &n);
	}

	printf("\n");

	T_stop = T_initial + (n - 1) * T_inc;
	T_F = T_initial;

	printf("************************************\n");
	printf("  TEMPERATURE CONVERSION TABLE\n");
	printf("************************************\n");
	printf("  \u00B0F      \u00B0C      \u00B0K\n");
	printf("------------------------------------\n");

	for (int Temp = T_initial; Temp <= T_stop; Temp += T_inc)
	{
		T_F = Temp;
		T_C = (T_F - 32) * 5.0 / 9.0;
		T_K = T_C + 273.15;
		printf("%6.2f %6.2f %6.2f\n", T_F, T_C, T_K);
	}

	return 0;
}