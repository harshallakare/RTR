#include<stdio.h>

// *** Global Scope ***

int main(void)
{
	// *** local Scope of main() begins ***

	//varibale declarations 
	// 'a' is a Local variable. It is local to main() only. 
	int a = 5; 

	//function prototypes 
	void change_count(void);

	//code 
	printf("\n");
	printf("A = %d\n\n",a );

	//local_count is initalized to 0 
	//local_count = local_count + 1 = 0 + 1 = 1 
	change_count();

	//since, 'local_count' is an ordinary local variable of change_count(), it will not retain its vlaue from previus call to chnage_count().
	//So local_count is Again intialized to 0 
	// local_count = local_count + 1 = 0 +1 =1 
	change_count();

	//since, 'local_count' is an ordinary local variable of change_count(), it will not retain its vlaue from previus call to chnage_count().
	//So local_count is Again intialized to 0 
	// local_count = local_count + 1 = 0 +1 =1 
	change_count(); 

	return(0);

	// *** Local Scope of main() end ***
}

// *** Global Scope ***

void change_count(void)
{
	// *** Local scope of change_count() begins***

	//variable delarations 
	//'lcoal_count' is a local variable. It is lcoal change_count() only. 
	int local_count = 0; 

	//code 
	local_count = local_count + 1; 
	printf("Local Count = %d\n", local_count);
	
	// *** Local Scope of change_count() ends ***
}

// *** Global Scope ***