#include<stdio.h>
#include<conio.h>

struct MyData
{
	int i; 
	float f; 
	double d;
	char ch; 

};

int main(void)
{
	//varaible declarations 
	struct MyData data; // Declarating a single struct variable 

	//code 
	//User Input For Vlaue of data members of 'struct MyData'
	printf("Harshal Lakare\n\n");
	printf("\n\n");

	printf("Enter Interger Value for data member 'i' of 'struct Mydata' : \n");
	scanf("%d", &data.i);

	printf("Enter Floating-Point Value For data Meber 'f' of 'struct MyData' : \n");
	scanf("%f", &data.f);

	printf("Enter 'Double' Value for Data Member 'd' of 'struct MyData' : \n");
	scanf("%lf", &data.d);

	printf("Enter character value for data member 'c' of 'struct MyData' : \n");
	data.ch = getch();

	//Display Value of data Members of 'struct MyData'
	printf("\n\n");
	printf("Data Members of 'struct MyData' Are :\n\n");
	printf("i = %d\n", data.i);
	printf("f = %f\n", data.f);
	printf("d = %lf\n", data.d);
	printf("c = %c\n\n", data.ch);

	return(0);
}