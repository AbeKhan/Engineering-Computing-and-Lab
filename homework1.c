/*
		1/21/2025
		Program Name: homework1.c
		Name		: Abraham Khan

		This program is designed to solve the homework 
		problem 1 for Engineering Computing Lab

*/
//Preprocessor directives
#include <stdio.h>
#define PI 3.141593
#define R 6378E3
#define M 5.972E10
#define G 6.67259E-11

int main()
{
	double h_m = 220000, S;
	S = 2*PI*(R+h_m);
	
	printf("The circumeference of the orbit is %lf m \n", S);
	
	return 0;
}

/*double circumference(double radius, double height)
{
	double S;
	S = 2*PI(radius + height);
	return S;
}*/

//double velocityTangent(double 