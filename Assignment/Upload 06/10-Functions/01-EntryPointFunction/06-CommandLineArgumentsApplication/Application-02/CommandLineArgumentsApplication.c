#include<stdio.h> // 'stdio.h' contains declarations of 'prints()'
#include<stdlib.h> // 'stdlib.h' contains declaration of 'exit()'

int main(int argc, char* argv[], char* envp[])
{
	//variable declarations 
	int i; 

	//code 
	if (argc != 4) // Program Name + first name + middle name + surname = 4 command line arguments are required 
	{
		printf("\n\n");
		printf("Invalid Usage !!! Exiting Now ... \n\n");
		printf("Usage : CommandLineArgumentsApplicatoin <first name> <moddle name> <surname> \n\n");
		exit(0);
	}
	//*** This Programs Prints your Full Name As entred in the Command Line Arguments *** 
	printf("\n\n");
	printf("Your Full Name IS : ");
	for (i = 1; i < argc; i++)// Loops start from i = 1 because , i = 0 will result in 'argv[i] = 'argv[0]' which is the name of the program itself i.e: CommandLineArgumentsApplication.exe'
	{
		printf("%s", argv[i]);
	}
	printf("\n\n");

	return(0);
}
