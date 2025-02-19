/*
		2/6/2025
        Program Name: homework4.c
        Name        : Abraham Khan

        This program is designed to solve the homework 
        problem 4 for Engineering Computing Lab

*/
#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, D, x1, x2;
	
	printf("-----------------------------------------\n");
	printf(" Program to calculate roots x1 and x2 \n");
	printf(" of quadratic polyynomial ax^2+bx+c \n");
	printf("-----------------------------------------\n");
	
	printf("Enter a : ");
	scanf("%lf", &a);
	
	printf("Enter b : ");
	scanf("%lf", &b);
	
	printf("Enter c : ");
	scanf("%lf", &c);
	
	if(a == 0)
	{
		printf("It is not quadratic\n");
		return 0;
	}
	
	D = pow(b, 2) - (4*a*c);
	
	x1 = ((-b) + sqrt(D)) / (2*a);
	
	x2 = ((-b) - sqrt(D)) / (2*a);
	
	
	
	if(D == 0)
	{
		printf("\nThe discriminat of the polynomial is %0.3lf \n", D);
		printf("one real root\n");
	}
	else if( D < 0)
	{
		printf("\nThe discriminat of the polynomial is %0.3lf \n", D);
		printf("imaginary roots\n");
	}
	else
	{
		printf("The discriminat of the polynomial is %0.3lf \n", D);
		//printf("The root(s) of %0.3lfx^2 + %0.3lfx + %0.3lf is :\n", a, b, c);
		printf("x1 = %6.3lf\n" , x1);
		printf("x2 = %6.3lf\n" , x2);
	}
	
	
	
	return 0;
}