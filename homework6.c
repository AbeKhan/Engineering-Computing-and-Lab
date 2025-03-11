/*
        3/11/2025
        Program Name: homework6.c
        Name        : Abraham Khan

        This program is designed to solve the homework
        problem 6 for Engineering Computing Lab

*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
	bool exit = false;
	char check;
	double a, b, c, Xin, Xfin, step, y;
	printf("\n*****************************************\n");
	printf("*  Program to display table x and y on  *\n");
	printf("*****************************************\n");
	printf("Please enter a, b and c seperated by space: ");

	scanf("%lf %lf %lf", &a, &b, &c);
	do
	{

		printf("\nPlease enter the iteration info\n");
		printf("x initial	: ");
		scanf("%lf", &Xin);
		printf("x final		: ");
		scanf("%lf", &Xfin);

		while (Xfin <= Xin)
		{
			printf("x final has to be bigger than x initial\n");
			printf("Please re-enter x final: ");
			scanf("%lf", &Xfin);
		}

		printf("step(min 0.1)	: ");
		scanf("%lf", &step);

		while (step < 0.1)
		{
			printf("step can't be less than 0.1\n");
			printf("Pleaes re-enter step(min 0.1): ");
			scanf("%lf", &step);
		}

		printf("  x 		y\n");

		for (Xin; Xin < Xfin; Xin += step)
		{
			y = a * pow(Xin, 2) + b * Xin + c;
			printf("%0.2lf		%0.2lf\n", Xin, y);
		}

		printf("Do you want another range (Y or N)? ");
		scanf(" %c", &check);
		if (check == 'N' || check == 'n')
			exit = true;

	} while (!exit);

	return 0;
}