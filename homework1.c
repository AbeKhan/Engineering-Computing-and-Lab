/*
        1/21/2025
        Program Name: homework1.c
        Name        : Abraham Khan

        This program is designed to solve the homework 
        problem 1 for Engineering Computing Lab
*/

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
    double h_m = 220000;
    
    double S = orbit_circumference(h_m);
    printf("The circumference of the orbit is %lf m \n", S);  
    
    double v = tangential_velocity(h_m);  
    printf("The tangential speed of earth is %lf meters per second \n", v);  
    
    double a = centripetal_acceleration(h_m, v);  
    printf("The centripetal acceleration of the earth is %lf meters per second squared\n", a);  
    
    double pd = percent_difference(a);  
    printf("The percent difference is %lf percent \n", pd);
    
    double vol = volume(); 
    printf("The volume of the earth is %lf cubic meters \n", vol);  
    
    return 0;
}

double orbit_circumference(double height)
{
    double S = 2 * PI * ((R*1000) + height);
    return S;
}

double tangential_velocity(double height)
{
    double v = sqrt((G * M) / ((R*1000) + height));
    return v;
}

double centripetal_acceleration(double height, double velocity)
{
    double a = pow(velocity, 2) / ((R*1000) + height);
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
