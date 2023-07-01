#include<stdio.h>


int main(void)
{
	//Defining Struct 
	struct MyData
	{
		int i; 
		float  f; 
		double d; 
		char c; 

	} data = {5,9.1f,3.78623, 'N'};

	//Displaying Values Of the Data Members of 'struct MyData'
	printf("Harshal Lakare\n\n");
	printf("\n\n");
	printf("Data Members of 'struct MyData' Are : \n\n");
	printf("i = %d\n", data.i);
	printf("i = %f\n", data.f);
	printf("i = %lf\n", data.d);
	printf("i = %c\n\n", data.c);
	
	return(0);

}