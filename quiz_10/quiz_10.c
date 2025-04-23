/**********************************************************/
/*  By : Abraham Khan                                     */
/*                                                        */
/*  Program to calculate informations of a 1D data        */
/**********************************************************/

#include <stdio.h>
#include <math.h>
#define FILENAME "datatype1.txt"
#define N 20
#include "practice.h"

int main (void)

{
    /* Declaration of variables */
   FILE *in;
   double data[N];        
   int i,j,n,choice;
    
    /* Input data, read it from file*/
    in = fopen(FILENAME,"r");
	if (in == NULL)
	{
		printf("Failed to open file(s), \n");
	}
	else
	{
		fscanf(in, "%d", &n);
		for(i=0; i<n;i++)
		{
			fscanf(in, "%lf", &data[i]);
		}
		fclose(in);
	}
	
    do
    {    
        printf("\n\n");
        printf("Choices of operations : \n");
        printf("-------------------------------\n");
        printf("1. Print the data.\n");
        printf("2. Find average.    \n");
        printf("3. Done with this data. \n");
        printf("Enter choice : ");
        scanf("%d",&choice);
        printf("\n");
        switch(choice)
        {
             case 1 :
                printf("Data \n");
                for(i=0;i<n;i++)
                   printf("%.2lf \n",data[i]);    
                printf("\n");               
                break;
             case 2 :
                printf("The average is %.2lf",mean(data, n));
                break;
             
             case 3 :
                printf("Bye!\n");
                break;
             default :
                printf("Wrong choice, please try again. \n");
                break;
        }
    }while(choice !=3);
        
return 0;

}