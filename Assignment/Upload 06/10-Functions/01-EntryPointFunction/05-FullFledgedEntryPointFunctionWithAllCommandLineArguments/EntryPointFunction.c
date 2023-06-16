#include<stdio.h> // 'stdio.h' contains declarations of 'printf()'

//Entry-Point Function => main() => Valid Return type (int) and 2 Parameters (int argc, cahr *argv[])
int main(int argc, char* argv[], char* envp[])
{
	//variable declarations 
	int i; 
	//code 
	printf("\n\n");
	printf("Hello World !!!\n"); //library Function 

	printf("Number of Command Line Arguments %d\n\n",argc);

	printf("Command Line Arguments Passed To this Program Are : \n\n");
	for (i = 0; i < argc; i++)
	{
		printf("Command Line Arguments Number %d = %s\n", (i + 1),argv[i]);
	}
	printf("\n\n");
	
	printf("First 20 Enviromental Variable Passwed to this Program Are : \n\n");
	for (i = 0; 1 < 20; i++)
	{
		printf("Envoirmental Variable Number %d =%s\n", (i + 1), envp[i]);
	}
	printf("\n\n");
	return(0);
}
