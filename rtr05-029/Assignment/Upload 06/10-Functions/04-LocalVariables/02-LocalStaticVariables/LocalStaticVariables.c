#include<stdio.h>

// *** Global Scope ***
int  main(void)
{
	// *** Local Scope of main() begains ***

	//variable declarations 
	// 'a' is a lcoal variable. It is local to main() only 
	int a = 5; 

	//function prototypes 
	void change_count(void);

	//code 
	printf("\n");
	printf("A =%d\n\n",a);

	//local_count is initialized to 0 
	//local_count == lcoal_count + 1 = 0 + 1 = 1
	change_count();

	//Since, 'lcoal_count' is a local static varaible of change_count(),it will retain its value from previous call to change_count(). 
	//So lcoal_count is 1 
	//local_count = local_count + 1 = 1 +1 = 2 
	change_count(); 

	//Since, 'lcoal_count' is a local static varaible of change_count(),it will retain its value from previous call to change_count(). 
	//So lcoal_count is 2 
	//local_count = local_count + 1 = 2 + 1 = 3
	change_count();

	return(0);

	// *** Local Scope of main() ends ***

}

// *** Global Scope ***
void change_count(void)
{
	// *** Local scope of change_count() begains *** 

	//variable declarations 
	//'local count' is a local static variable. It is lcoal to change_count() only 
	// It will retain its vlaue between call to chnage_count()
	static int local_count = 0; 

	//code 
	local_count = local_count + 1; 
	printf("Local Count = %d\n", local_count);

	//*** Local Scope of change_count() ends*** 
}

// *** Global scope ***