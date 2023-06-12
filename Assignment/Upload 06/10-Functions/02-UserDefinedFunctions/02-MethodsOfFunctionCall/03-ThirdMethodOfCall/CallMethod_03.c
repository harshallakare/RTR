#include<stdio.h> // 'stdio.h' contains declaration of 'printf()'

// ****** User Defined function : Method Of Calling function 3 ******
// ****** Calling only two fuction directly in main(), Rest of the fuctions trace their call indirectly to main()

int main(int argc, char *argv[], char*envp[])
{
// function prototype 
	void Function_Country(); 

	//code 
	Function_Country();
	return();
}

void Function_Country(void) //function definition 
{
	//function declarations 
	void Function_OfAMC(void); 

	//code 
	Function_OfAMC(); 

	printf("\n\n");

	printf("I Live In India. ");

	printf("\n\n");
}

void Function_OfAMC(void) //function definition
{
	//function declarations 
	void Function_Surname(void);

	//code 
	Function_Surname();
	
	printf("\n\n");

	printf("Of AstroMediComp");
}

void Function_Surname(void) //function definition
{
	//functoin declarations 
	void Function_MiddleName(void);
	
	//code 
	Function_MiddleName();
	
	printf("\n\n");

	printf("Lakare");


}


void Function_MiddleName(void) //function definition
{
	//functoin declarations 
	void Function_FirstName(void); 

	//code 
	Function_FirstName();

	printf("\n\n");

	printf("Baliram");

}


void Function_FirstName(void) //function definition
{
	//functoin declarations 
	void Function_Is(void); 

	//code 
	Function_Is();

	printf("\n\n");

	printf("Harshal");

}

void Function_Is(void) //function definition
{
	//functoin declarations 
	void Function_Name(void);

	//code 
	Function_Is();

	printf("\n\n");

	printf("Is");

}


void Function_Name(void) //function definition
{
	//functoin declarations 
	void Function_My(void); 

	//code 
	Function_Name();

	printf("\n\n");

	printf("Name");

}


void Function_My(void) //function definition
{
	 //code 
	printf("\n\n");
	
	printf("My");
}
