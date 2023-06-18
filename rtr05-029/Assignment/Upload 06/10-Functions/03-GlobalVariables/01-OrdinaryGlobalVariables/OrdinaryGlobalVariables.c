#include<stdio.h>
// *** Global Scope ***

//If not initialized by us , global variable are initialized to thier zero values (with respect to their data type ie. 0 for int, 0.0 for flaot and double , etc) by default. 
//But still for good programming discipline, we shall explicitly initialize our globa; varibale with 0 

int global_count = 0; 

int main(void)
{
 //function prototype 

	void change_count_one(void); 
	void change_count_two(void);
	void change_count_three(void);

	//code 
	printf("\n");

	printf("main() : Value of global_count = %d\n", global_count);

	change_count_one();
	change_count_two();
	change_count_three();

	printf("\n");
	return(0);
}

//*** Global Scope ***
void change_count_one(void)
{
	//code 
	global_count = 100; 
	printf("change_count_one() : Value of global_count = %d\n", global_count);
}

//*** Global Scope ***
void change_count_two(void)
{
	//code 
	global_count = global_count + 1 ;
	printf("change_count_one() : Value of global_count = %d\n", global_count);
}

//*** Global Scope ***
void change_count_three(void)
{
	//code 
	global_count = global_count + 10 ;
	printf("change_count_one() : Value of global_count = %d\n", global_count);
}

// *** Global Scope ***