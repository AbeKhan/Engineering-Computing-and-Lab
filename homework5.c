/*
        2/22/2025
        Program Name: homework5.c
        Name        : Abraham Khan

        This program is designed to solve the homework
        problem 5 for Engineering Computing Lab

*/
#include <stdio.h>
#include <stdlib.h>
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

    if (a == 0 && b == 0)
    {
        printf("It's not an equation\n");
        exit(0);
    }
    else if (a == 0 && b != 0)
    {
        double x = (-c) / b;
        printf("It is not quadratic\n");
        printf("\nx = %lf \n", x);
        exit(0);
    }
    else if (a != 0)
    {
        D = pow(b, 2) - (4 * a * c);

        if (D == 0)
        {
            double x = (-b) / (2 * a);
            printf("\nThe discriminat of the polynomial is %0.3lf \n", D);
            printf("x = %0.3lf", x);
        }
        else if (D > 0)
        {
            x1 = ((-b) + sqrt(D)) / (2 * a);
            x2 = ((-b) - sqrt(D)) / (2 * a);
            printf("\nThe discriminat of the polynomial is %0.3lf \n", D);
            // printf("The root(s) of %0.3lfx^2 + %0.3lfx + %0.3lf is :\n", a, b, c);
            printf("x1 = %6.3lf\n", x1);
            printf("x2 = %6.3lf\n", x2);
        }
        else // if (D < 0)
        {
            double xIM = sqrt(-D) / (2 * a);
            double xREAL = (-b) / (2 * a);

            if (b == 0)
            {
                // printf("imaginary roots %lf, -%lf \n", xIM);
                printf("\nThe discriminat of the polynomial is %0.3lf \n", D);
                printf("x1 = %6.3lfi \nx2 = %6.3lfi", xIM, -xIM);
            }

            else
            {
                printf("\nThe discriminat of the polynomial is %0.3lf \n", D);
                printf("x1 = %0.3lf + %0.3lfi \nx1 = %0.3lf - %0.3lfi", xREAL, xIM, xREAL, xIM);
            }
        }
    }

    return 0;
}