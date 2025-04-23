/*** STAT FUNCTIONS FOR 1D Data ***/

/*  Mean function with npts is the number of the data */

double mean(double x[], int npts)
{
   int k;
   double sum=0;

   for(k=0;k<=npts-1;k++)
   sum+=x[k];

   return sum/npts;
}

/* end */

/*  Standard deviation function with npts is the number of the data */

double std_dev(double x[],int npts)
{
    int k;
    double sum=0,mu;
    double mean(double x[],int npts);

    mu = mean(x,npts);
    for(k=0;k<=npts-1;k++)   
      sum += (x[k]-mu)*(x[k]-mu);

    return sqrt(sum/(npts-1));
}
/* Maximum value with npts is the number of the data */
double max_data(double x[],int npts)
{
    int i;
    double maxval=x[0];
    for(i=1;i<npts;i++)
        if(x[i]>maxval)
            maxval = x[i];
   return maxval;
}
/* Minimum value with npts is the number of the data */
double min_data(double x[],int npts)
{
    int i;
    double minval=x[0];
    for(i=1;i<npts;i++)
        if(x[i]<minval)
            minval = x[i];
   return minval;
}

double perc_diff(double A, double B)
{
	return fabs(A-B) / ((A+B)/2) * 100;
}

