/*
	Author: Abraham Khan
	Project Name: Lab10.h

*/
double pererr(double A, double B)
{	
	return fabs((A-B)/A)*100;
}

double perdiff(double A, double B)
{
	return fabs((A-B)/((A+B)/2))*100;
}

double col_mean(double x[NROWS][NCOLS], int r1, int r2, int col)
{
	int i;
	int npts = r2-r1+1;
	double sum=0;


	for(i=r1;i<=r2;i++)
	sum+=x[i-1][col-1];
	return sum/npts;
}

double col_std_dev(double x[NROWS][NCOLS], int r1, int r2, int col)
{
	int i;
	int npts = r2-r1+1;
	double sum=0, colavg;
	double col_mean(double x[NROWS][NCOLS], int r1, int r2, int col);
	colavg = col_mean(x, r1, r2, col);
	for(i=r1;i<=r2;i++)
	sum+=(x[i-1][col-1]-colavg)*(x[i-1][col-1]-colavg);
	return sqrt(sum/(npts-1));
}
