#include <stdio.h>
#include <math.h>

int main()
{
    double distance, v1, v2, b, a1, a2, a, t1, t2, c, d, D;

    printf("Enter distance (m) : ");
    scanf("%lf", &d);

    printf("Enter first object information\n");
    printf("-----------------------------\n");
    printf("Initial velocity (m/s) : ");
    scanf("%lf", &v1);
    printf("Acceleration (m/s^2) : ");
    scanf("%lf", &a1);

    printf("Enter second object information\n");
    printf("-----------------------------\n");
    printf("Initial velocity (m/s) : ");
    scanf("%lf", &v2);
    printf("Acceleration (m/s^2) : ");
    scanf("%lf", &a2);

    a = 0.5*(a2 - a1);
    b = v2 - v1;
    c = d;
    D = pow(b, 2) - 4*a*c;

   // t1 = (-b + sqrt(D))/(2*a);
   // t2 = (-b - sqrt(D))/(2*a);

    if(a ==0)
    {
        if(b ==0)
        {
            t1 = -c/b;

            if(t1 < 0)
            {
                printf("No collision\n");
                return 0;
            }
            else
            {
                
                d = a * t2 + b * t1 + c;
                printf("Collision at %lf seconds\n at %lf", t1, d);
                return 0;
            }
        }
        else
        {
            printf("No collision\n");
            return 0;
        }
    }
    else
    {
        D = pow(b, 2) - 4*a*c;

        if(D < 0)
        {
            printf("No collision\n");
            return 0;
        }
        else
        {
            t1 = (-b + sqrt(D))/(2*a);
            t2 = (-b - sqrt(D))/(2*a);

            d = v1*t1 + 0.5*a1*pow(t1, 2);
            printf("Collision at %lf seconds\n at %lf", t1, d);

            d = v2*t2 + 0.5*a2*pow(t2, 2);
            printf("Collision at %lf seconds\n at %lf", t2, d);
        }
    }
    
	return 0;
}