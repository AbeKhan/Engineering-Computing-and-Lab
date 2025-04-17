//Lab11b.c
#include <stdio.h>
#include <math.h>

#include <stdio.h>
#include <math.h>

#define N 10

int main()
{
    double sum, mean, standard_deviation, max, min, x[N];
    int n, choice;
    char holder;
	
	FILE *out;
    do
    {

        printf("Enter number of data n (2-10)   : ");
        scanf("%d", &n);

        while (n < 2 || n > 10)
        {
            printf("Invalid number of data\n");
            printf("Re-enter number of data n (2-10)   : ");
            scanf("%d", &n);
        }

        for (int i = 0; i < n; i++)
        {
            printf("Enter data - %d : ", i + 1);
            scanf("%lf", &x[i]);
        }

        do
        {

            printf("\nChoices of operations :\n");
            printf("---------------------------\n");
            printf("1. The average.\n");
            printf("2. The standard deviation.\n");
            printf("3. Write to file.\n");
            printf("4. Done with this data.\n");
            printf("Enter choice : ");
            scanf("%d", &choice);

            switch (choice)
            {
            case 1:
                sum = 0;
                for (int i = 0; i < n; i++)
                {
                    sum += x[i];
                }
                mean = sum / n;
                printf("The average is %0.2lf thousand barrels per day.\n ", mean);
                break;
            case 2:
                sum = 0;
                for (int i = 0; i < n; i++)
                {
                    sum += fabs(x[i]);
                }
                mean = sum / n;
                sum = 0;
                for (int i = 0; i < n; i++)
                {
                    sum += pow(x[i] - mean, 2);
                }
                standard_deviation = sqrt(sum / (n - 1));
                printf("The standard deviation is %0.2lf thousand barrels per day.\n", standard_deviation);
                break;
            case 3:
                out = fopen("lab11data.txt","w");
			
			if(out == NULL)
			{
				printf("File has failed to create. \n");
			}
			else
			{
				
				fprintf(out,"%d\n", n);
				for(int i = 0; i < n; i++)
				{
					fprintf(out, "%.2lf", x[i]);
					fprintf(out, "\n");
				
				}
				printf("\nFile is successfully created\n");
				
				fclose(out);
			}
			
                break;
            case 4:
                printf("\nAnalysis done.\n");
                printf("Another operations with new data  (Y/N) ");
                scanf(" %c", &holder);
                break;
            default:
                printf("Wrong choice, please try again.\n");
                break;
            }
        } while (choice != 4);
    } while (holder == 'Y' || holder == 'y');
    return 0;
}
