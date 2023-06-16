#include<stdio.h> //'stdio.h' contains declaration of 'printf()'
#include<ctype.h> // 'ctype.h' contains declarations of 'atio()'
#include<stdlib.h> // 'stdlib.h' contains declaration of 'exit()'

int main(int argc, char* argv[], char* envp[])
{
	//varaible declarations 
	int i; 
	int num; 
	int sum = 0; 

	//code 
	if (argc == 1)
	{
		printf("\n\n");
		printf("No Numbers Given For addition !!! Exiting Now \n\n");
		printf("Usage : CommandLineArgumentsApplications <first number> <second number> ...\n\n");
		exit(0);
	}
	//*** This Programs Add all command line arguments given in interger form only and output the sum *** 
	//*** Due to use of atoi(), all command line arguments of type other than 'int' are ignored ***
	printf("\n\n");
	printf("Sum of all integer command line Arguments Is : \n\n");
	for (i = 0; i < argc; i++) // loop starts from i = 1 becuase , i =0 will result in 'argv[i]' = 'argv[0]' whichg is the name of the programm itself i.e : 'CommandLineArgumentsApllications.exe '
	{
		num = atoi(argv[i]);
		sum = sum + num; 
	}
	printf("Sum = %d\n\n",sum);

	return(0);
}