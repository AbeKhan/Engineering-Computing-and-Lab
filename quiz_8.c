#include <stdio.h>
#define M  9//Max row size
#define N  6//Max column size
int main()
{
   int i,j,m,n;
   float sum;
   float data[M][N] = {{20158,    8810,    1841,    3450,    133,    1683},
                       {20820,    8927,    1711,    4498,    335,    1281},
                       {21831,    9008,    1817,    4253,    213,    1734},
                       {18545,    8168,    1598,    3232,    312,     829},
                       {19791,    8481,    1722,    3178,    305,    1436},
                       {20673,    8325,    1488,    3839,    341,    1597},
                       {19597,    8086,    1558,    4108,   506,    1577},
                       {21087,    8302,    1504,    4506,    415,    1978},
                       {21075,    8328,    1738,    4599,    314,    1296}};

   /* Print array to screen */
   for(i=0;i<M-1;i++)//outer loop
   {
     for(j=0;j<N-1;j++)//inner loop
     {  
       printf("%6.2lf ", data[i][j]);
     }
     printf("\n");
   }
   
   /* Calculate and print data on row 3 to screen (row numbering start with 1)*/
   sum = 0;
   for(int i = 0; i < M-1; i++)
       sum += data[2][i];
   sum/= N;
   
   printf("Mean is %6.2lf \n",sum);
   
   return 0;
}