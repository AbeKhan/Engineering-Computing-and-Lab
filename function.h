//function.h

/*** FUNCTIONS FOR MATRICES ***/
/*
int dot_product(int a[],int b[],int n)
{
  int k;
  int sum=0;
  
  for (k=0;k<n;k++)
     sum+= a[k]*b[k];
	 
  return sum;
}
*/
double dot_product(double a[],double b[],int n)
{
  int k;
  double sum=0;
  
  for (k=0;k<n;k++)
     sum+= a[k]*b[k];
	 
  return sum;
}
/*
int det3by3(int a[N][N])
{
   int k;
   int sum;
   
   sum=(a[0][0]*a[1][1]*a[2][2])+(a[0][1]*a[1][2]*a[2][0])+(a[0][2]*a[1][0]*a[2][1])-(a[2][0]*a[1][1]*a[0][2])-(a[2][1]*a[1][2]*a[0][0])-(a[2][2]*a[1][0]*a[0][1]);
   
   return sum;
}

void transpose(int b[NROWS][NCOLS],int bt[NROWS][NCOLS])
{
   int i,j;
   
   for (i=0;i<NROWS;i++)
	   for (j=0;j<NCOLS;j++)
		   bt[j][i]=b[i][j];
	   
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
void sub(int a[NROWS][NCOLS],int b[NROWS][NCOLS],int c[NROWS][NCOLS])
{
   int i,j;
   
   for (i=0;i<NROWS;i++)
	   for (j=0;j<NCOLS;j++)
		   c[i][j]=a[i][j]-b[i][j];
	   
   return;
}
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

/* SORTING */
/*
void sort(double x[],int n)
{
  int k,j,m;
  double hold;
  
  for(k=0;k<=n-2;k++)
  {
    m = k;
	for(j=k+1;j<=n-1;j++)
		if(x[j] < x[m])
			m=j;
	hold = x[m];
	x[m] = x[k];
	x[k] = hold;
  }
  return;
}

*/