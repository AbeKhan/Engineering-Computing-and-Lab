//lab12a.c

#include <stdio.h>
#include <math.h>
#define FILENAME "lab12_4.txt"
#define N 100

#include "function_lib.h"


int main()
{
	FILE *file;
	int i,n,j,choice;
	double data[N];
	
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
	
	do
    {    
        printf("\n\n");
		printf("File name : %s\n", FILENAME);
        printf("Choices of operations : \n");
        printf("-------------------------------\n");
        printf("1. Find average.    \n");
		printf("2. The standard deviation. \n");
		printf("3. Max and min value. \n");
        printf("4. Exit. \n");
        printf("Enter choice : ");
        scanf("%d",&choice);
        printf("\n");
        switch(choice)
        {
             case 1 :
                printf("The average is %.2lf",mean(data, n));
                break;
			 case 2:
				printf("The standard deviation is %.2lf", std_dev(data, n));
				break;
			 case 3:
				printf("The max is %.2lf\n", max_data(data,n));
				printf("The min is %.2lf\n", min_data(data,n));
				break;
             case 4:
                printf("Bye!\n");
                break;
             default :
                printf("Wrong choice, please try again. \n");
                break;
        }
    }while(choice !=4);

	return 0;
}
