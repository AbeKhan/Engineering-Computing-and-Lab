// Author: Abraham Khan
// Homework 11
// Date: 4/27/2025

#include <stdio.h>
#include <math.h>

#define NROWS 3
#define NCOLS 3
#define N 3
#define V 20
#include "function11.h"

int main()
{
    int exit = 0;
    int choice = 0;
    int vectSize;
    int A[NROWS][NCOLS], B[NROWS][NCOLS], C[NROWS][NCOLS], vectora[V], vectorb[V];
    char ch;
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
        fscanf(fp, "%d", &vectSize);
        for (int i = 0; i < vectSize; i++)
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
        fscanf(fp, "%d", &vectSize);
        for (int i = 0; i < vectSize; i++)
        {
            fscanf(fp, "%d", &vectorb[i]);
        }
        fclose(fp);
    }

    do
    {
        printf("\nPLEASE CHOOSE THE OPERATION\n");
        printf("1. Transpose a 2D matrix\n");
        printf("2. Dot Product of two vectors\n");
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
            printf("\nThe matrix is :\n");
            printmat(A);

            printf("\nThe transpose matrix is :\n");
            printmat(C);

            printf("Do you want more operations? (Y/N) ? ");
            scanf(" %c", &ch);
            while (ch != 'Y' && ch != 'y' && ch != 'N' && ch != 'n')
            {
                printf("\nInvalid input. Please enter Y or N: ");
                scanf(" %c", &ch);
            }
            if (ch == 'Y' || ch == 'y')
            {
                break;
            }
            else
            {
                printf("BYE !\n");
                exit = 1;
                break;
            }

            break;
        case 2:
            printf("\nDot product is %d \n", dot_product(vectora, vectorb, vectSize));

            printf("\nDo you want more operations? (Y/N) ? ");
            scanf(" %c", &ch);
            while (ch != 'Y' && ch != 'y' && ch != 'N' && ch != 'n')
            {
                printf("\nInvalid input. Please enter Y or N: ");
                scanf(" %c", &ch);
            }
            if (ch == 'Y' || ch == 'y')
            {
                break;
            }
            else
            {
                printf("BYE !\n");
                exit = 1;
                break;
            }
            break;
        case 3:
            add(A, B, C);
            printf("A =\n");
            printmat(A);
            printf("B =\n");
            printmat(B);
            printf("A + B =\n");
            printmat(C);

            printf("Do you want more operations? (Y/N) ? ");
            scanf(" %c", &ch);
            while (ch != 'Y' && ch != 'y' && ch != 'N' && ch != 'n')
            {
                printf("\nInvalid input. Please enter Y or N: ");
                scanf(" %c", &ch);
            }
            if (ch == 'Y' || ch == 'y')
            {
                break;
            }
            else
            {
                printf("BYE !\n");
                exit = 1;
                break;
            }
            break;
        case 4:
            sub(A, B, C);
            printf("A =\n");
            printmat(A);
            printf("B =\n");
            printmat(B);
            printf("A - B =\n");
            printmat(C);

            printf("Do you want more operations? (Y/N) ? ");
            scanf(" %c", &ch);
            while (ch != 'Y' && ch != 'y' && ch != 'N' && ch != 'n')
            {
                printf("\nInvalid input. Please enter Y or N: ");
                scanf(" %c", &ch);
            }
            if (ch == 'Y' || ch == 'y')
            {
                break;
            }
            else
            {
                printf("BYE !\n");
                exit = 1;
                break;
            }
            break;
        case 5:
            matrix_mult(A, B, C);
            printf("A =\n");
            printmat(A);
            printf("B =\n");
            printmat(B);
            printf("A X B =\n");
            printmat(C);

            printf("Do you want more operations? (Y/N) ? ");
            scanf(" %c", &ch);
            while (ch != 'Y' && ch != 'y' && ch != 'N' && ch != 'n')
            {
                printf("\nInvalid input. Please enter Y or N: ");
                scanf(" %c", &ch);
            }
            if (ch == 'Y' || ch == 'y')
            {
                break;
            }
            else
            {
                printf("BYE !\n");
                exit = 1;
                break;
            }
            break;
        case 6:
            printf("A =\n");
            printmat(A);
            printf("Determinant of A = %d\n", det3by3(A));

            printf("B =\n");
            printmat(B);
            printf("Determinant of B = %d\n", det3by3(B));

            printf("Do you want more operations? (Y/N) ? ");
            scanf(" %c", &ch);
            while (ch != 'Y' && ch != 'y' && ch != 'N' && ch != 'n')
            {
                printf("\nInvalid input. Please enter Y or N: ");
                scanf(" %c", &ch);
            }
            if (ch == 'Y' || ch == 'y')
            {
                break;
            }
            else
            {
                printf("BYE !\n");
                exit = 1;
                break;
            }
            break;
        case 7:
            printf("BYE !\n");
            exit = 1;
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (exit != 1);

    return 0;
}