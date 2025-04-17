#include <stdio.h>
#include <math.h>

#define M 3
#define N 3

int main()
{
	int input, i, j, k, exit = 0;
	int A[M][N], B[M][N], C[M][N];
	
	printf("Enter matrix A	: \n");
	for( i = 0; i < M; i++)
		for( j = 0; j < N; j++)
		{
			printf("A[%d][%d]	: ",i, j);
			scanf("%d", &A[i][j]);
		}
		
	printf("Enter matrix B	: \n");
	for( i = 0; i < M; i++)
		for( j = 0; j < N; j++)
		{
			printf("B[%d][%d]	: ",i, j);
			scanf("%d", &B[i][j]);
		}
		
		do{
			
		printf("\nChoices of operations :\n");
		printf("---------------------------------\n");
		printf("1. Print the matrices.\n");
		printf("2. Addition.\n");
		printf("3. Subtraction.\n");
		printf("4. Multiplication.\n");
		printf("5. Exit.\n");
		printf("Enter choice : ");
		scanf("%d", &input);
	
	switch(input)
	{
		case 1:
			printf("Matrix A : \n");
			for(i=0;i<M;i++)
			{
			 for(j=0;j<N;j++)
			 printf("%6d", A[i][j]);
			 printf("\n");
			}
			printf("Matrix B : \n");
			for(i=0;i<M;i++)
			{
			 for(j=0;j<N;j++)
			 printf("%6d", B[i][j]);
			 printf("\n");
			}
			break;
			
		case 2:
			for(i=0;i<M;i++)
			 for(j=0;j<N;j++)
			 C[i][j] = A[i][j]+B[i][j];
			printf("A+B : \n");
			for(i=0;i<M;i++)
			{
			 for(j=0;j<N;j++)
			 printf("%6d",C[i][j]);
			 printf("\n");
			}
			break;
			
		case 3:
			for(i=0;i<M;i++)
			 for(j=0;j<N;j++)
			 C[i][j] = A[i][j]-B[i][j];
			printf("A-B : \n");
			for(i=0;i<M;i++)
			{
			 for(j=0;j<N;j++)
			 printf("%6d",C[i][j]);
			 printf("\n");
			}
			break;
			
		case 4:
			for(i=0;i<M;i++)
			 for(j=0;j<N;j++)
			 {
			 C[i][j]=0;
			 for(k=0;k<N;k++)
			 C[i][j]+=A[i][k]*B[k][j];
			 }
			printf("A X B : \n");
			for(i=0;i<M;i++)
			{
			 for(j=0;j<N;j++)
			 printf("%6d",C[i][j]);
			 printf("\n");
			}
			break;
			
		case 5:
			printf("Bye");
			exit = 1;
			break;
		
		default:
			printf("WRONG!");
			break;
	}
		
		
		}while(exit == 0);
	


	return 0;
}