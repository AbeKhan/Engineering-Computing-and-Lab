#include <stdio.h>
#include <math.h>

#define N 10

int main()
{
    double sum, mean, standard_deviation, max, min, x[N];
    int n, choice;
    char holder;
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
            printf("3. The maximum and minumum.\n");
            printf("4. The data of specific date.\n");
            printf("5. Done with this data.\n");
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
                max = x[0];
                min = x[0];
                for (int i = 1; i < n; i++)
                {
                    if (x[i] > max)
                    {
                        max = x[i];
                    }
                    if (x[i] < min)
                    {
                        min = x[i];
                    }
                }
                printf("The max production is %0.2lf thousand barrels per day\n", max);
                printf("and the min production is %0.2lf thousand barrels per day\n", min);
                break;
            case 4:
                printf("Enter the data # (1-5) : ");
                scanf("%d", &n);
                if (n < 1 || n > 10)
                {
                    printf("Invalid data number\n");
                    printf("\nEnter the data # (1-5) : ");
                    scanf("%d", &n);
                }
                else
                {
                    printf("The data of specific data is %0.0lf thousand barrels per day\n", x[n - 1]);
                }
                break;
            case 5:
                printf("\nAnalysis done.\n");
                printf("Another operations with new data  (Y/N) ");
                scanf(" %c", &holder);
                break;
            default:
                printf("Wrong choice, please try again.\n");
                break;
            }
        } while (choice != 5);
    } while (holder == 'Y' || holder == 'y');
    return 0;
}
