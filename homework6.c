#include <stdio.h>
#inlcude <math.h>

int main()
{
	bool exit  = false;
	double a, b, c, Xin, Xfin;
	do{
		printf("*****************************************\n");
		printf("*  Program to display table x and y on  *\n");
		printf("*****************************************\n");
		printf("Please enter a, b and c seperated by space:");
		
		scanf("%lf %lf %lf", &a, &b, &c);
		
		printf("\nPlease enter the iteration info\n");
		prinft("x initial	: \n");
		scanf("%lf", &Xin);
		prinft("x final 	: \n");
		scanf("%lf", &Xfin);
		
		while (Xfin < Xin)
		{
			prinft("x final has to be bigger than x initial\n");
			prinft("Please re-enter x final: ");
			scanf("%lf", &Xfin);
		}
	}
	while(!exit)
	
	return 0;
}