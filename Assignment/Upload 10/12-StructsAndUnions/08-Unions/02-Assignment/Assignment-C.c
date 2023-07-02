#include <stdio.h>

union MyUnion
{
	int i;
	float f;
	double d;
	char c;
};

int main(void)
{
	//variable declarations
	union MyUnion u1, u2;


	//code
	// *** MyUnion u2***
	printf("Harshal Lakare \n\n");
	printf("\n\n");
	printf("Members Of Union ul Are : \n\n");

	u1.i = 6; 
	u1.f = 1.2f; 
	u1.i = 8.333333; 
	u1.c = 'S'; 

	printf("ul.i = %d\n\n", u1.i);
	printf("ul.f = %f\n\n", u1.f);
	printf("ul.d = %lf\n\n", u1.d);
	printf("ul.c = %c\n\n", u1.c);

	printf("Addresses Of Members Of Union u1 Are : \n\n");
	printf("ul.i =  %p\n\n", &u1.i);
	printf("ul.f =  %p\n\n", &u1.f);
	printf("ul.d =  %p\n\n", &u1.d);
	printf("ul.c =  %p\n\n", &u1.c);

	printf("MyUnion ul = %p\n\n", &u1);

	// *** MyUnion u2***
	printf("\n\n");
	printf("Members Of Union u2 Are : \n\n"); 

	u2.i = 3;
	printf("u2.i = %d\n\n", u2.i);

	u2.f = 4.5f;
	printf("u2.f = %f\n\n", u2.f);

	u2.d = 5.12764;
	printf("u2.d = %lf\n\n", u2.d);

	u2.c = 'A';
	printf("u2.c = %c\n\n", u2.c);

	printf("Addresses Of Members Of Union u2 Are \n\n");
	printf("u2.i = %p\n\n", &u2.i);
	printf("u2.f = %p\n\n", &u2.f);
	printf("u2.d = %p\n\n", &u2.d);
	printf("u2.c = %p\n\n", &u2.c);
	
	printf("MyUnion u2 = %p\n\n", &u2);

	return(0);
}