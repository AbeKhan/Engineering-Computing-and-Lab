#include <stdio.h>

int main()
{
	
	int ws, category;
	
	printf("Enter wind speeds (mph): ");
	scanf("%i", &ws);
	
	if(ws >= 74 && ws < 96)
	{
		category = 1;
	}
	else if( ws >= 96 && ws < 111)
	{
		category = 2;
	}
	else if(ws >= 111 && ws < 131)
	{
		category = 3;
	}
	else if (ws >= 131 && ws < 156)
	{
		category = 4;
	}
	else if(ws >= 156)
	{
		category = 5;
	}
	else
	{
		category = 0;
	}
	
	if(category == 0)
	{
		printf("Not a hurricane.");
	}
	else{
		printf("It is a category %i hurricane.", category);
	}
	
	
	
	return 0;
}