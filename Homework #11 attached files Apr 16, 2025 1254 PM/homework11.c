#include <stdio.h>
#include <math.h>

#define NROWS 3
#define NCOLS 3
#define N 3

#include "function11.h"

int main()
{
    int exit = 0;
    int choice, A[NROWS][NCOLS], B[NROWS][NCOLS], C[NROWS][NCOLS];
    FILE *fp;

    fp = fopen("mata.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    else
    {
        for (int i = 0; i < NROWS; i++)
        {
            for (int j = 0; j < NCOLS; j++)
            {
                fscanf(fp, "%d", &A[i][j]);
            }
        }
        fclose(fp);
    }

    fp = fopen("matb.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    else
    {
        for (int i = 0; i < NROWS; i++)
        {
            for (int j = 0; j < NCOLS; j++)
            {
                fscanf(fp, "%d", &B[i][j]);
            }
        }
        fclose(fp);
    }

    printmat(A);
    printmat(B);

    do
    {
        printf("PLEASE CHOOSE THE OPERATION\n");
        printf("1. Transpose a 2D matrix\n");
        printf("2. Dot Product of two vectors");
        printf("3. Addition of two 2D matrices\n");
        printf("4. Subtraction of two 2D matrices\n");
        printf("5. Multiplication of two 2D matrices\n");
        printf("6. Determinant of a 2D matrix\n");
        printf("7. Exit\n");
        printf("Your choice is : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            transpose(A, C);
            break;
        case 2:
            dot_product(A, B, N);
            break;
        case 3:
            addition(A, B, C);
            break;
        case 4:
            subtraction(A, B, C);
            break;
        case 5:
            multiplication(A, B, C);
            break;
        case 6:
            determinant(A);
            determinant(B);
            break;
        case 7:
            exit = 1;
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (exit != 1);

    return 0;
}