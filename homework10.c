/*
	Author: Abraham Khan
	Project Name: homework10.c

*/

#include <stdio.h>
#include <math.h>

int main()
{
	int m, n, i, j, choice;
    FILE *fp;

	char exit = 'y';

	printf("Program to process mxn M\n");
	printf("=====================================\n");
	printf("Please enter the row width m (1-5)   : ");
	scanf("%d", &m);
	printf("Plese enter the column width n (1-5) : ");
	scanf("%d", &n);

	double matrix[m][n];
	printf("\nMatrix size of M is %dx%d\n", m, n);
	printf("\nEnter the M values :\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("M[%d][%d] = ", i, j);
			scanf("%lf", &matrix[i][j]);
		}
	}

	do
	{

		printf("\nPlease choose an operation.\n");
		printf("1. Just display the matrix\n");
		printf("2. Display the matrix and its transpose\n");
		printf("3. Find max value of each column and write to file\n");
		printf("4. Exit\n");
		printf("Your choice (1 - 4) : ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			printf("M is :\n");
			for (i = 0; i < m; i++)
			{
				for (j = 0; j < n; j++)
				{
					printf("	%0.2lf ", matrix[i][j]);
				}
				printf("\n");
			}

			printf("More operations? (Y/N) : ");
			scanf(" %c", &exit);
			while (exit != 'Y' && exit != 'N')
			{
				printf("Invalid input. Please enter Y or N: ");
				scanf(" %c", &exit);
			}
			break;

		case 2:
			printf("M is :\n");
			for (i = 0; i < m; i++)
			{
				for (j = 0; j < n; j++)
				{
					printf("	%0.2lf ", matrix[i][j]);
				}
				printf("\n");
			}
			printf("Transpose of M is :\n");
			for (i = 0; i < n; i++)
			{
				for (j = 0; j < m; j++)
				{
					printf("	%0.2lf ", matrix[j][i]);
				}
				printf("\n");
			}
			printf("More operations? (Y/N) : ");
			scanf(" %c", &exit);
			while (exit != 'Y' && exit != 'N')
			{
				printf("Invalid input. Please enter Y or N: ");
				scanf(" %c", &exit);
			}
			break;

		case 3:
            fp = fopen("max_data.txt", "w");
			printf("M is :\n");
            fprintf(fp,"M is :\n");
			for (i = 0; i < m; i++)
			{
				for (j = 0; j < n; j++)
				{
					printf("	%0.2lf ", matrix[i][j]);
                    fprintf(fp,"	%0.2lf ", matrix[i][j]);
				}
				printf("\n");
                fprintf(fp,"\n");
			}

			printf("Max value ");
            fprintf(fp,"Max value ");
			for (j = 0; j < n; j++)
			{
				double max = matrix[0][j];
				for (i = 1; i < m; i++)
				{
					if (matrix[i][j] > max)
					{
						max = matrix[i][j];
					}
				}
				printf("	%0.2lf", max);
                fprintf(fp,"	%0.2lf", max);
			}
            fclose(fp);
            printf("\nFile is successfully created!");
			printf("\nMore operations? (Y/N) : ");
			scanf(" %c", &exit);
			while (exit != 'Y' && exit != 'N')
			{
				printf("Invalid input. Please enter Y or N: ");
				scanf(" %c", &exit);
			}
			break;

		case 4:
			printf("\nBYE!\n");
			exit = 'N';
			break;

		default:
			break;
		}
	} while (exit != 'N');

	return 0;
}