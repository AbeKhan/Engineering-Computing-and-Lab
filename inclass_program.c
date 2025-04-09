/**********************************************************/
/*  By : Abraham Khan                                     */
/*                                                        */
/*  Program to calculate informations of a 2D data        */
/**********************************************************/

#include <stdio.h>
#include <math.h>
#define NROWS 7
#define NCOLS 4
#include "practice.h"


int main (void)

{
    /* Declaration of variables */
   double data[NROWS][NCOLS] =
            {{253.14, 222.89, 250.01, 217.45},
             {203.57, 211.57, 195.24, 200.14},
             {249.22, 246.24, 213.10, 255.98},
             {212.12, 200.45, 245.98, 214.22},
             {240.91, 252.86, 221.36, 280.25},
             {200.11, 199.10, 256.37, 244.14},
             {241.00, 231.86, 242.22, 250.34}};

    int i,choice;
    
    do
    {    
        printf("\n");
        printf("Choices of operations : \n");
        printf("-------------------------------\n");
        printf("1. Print the data.\n");
        printf("2. Print data and the max of each column.\n");
        printf("3. Done with this data. \n");
        printf("Enter choice : ");
        scanf("%d",&choice);
        printf("\n");
        switch(choice)
        {
             case 1 :
              
                break;
             case 2 :
               
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