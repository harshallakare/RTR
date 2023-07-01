#include<stdio.h>

//Defining Struct 
struct MyData
{
	int i; 
	float f; 
	double d; 
	char c;
};


struct MyData data = {9,8.2f, 9.61998,'P'};

int main(void)
{
	//code 
	//Displaying Values of the Data Memeber of 'Struct MyData'
	printf("Harshal Lakare\n\n");
	printf("\n\n");
	printf("i = %d\n", data.i);
	printf("f = %f\n", data.f);
	printf("d = %lf\n", data.d);
	printf("c = %c\n", data.c);

	return(0);
}