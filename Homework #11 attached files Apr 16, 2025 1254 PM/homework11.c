#include <stdio.h>
#include <math.h>

#define NROWS 3
#define NCOLS 3
#define N 3
#define V 11
#include "function11.h"

int main()
{
    int exit = 0;
    int choice = 0;
    int A[NROWS][NCOLS], B[NROWS][NCOLS], C[NROWS][NCOLS], vectora[V], vectorb[V];
    FILE *fp;

    fp = fopen("mata.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file! 1\n");
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
        printf("Error opening file! 2\n");
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

    fp = fopen("vecta.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file! 3\n");
        return 1;
    }
    else
    {
        for (int i = 0; i < V; i++)
        {
            fscanf(fp, "%d", &vectora[i]);
        }
        fclose(fp);
    }

    fp = fopen("vectb.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file! 4\n");
        return 1;
    }
    else
    {
        for (int i = 0; i < V; i++)
        {
            fscanf(fp, "%d", &vectorb[i]);
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
            dot_product(vectora, vectorb, N);
            break;
        case 3:
            add(A, B, C);
            break;
        case 4:
            sub(A, B, C);
            break;
        case 5:
            matrix_mult(A, B, C);
            break;
        case 6:
            det3by3(A);
            det3by3(B);
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