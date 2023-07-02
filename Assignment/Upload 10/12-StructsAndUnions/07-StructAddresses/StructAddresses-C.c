#include<stdio.h>
struct MyData
{
	int i; 
	float f; 
	double d; 
	char c; 
};

int main(void)
{
	//variable declarations 
	struct MyData data; 

	//code 
	//Assigning data Values to the data members of 'struct MyData'
	data.i = 30; 
	data.f = 11.45f;
	data.d = 1.2995;
	data.c = 'A';

	//Displaying Values of the data Members of 'struct MyData'
	printf("Harshal Lakare\n\n");
	printf("\n\n");
	printf("Data Members of 'struct MyData' Are : \n\n");
	printf("i = %d\n", data.i);
	printf("f = %f\n", data.f);
	printf("d = %lf\n", data.d);
	printf("c = %c\n", data.c);

	printf("\n\n");
	printf("Address of data mmebers of 'struct MyData' Are :");
	printf("'i' Occupies address from %p\n", &data.i);
	printf("'f' Occupies address from %p\n", &data.f);
	printf("'d' Occupies address from %p\n", &data.d);
	printf("'c' Occupies address  %p\n\n", &data.c);

	printf("Starting Address of 'struct MyData' variable 'data' = %p\n\n",&data);

	return(0);
}