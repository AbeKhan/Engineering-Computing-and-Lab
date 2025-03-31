/*
        3/30/2025
        Program Name: homework7.c
        Name        : Abraham Khan

        This program is designed to solve the homework
        problem 7 for Engineering Computing Lab

*/

#include <stdio.h>
#include <math.h>

#define SIZE 5

int main()
{
    double A[5] = {1.50, 1.24, 2.00, -5.20, 0.96};
    double B[5] = {0.25, -3.30, 1.40, 0.00, -5.70};
    int choice, exit = 0;
    double maxA, minA, maxB, minB, sum, subscript;
    char end, vector;

    printf("A={");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%0.2lf ", A[i]);
        if (i != SIZE - 1)
        {
            printf(", ");
        }
        else
        {
            printf("}\n");
        }
    }
    printf("B={");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%0.2lf ", B[i]);
        if (i != SIZE - 1)
        {
            printf(", ");
        }
        else
        {
            printf("}\n");
        }
    }

    while (!exit)
    {

        printf("\nPlease choose a process : \n");
        printf("1. Max value and min value of A \n");
        printf("2. Max value and min value of B\n");
        printf("3. Dot product of A and B\n");
        printf("4. The value of know subscript\n");
        printf("5. Exit\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            maxA = A[0];
            minA = A[0];
            for (int i = 1; i < SIZE; i++)
            {
                if (A[i] > maxA)
                {
                    maxA = A[i];
                }
                if (A[i] < minA)
                {
                    minA = A[i];
                }
            }
            printf("Max value of A is %0.2lf\n", maxA);
            printf("Min value of A is %0.2lf\n", minA);
            printf("Do you want another process (Y or N)? ");
            scanf(" %c", &end);
            if (end == 'N' || end == 'n')
            {
                exit = 1;
            }
            break;
        case 2:
            maxB = B[0];
            minB = B[0];
            for (int i = 1; i < SIZE; i++)
            {
                if (B[i] > maxB)
                {
                    maxB = B[i];
                }
                if (B[i] < minB)
                {
                    minB = B[i];
                }
            }
            printf("Max value of B is %0.2lf\n", maxB);
            printf("Min value of B is %0.2lf\n", minB);
            printf("Do you want another process (Y or N)? ");
            scanf(" %c", &end);
            if (end == 'N' || end == 'n')
            {
                exit = 1;
            }
            break;
        case 3:
            sum = 0;
            for (int i = 0; i < SIZE; i++)
            {
                sum += A[i] * B[i];
            }
            printf("Dot product of A and B is %0.2lf\n", sum);
            printf("Do you want another process (Y or N)? ");
            scanf(" %c", &end);
            if (end == 'N' || end == 'n')
            {
                exit = 1;
            }
            break;
        case 4:
            printf("Which vector (A or B) ?\n");
            scanf(" %c", &vector);
            int check = 0;
            while (check == 0)
            {
                if ((vector == 'a' || vector == 'A') || (vector == 'b' || vector == 'B'))
                {
                    check = 1;
                }
                else
                {
                    printf("Please choose (A or B): \n");
                    scanf(" %c", &vector);
                }
            }

            printf("Please enter a subscript (0-4):");
            scanf("%lf", &subscript);
            while (subscript < 0 || subscript >= SIZE)
            {
                printf("Please enter a subscript (0-4): \n");
                scanf("%lf", &subscript);
            }
            if (vector == 'A' || vector == 'a')

            {
                printf("A[%lf] = %0.2lf\n", subscript, A[(int)subscript]);
            }
            else if (vector == 'B' || vector == 'b')
            {
                printf("B[%lf] = %0.2lf\n", subscript, B[(int)subscript]);
            }
            else
            {
                printf("Invalid vector\n");
            }

            printf("Do you want another process (Y or N)? ");
            scanf(" %c", &end);
            if (end == 'N' || end == 'n')
            {
                exit = 1;
            }
            break;
        case 5:
            printf("BYE!\n");
            exit = 1;
            break;
        default:
            printf("Not a choice\n");
            printf("Do you want another process (Y or N)? ");
            scanf(" %c", &end);
            if (end == 'N' || end == 'n')
            {
                exit = 1;
            }
            break;
        }
    }
    return 0;
}