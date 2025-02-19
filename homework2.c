/*
		2/4/2025
        Program Name: homework2.c
        Name        : Abraham Khan

        This program is designed to solve the homework 
        problem 2 for Engineering Computing Lab

*/


#include <stdio.h>
#include <math.h>


// Preprocessor directives
#include <stdio.h>
#include <math.h>  
#define PI 3.141593
#define M 5.972E24  
#define R 6378  
#define G 6.67259E-11
#define g 9.80665

// Function prototypes
double orbit_circumference(double height);
double tangential_velocity(double height); 
double centripetal_acceleration(double height, double velocity);
double percent_difference(double acceleration);
double volume();

int main()
{
    double height = 220;
	
	printf("\n\nSatelite distance : %0.0f km \n\n\n", height);  
    
    double S = orbit_circumference(height);
    printf("The circumference of the orbit is %0.3lf km \n", S);  
    
    double v = tangential_velocity(height);  
    printf("The tangential speed of earth is %0.3lf meters per second \n", v);  
    
    double a = centripetal_acceleration(height, v);  
    printf("The centripetal acceleration of the earth is %0.2lf meters per second squared\n", a);  
    
    double pd = percent_difference(a);  
    printf("The percent difference is %%%0.2lf percent \n", pd);
    
    double vol = volume(); 
    printf("The volume of the earth is %0.3e cubic meters \n\n", vol);  
	
	printf("PROPERTIES            VALUE\n");
    printf("--------------------------------------\n");
    printf("Orbit Circumference   %10.3f km\n", S);
    printf("Tangential speed      %10.3f m/s\n", v);
    printf("Centripetal acc.      %10.2f m/s^2\n", a);
    printf("Percent diff.         %10.2f %% \n", pd);
    printf("Earth volume          %10.3e m^3\n", vol);
	
    
    return 0;
}

double orbit_circumference(double height)
{
    double S = 2 * PI * (R + height);
    return S;
}

double tangential_velocity(double height)
{
    double v = sqrt((G * M) / ((R*1000) + height * 1000));
    return v;
}

double centripetal_acceleration(double height, double velocity)
{
    double a = pow(velocity, 2) / ((R*1000) + height * 1000);
    return a;
}

double percent_difference(double acceleration)
{
    double pd = (fabs(acceleration - g) / ((acceleration + g) / 2.0)) * 100;
    return pd;
}

double volume()
{
    double vol = (4.0 / 3.0) * PI * pow((R*1000), 3);
    return vol;
}
