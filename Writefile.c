//Program to write file

#include <stdio.h>
#include <math.h>
#define FILENAME "outfile.txt"

int main(void)
{
	FILE *out;
	
	//Prepare the objecy file and cannect to thr external file
	if (out == NULL)
		printf("File is failed to create. \n");
	else
	{
		out = fopen(FILENAME, "w");
		
		fprintf(out,"Hello world!");
		
		fclose(out);
	}
	
	
	
	return 0;
}