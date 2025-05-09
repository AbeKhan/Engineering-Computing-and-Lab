/*––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––*/
/*  Homework #9 program                                       */
/*  Name: Abraham Khan                                                        */
/*  This program computes average power, average magnitude    */
/*  and zero crossings from a speech signal.                  */

#include <stdio.h>
#include <math.h>
#define MAXIMUM 50

int main(void)
{
   /*  Declare variables   */
   int k = 0, npts = 30;
   double speech[MAXIMUM] = {0.000000, -0.023438, -0.031250, -0.031250, -0.039063, -0.039063, -0.023438, 0.000000, 0.023438, 0.070313, -0.039063, -0.039063, 0.046875, 0.101563, 0.117188, 0.101563, 0.070313, 0.054688, 0.023438, 0.000000, -0.031250, -0.039063, -0.070313, -0.070313, -0.070313, -0.070313, -0.062500, -0.046875, -0.039063, -0.031250};
   /* Declare the function prototypes */
   void print_in_cols(double x[], int npts, int numcols);
   double ave_power(double x[], int npts);
   double ave_magn(double x[], int npts);
   int crossings(double x[], int npts);

   /*  Compute and print statistics.  */
   printf("\n SPEECH DATA \n");
   print_in_cols(speech, npts, 5); // complete the statement
   printf("\n");
   printf(" SPEECH STATISTICS : \n");
   printf(" average power: %f \n", ave_power(speech, npts));    // complete the statement
   printf(" average magnitude: %f \n", ave_magn(speech, npts)); // complete the statement
   printf(" zero crossings: %d \n", crossings(speech, npts));   // complete the statement

   /*  Exit program.  */
   return 0;
}

/*   This function prints the data in the number of desired */
/*   column numcols                                         */
void print_in_cols(double x[], int npts, int numcols)
{
   int i, j;
   printf("\n ");
   for (j = 0; j < numcols; j++)
      printf("-----------");
   printf("\n");
   for (j = 0; j < numcols; j++)
   {
      printf("   %2d to %2d", ((npts / numcols) * j) + 1, ((npts / numcols) * j) + (npts / numcols));
   }
   printf("\n ");
   for (j = 0; j < numcols; j++)
      printf("-----------");
   printf("\n");
   for (i = 0; i < npts / numcols; i++)
   {
      for (j = 0; j < numcols; j++)
         printf("%11.6lf", x[((npts / numcols) * j) + i]);
      printf("\n");
   }
}
/*––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––*/
/*  This function returns the average power of an array x     */
/*  with npts elements.                                       */

double ave_power(double x[], int npts)
{
   /*  Declare and initialize variables.  */
   int k;
   double sum = 0;

   /*  Determine average power.  */
   for (k = 0; k <= npts - 1; k++)
      sum += x[k] * x[k];

   /*  Return average power.  */
   return sum / npts;
}
/*––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––*/
/*  This function returns the average magnitude of an array x */
/*  with npts elements.                                       */

double ave_magn(double x[], int npts)
{
   /*  Declare and initialize variables.  */
   int k;
   double sum = 0;

   /*  Determine average power.  */
   for (k = 0; k <= npts - 1; k++)
      sum += fabs(x[k]);

   /*  Return average magnitude.  */
   return sum / npts;
}

/*––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––*/
/*  This function returns a count of the number of zero       */
/*  crossings in an array x with npts values.                 */

int crossings(double x[], int npts)
{
   /*  Declare and initialize variables.  */
   int count = 0, k;

   /*  Determine number of zero crossings.  */
   for (k = 0; k <= npts - 2; k++)
      if (x[k] * x[k + 1] < 0)
         count++;

   /*  Return number of zero crossings.  */
   return count;
}
/*––––––––––––––––––––––––––––––––––––––––––––––––––––––––––––*/
