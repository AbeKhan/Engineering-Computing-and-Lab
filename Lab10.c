/*
	Author: Abraham Khan
	Project Name: Lab10.c
*/
#include <stdio.h>
#include <math.h>

#define NROWS 7
#define NCOLS 4

#include "Lab10.h"

int main()
{
    int colnum, row1, row2, choice;
    char holder = 'y';

    double data[NROWS][NCOLS] = {
		{253.14, 222.89, 250.01, 217.45},
		{203.57, 211.57, 195.24, 200.14},
		{249.22, 246.24, 213.10, 255.98},
		{212.12, 200.45, 245.98, 214.22},
		{240.91, 252.86, 221.36, 280.25},
		{200.11, 199.10, 256.37, 244.14},
		{241.00, 231.86, 242.22, 250.34}
		};
do{
    printf("Enter column number (1-4): ");
    scanf("%d", &colnum);

    while (colnum < 1 || colnum > NCOLS)
    {
        printf("\nInvalid column number.\n");
        printf("Re-enter column number (1-4): ");
        scanf("%d", &colnum);
    }

    printf("Data range from (1-7): ");
    scanf("%d", &row1);
    printf("to (1-7): ");
    scanf("%d", &row2);

    while (row1 < 1 || row2 > NROWS || row2 <= row1)
    {
        printf("\nInvalid data range.\n");
        printf("Data range from (1-7): ");
        scanf("%d", &row1);
        printf("to (1-7): ");
        scanf("%d", &row2);
    }

    printf("Data:\n");
    for (int i = row1; i <= row2; i++)
    {
        printf("%6.2lf ", data[i - 1][colnum - 1]);
    }
    printf("\n");

    do
    {
        do {
            printf("\nChoices of operations:\n");
            printf("1. The average.\n");
            printf("2. The standard deviation.\n");
			printf("3. Percent difference with another set\n");
            printf("4. Done with this data.\n");
            printf("Enter choice: ");
            scanf("%d", &choice);

            if (choice < 1 || choice > 4) {
                printf("Invalid choice. Please enter a valid option.\n");
            }
        } while (choice < 1 || choice > 4);

        switch (choice)
        {
        case 1:
            printf("The average is %.2lf watts.\n", col_mean(data,row1,row2,colnum) );
            break;
        case 2:
            printf("The standard deviation is %.2lf watts.\n", col_std_dev(data,row1,row2,colnum) );
            break;
		case 3:
			int colum2;
			printf("\nWeek to compare : ");
			scanf("%d", &colum2);
			
			while((colum2 == colnum) || (colum2 > 4) || (colum2 < 1) )
			{
				printf("Please choose different week.\n");
				printf("Week to compare : ");
				scanf("%d", &colum2);
			}
		
			printf("\nPercent difference is %5.2lf%%.", perdiff(col_mean(data,row1,row2,colnum), col_mean(data,row1,row2,colum2)));
			
			break;
        case 4:
            printf("\nAnalysis done.\n");
            printf("Another operation with new data (Y/N): ");
            while (1)
            {
                scanf(" %c", &holder);
                if (holder == 'Y' || holder == 'y' || holder == 'N' || holder == 'n')
                {
                    break;
                }
                else
                {
                    printf("Invalid input. Please enter 'Y' or 'N': ");
                }
            }
            break;
        }
    } while (choice != 4);
}while(holder == 'Y' || holder == 'y');

    return 0;
}
