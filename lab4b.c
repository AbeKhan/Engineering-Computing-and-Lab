#include <stdio.h>
#include <math.h>
#include <string.h>

#define PI 3.141593
#define G 6.67E-11 

int main() {

    double r;
    double m;
    char strIN[20];
    double densityIN;
    double gravityIN;

    printf("Enter radius (m) : ");
    scanf("%lf", &r);
    printf("Enter mass (kg)  : ");
    scanf("%lf", &m);

    double grav_strength = (G * m) / pow(r, 2);
    // double vol = (4.0/3) * PI * pow(r,3);
    double density = (3.0 / 4) * m / (PI * pow(r, 3));

    printf("\nTHE PLANET DATA\n");
    printf("---------------------------------------\n");
    printf("radius            : %10.2e m\n", r);
    printf("mass              : %10.2e kg\n", m);
    printf("Grav. strength    : %10.1lf m/s^2\n", grav_strength);
    // printf("Volume            : %10.2e m^3\n", vol);
    printf("density           : %10.2lf kg/m^3\n", density);

    printf("\nTHE ANALYSIS BASED ON CALCULATION\n");
    printf("---------------------------------------\n");
    printf("Enter the object/planet name  : ");
    scanf("%s", strIN);
    printf("Enter density from the table  : ");
    scanf("%lf", &densityIN); 
    printf("Enter gravity from the table  : ");
    scanf("%lf", &gravityIN); 

    double PEdensity = fabs(densityIN - density) / densityIN * 100;
    double PEgravity = fabs(gravityIN - grav_strength) / gravityIN * 100;

    printf("\nThe object is \"%s\" with percent error calculation of its \ndensity is %0.2f%% and percent error calculation of its gravity \nis %0.2f%%.", strIN, PEdensity, PEgravity); // Corrected format specifier from %0.2d to %0.2f
}
