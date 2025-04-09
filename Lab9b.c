#include <stdio.h>
#include <math.h>

#define M 9
#define N 6

int main()
{
    int col, datanum1, datanum2, choice;
    char holder = 'y';
    float sum, mean, standard_deviation;

    float x[M][N] = {{20158, 8810, 1841, 3450, 133, 1683},
                     {20820, 8927, 1711, 4498, 335, 1281},
                     {21831, 9008, 1817, 4253, 213, 1734},
                     {18545, 8168, 1598, 3232, 312, 829},
                     {19791, 8481, 1722, 3178, 305, 1436},
                     {20673, 8325, 1488, 3839, 341, 1597},
                     {19597, 8086, 1558, 4108, 506, 1577},
                     {21087, 8302, 1504, 4506, 415, 1978},
                     {21075, 8328, 1738, 4599, 314, 1296}};
do{
    printf("Enter column number (1-6): ");
    scanf("%d", &col);

    while (col < 1 || col > N)
    {
        printf("\nInvalid column number.\n");
        printf("Re-enter column number (1-6): ");
        scanf("%d", &col);
    }

    printf("Data range from (1-9): ");
    scanf("%d", &datanum1);
    printf("to (1-9): ");
    scanf("%d", &datanum2);

    while (datanum1 < 1 || datanum2 > M || datanum2 <= datanum1)
    {
        printf("\nInvalid data range.\n");
        printf("Data range from (1-9): ");
        scanf("%d", &datanum1);
        printf("to (1-9): ");
        scanf("%d", &datanum2);
    }

    printf("Data:\n");
    for (int i = datanum1; i < datanum2; i++)
    {
        printf("%6.2f ", x[i - 1][col - 1]);
    }
    printf("\n");

    do
    {
        do {
            printf("Choices of operations:\n");
            printf("1. The average.\n");
            printf("2. The standard deviation.\n");
            printf("3. Done with this data.\n");
            printf("Enter choice: ");
            scanf("%d", &choice);

            if (choice < 1 || choice > 3) {
                printf("Invalid choice. Please enter a valid option.\n");
            }
        } while (choice < 1 || choice > 3);

        switch (choice)
        {
        case 1:
            sum = 0;
            for (int i = datanum1; i < datanum2; i++)
            {
                sum += x[i - 1][col - 1];
            }
            mean = sum / (datanum2 - datanum1);
            printf("The average is %.2f thousand barrels per day.\n", mean);
            break;
        case 2:
            sum = 0;
            for (int i = datanum1; i < datanum2; i++)
            {
                sum += x[i - 1][col - 1];
            }
            mean = sum / (datanum2 - datanum1);
            sum = 0;
            for (int i = datanum1; i < datanum2; i++)
            {
                sum += pow(x[i - 1][col - 1] - mean, 2);
            }
            standard_deviation = sqrt(sum / ((datanum2 - datanum1) - 1));
            printf("The standard deviation is %.2f thousand barrels per day.\n", standard_deviation);
            break;
        case 3:
            printf("\nAnalysis done.\n");
            printf("Another operation with new data (Y/N): ");
            while (1)
            {
                scanf(" %c", &holder);
                if (holder == 'Y' || holder == 'y' || holder == 'N' || holder == 'n')
                {
                    break;
                }
                else
                {
                    printf("Invalid input. Please enter 'Y' or 'N': ");
                }
            }
            break;
        }
    } while (choice != 3);
}while(holder == 'Y' || holder == 'y');

    return 0;
}
