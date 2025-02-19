#include <stdio.h>

int main()
{
	
	double temp_F = 230.2;
	double temp_C = (temp_F-32)/(9.0/5);
	double temp_K = temp_C + 273.15;
	double temp_R = 459.67 + temp_F;
	
	printf("Temperature in F: %7.2lf F\n", temp_F);
	printf("Temperature in C: %7.2lf C\n", temp_C);
	printf("Temperature in K: %7.2lf K\n", temp_K);
	printf("Temperature in R: %7.2lf R\n", temp_R);
	
	return 0;
}
	