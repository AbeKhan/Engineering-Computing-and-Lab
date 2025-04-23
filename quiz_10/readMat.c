/**********************************************************/
/*  By :Abraham Khan                                      */
/*                                                        */
/*  Program to read matrix files                          */      
/**********************************************************/

#include <stdio.h>
#include <math.h>
#define NROWS 3
#define NCOLS 3
#define N 3
#define FILENAME1 "matdata1.txt"
#define FILENAME2 "matdata2.txt"
#include "matfunction.h"

int main (void)
{
    FILE *in1,*in2;
    double x;
    int A[NROWS][NCOLS],B[NROWS][NCOLS], C[NROWS][NCOLS];
    int i,j;
    
    in1 = fopen(FILENAME1,"r");
    in2 = fopen(FILENAME2,"r");
    if(in1 == NULL || in2 == NULL )
        printf("File(s) is failed to open. \n");
    else
    {
       printf("Matrix B : \n");
       for(i=0;i<NROWS;i++)
       {
           for(j=0;j<NCOLS;j++)
           {
              fscanf(in1,"%d",&A[i][j]);
              printf("%4d ",A[i][j]);
           }
           printf("\n");
       }
       
       printf("Matrix B : \n");
       for(i=0;i<NROWS;i++)
       {
           for(j=0;j<NCOLS;j++)
           {
              fscanf(in2,"%d",&B[i][j]);
              printf("%4d ",B[i][j]);
           }
           printf("\n");
       }
       
       
       
       
       printf("Files are successfully read. \n");
	   
	   printf("A+B :\n");
	   add(A, B, C);
	   printmat(C);
	   
       fclose(in1);
       fclose(in2);
       
       /* OPERATION ON MATRICES*/
       
    }
    
    
    return 0;
}