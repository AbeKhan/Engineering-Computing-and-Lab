/* Function for printing matrix a to the screen */
void printmat(int a[NROWS][NCOLS])
{
   int i,j;
   
   for(i=0;i<NROWS;i++)
   {
    for (j=0;j<NCOLS;j++)
      printf("%4d ",a[i][j]);
        printf("\n");
   }
   printf("\n");
   return;
}
void add(int a[NROWS][NCOLS],int b[NROWS][NCOLS],int c[NROWS][NCOLS])
{
   int i,j;
   
   for (i=0;i<NROWS;i++)
       for (j=0;j<NCOLS;j++)
           c[i][j]=a[i][j]+b[i][j];
       
   return;
}
void matrix_mult(int a[N][N],int b[N][N],int c[N][N])
{
   int i,j,k;
   
   for (i=0;i<N;i++)
       for (j=0;j<N;j++)
       {
          c[i][j] = 0;
          for (k=0;k<N;k++)
              c[i][j] += a[i][k]*b[k][j];
       }           
}