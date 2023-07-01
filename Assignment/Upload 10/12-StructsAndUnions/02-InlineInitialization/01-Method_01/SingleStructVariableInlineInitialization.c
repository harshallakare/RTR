#include<stdio.h>

//DEfining Struct 
struct MyData
{
	int i; 
	float f; 
	double d; 
	char c; 

} data = {30,4.5f,11.451995,'A'}; //Inline initializations of struct variable 'data' of type 'struct Mydata'

int main(void)
{
	//code 
	//Displaying Vlaue Of The Data Members of 'struct MyData'
	printf("Harshal Lakare \n\n");
	printf("\n\n");
	printf("Data Members Of 'struct MyData' Are :\n\n");
	printf("i = %d\n", data.i);
	printf("f = %f\n", data.f);
	printf("d = %lf\n", data.d);
	printf("c = %c\n", data.c);

	return(0);
}

