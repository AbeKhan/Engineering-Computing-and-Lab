//lab12b.c

#include <stdio.h>
#include <math.h>
#define FILENAME "lab12_3.txt"
#define FILENAME2 "lab12_4.txt"
#define N 100

#include "function_lib.h"
#include "function.h"


int main()
{
	FILE *file;
	int i,n,j,choice;
	double data[N], data2[N];
	
	file = fopen(FILENAME, "r");
	
	if(file == NULL)
	{
		printf("Failed to open file. \n");
	}
	else
	{
		fscanf(file, "%d", &n);
		
		for(i=0; i < n; i++)
		{
			fscanf(file, "%lf", &data[i]);
		}
		fclose(file);
	}
	
	file = fopen(FILENAME2, "r");
	
	if(file == NULL)
	{
		printf("Failed to open file. \n");
	}
	else
	{
		fscanf(file, "%d", &n);
		
		for(i=0; i < n; i++)
		{
			fscanf(file, "%lf", &data2[i]);
		}
		fclose(file);
	}
	
	do
    {    
        printf("\n\n");
		printf("File name : %s & %s\n", FILENAME, FILENAME2);
        printf("Choices of operations : \n");
        printf("-------------------------------\n");
        printf("1. The percent difference.    \n");
		printf("2. The dot product. \n");
        printf("3. Exit. \n");
        printf("Enter choice : ");
        scanf("%d",&choice);
        printf("\n");
        switch(choice)
        {
             case 1 :
                printf("The percent difference is %.2lf%%", perc_diff(mean(data, n), mean(data2, n)));
                break;
			 case 2:
				printf("The dot product is %.2lf", dot_product(data, data2, n));
				break;
             case 3:
                printf("Bye!\n");
                break;
             default :
                printf("Wrong choice, please try again. \n");
                break;
        }
    }while(choice != 3);

	return 0;
}
