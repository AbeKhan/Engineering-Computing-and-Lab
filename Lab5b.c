#include <stdio.h>
#include <math.h>

int main()
{
	double temp_F, temp_C, temp_K;
	int choice;
	printf("***********************\n");
	printf("Temperature conversions\n");
	printf("***********************\n");
	printf("1. Fahrenheit converions.\n2. Celcius conversions.\n3. Kelvin conversions.\n");
	printf("Enter your choice (1,2 or 3): ");
	scanf("%i", &choice); 
	
	switch(choice)
	{
	
		case 1:
			printf("\nEnter tempature (F) : ");
			scanf("%lf", &temp_F); 
			temp_C = (temp_F-32)/(9.0/5);
			temp_K = temp_C + 273.15;
			
			printf("Temperature in F: %6.2lf F\n", temp_F);
			printf("Temperature in C: %6.2lf C\n", temp_C);
			printf("Temperature in K: %6.2lf K", temp_K); 
			
			break;
			
		case 2:
			printf("\nEnter tempature (C) : ");
			scanf("%lf", &temp_C); 
			temp_F = (9.0/5)*temp_C+32.0;
			temp_K = temp_C + 273.15;
			
			printf("Temperature in F: %6.2lf F\n", temp_F);
			printf("Temperature in C: %6.2lf C\n", temp_C);
			printf("Temperature in K: %6.2lf K", temp_K); 
			break;
			
		case 3:
			printf("\nEnter tempature (K) : ");
			scanf("%lf", &temp_K); 
			temp_C = temp_K - 273.15;
			temp_F = (9.0/5)*temp_C+32.0;
			
			printf("Temperature in F: %6.2lf F\n", temp_F);
			printf("Temperature in C: %6.2lf C\n", temp_C);
			printf("Temperature in K: %6.2lf K", temp_K); 
			break;
			
		default:
			printf("\nWrong choice");
			
	}
	
	
	return 0;
}
	