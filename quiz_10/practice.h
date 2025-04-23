double mean(double x[], int npts)
{
   int k;
   double sum=0;

   for(k=0;k<=npts-1;k++)
   sum+=x[k];

   return sum/npts;
}
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