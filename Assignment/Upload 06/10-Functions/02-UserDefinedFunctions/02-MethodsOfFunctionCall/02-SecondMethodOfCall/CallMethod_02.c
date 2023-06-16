#include<stdio.h> // 'stdio.h' contains declaration of 'printf()'

// ****** User Defined function : Method Of Calling function 2 ******
// ****** Calling only two fuction directly in main(), Rest of the fuctions trace their call indirectly to main()

int main(int argc, char* argv[], char* envp[])
{
	//function prototypes
	void display_information(void); 
	void Function_Country(void); 

	//code 
	display_information(); // function call 
	Function_Country(); // function call

	return(0);
}

//****** User-Defined Function's Definitions... ******
void display_information(void) //function definition 
{
	//function prototypes 
	void Function_My(void); 
	void Function_Name(void);
	void Function_Is(void);
	void Function_FirstName(void);
	void Function_MiddleName(void);
	void Function_Surname(void);
	void Function_OfAMC(void);

	//code

	// *** Function Calls ***
	Function_My(); 
	Function_Name(); 
	Function_Is();
	Function_FirstName();
	Function_MiddleName();
	Function_Surname();
	Function_OfAMC();
}

void Function_My(void) //function defination 
{
	//code 
	printf("\n\n");

	printf("My");
}

void Function_Name(void) //function definition 
{
	//code 
	printf("\n\n");

	printf("Name");
}

void  Function_Is(void) //function definition
{
	//code 
	printf("\n\n");

	printf("Is");
}

void Function_FirstName(void) //function definition
{
	//code 
	printf("\n\n");

	printf("Harshal");
}

void Function_MiddleName(void) //function definition
{
	//code 
	printf("\n\n");

	printf("Baliram");
}

void Function_Surname(void) //function definition
{
	//code 
	printf("\n\n");

	printf("Lakare");
}

void Function_OfAMC(void) //function definition
{
	//code 
	printf("\n\n");

	printf("Of AstroMediComp");
}

void Function_Country(void) //function definition
{
	//code 
	printf("\n\n");

	printf("I Live In India  ");

	printf("\n\n");
}
