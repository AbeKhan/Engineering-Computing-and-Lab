/*
		2/6/2025
        Program Name: homework3.c
        Name        : Abraham Khan

        This program is designed to solve the homework 
        problem 3 for Engineering Computing Lab

*/
#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, D, x1, x2;
	
	printf("\nPROGRAM TO CALCULATE ROOT(S) of POLYNOMIAL \nax^2 + bx + c \n");
	printf("Enter a : ");
	scanf("%lf", &a);
	
	printf("Enter b : ");
	scanf("%lf", &b);
	
	printf("Enter c : ");
	scanf("%lf", &c);
	
	D = pow(b, 2) - (4*a*c);
	
	x1 = ((-b) - sqrt(D)) / (2*a);
	
	x2 = ((-b) + sqrt(D)) / (2*a);
	
	printf("The discriminat is %0.3lf \n", D);
	printf("The root(s) of %0.3lfx^2 + %0.3lfx + %0.3lf is :\n", a, b, c);
	printf("x1 = %0.3lf\n" , x1);
	printf("x2 = %0.3lf\n" , x2);
	
	
	
	return 0;
}