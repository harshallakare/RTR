#include<stdio.h> // 'stdio.h' contains declarations of 'printf()'

//Entry-Point Function => main() => Valid Return type (int) and 2 Parameters (int argc, cahr *argv[])
int main(int argc, char* argv[])
{
	//variable declarations 
	int i;

	//code 
	printf("\n\n");
	printf("Hello World !!!\n\n");
	printf("Number Of Command line Arguments = %d\n\n", argc);

	printf("Command Line Arguments Passed To this Program Are : \n\n");
	for (i = 0; i < argc; i++)
	{
		printf("Command Line Argument NUmber %d  =%s\n", (i + 1 ), argv[i]);
	}
	printf("\n\n");
	return(0);
}

