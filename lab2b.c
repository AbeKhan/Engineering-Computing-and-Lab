
#include <stdio.h>
#include <math.h>

int main()
{
#define PI 3.141593
#define G 6.67E-11 //Netwon meters^2 / kilograms^2
double r = 17.375E5;
double m = 7.3E22;
double grav_strength = G * m / pow(r,2);
double vol = (4.0/3) * PI * pow(r,3);
double density = m/vol;

printf("\nTHE PLANET DATA\n");
printf("---------------------------------------\n");
printf("radius			: %10.2e m\n", r);
printf("mass			: %10.2e kg\n", m);
printf("Grav. strength		: %10.1lf m/s^2\n", grav_strength);
printf("Volume			: %10.2e m^3\n", vol);
printf("density			: %10.2lf kg/m^3\n", density);





}