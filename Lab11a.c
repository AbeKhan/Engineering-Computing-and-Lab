//Lab11a.c

#include <stdio.h>
#include <math.h>

#define NROWS 3
#define NCOLS 3
#define N 3

#include "function.h"

FILE *out;




int main()
{
	int A[NROWS][NCOLS],  B[NROWS][NCOLS], C[NROWS][NCOLS], choice, exit = 0, j, k, i;
	
	
	printf("Enter matrix A	: \n");
	for( i = 0; i < N; i++)
		for( j = 0; j < N; j++)
		{
			printf("A[%d][%d]	: ",i, j);
			scanf("%d", &A[i][j]);
		}
		
	printf("Enter matrix B	: \n");
	for( i = 0; i < N; i++)
		for( j = 0; j < N; j++)
		{
			printf("B[%d][%d]	: ",i, j);
			scanf("%d", &B[i][j]);
		}
	
do{
	printf("\nChoices of operations:\n");
	printf("---------------------------------\n");
	printf("1. Print the matrices to the screen.\n");
	printf("2. Addition.\n");
	printf("3. Subtraction.\n");
	printf("4. Multiplication.\n");
	printf("5. Determinant of each matrix.\n");
	printf("6. Record to file.\n");
	printf("7. Exit.\n");
	printf("Enter choice : ");
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1:
			printf("Matrix A : \n");
			for(i=0;i<N;i++)
			{
			 for(j=0;j<N;j++)
			 printf("%6d", A[i][j]);
			 printf("\n");
			}
			printf("Matrix B : \n");
			for(i=0;i<N;i++)
			{
			 for(j=0;j<N;j++)
			 printf("%6d", B[i][j]);
			 printf("\n");
			}
			break;
			
		case 2:
			for(i=0;i<N;i++)
			 for(j=0;j<N;j++)
			 C[i][j] = A[i][j]+B[i][j];
			printf("A+B : \n");
			for(i=0;i<N;i++)
			{
			 for(j=0;j<N;j++)
			 printf("%6d",C[i][j]);
			 printf("\n");
			}
			break;
			
		case 3:
			for(i=0;i<N;i++)
			 for(j=0;j<N;j++)
			 C[i][j] = A[i][j]-B[i][j];
			printf("A-B : \n");
			for(i=0;i<N;i++)
			{
			 for(j=0;j<N;j++)
			 printf("%6d",C[i][j]);
			 printf("\n");
			}
			break;
			
		case 4:
			for(i=0;i<N;i++)
			 for(j=0;j<N;j++)
			 {
			 C[i][j]=0;
			 for(k=0;k<N;k++)
			 C[i][j]+=A[i][k]*B[k][j];
			 }
			printf("A X B : \n");
			for(i=0;i<N;i++)
			{
			 for(j=0;j<N;j++)
			 printf("%6d",C[i][j]);
			 printf("\n");
			}
			break;
			
		case 5:
		printf("Determinant of matrix A is %d\n", det3by3(A));
		printf("Determinant of matrix B is %d\n", det3by3(B));
			break;
			
		case 6:
		
			out = fopen("matdata.txt","w");
			
			if(out == NULL)
			{
				printf("File has failed to create. \n");
			}
			else{
				fprintf(out,"Matrix A : \n");
				for(i=0;i<N;i++)
				{
				 for(j=0;j<N;j++)
				 fprintf(out,"%6d", A[i][j]);
				 fprintf(out,"\n");
				}
				fprintf(out,"Matrix B : \n");
				for(i=0;i<N;i++)
				{
				 for(j=0;j<N;j++)
				 fprintf(out,"%6d", B[i][j]);
				 fprintf(out,"\n");
				}
				 
				for(i=0;i<N;i++)
				 for(j=0;j<N;j++)
				 {
				 C[i][j]=0;
				 for(k=0;k<N;k++)
				 C[i][j]+=A[i][k]*B[k][j];
				 }
				fprintf(out,"A X B : \n");
				for(i=0;i<N;i++)
				{
				 for(j=0;j<N;j++)
				 fprintf(out,"%6d",C[i][j]);
				 fprintf(out,"\n");
				}
					
				printf("\nFile is successfully created\n");
				
				fclose(out);
			}
			break;
			
		case 7:
			printf("\nBye");
			exit = 7;
			break;
		
		default:
			printf("WRONG!");
			break;
			
		
	}
	
	
	
	}while(exit != 7);
	
	return 0;
}