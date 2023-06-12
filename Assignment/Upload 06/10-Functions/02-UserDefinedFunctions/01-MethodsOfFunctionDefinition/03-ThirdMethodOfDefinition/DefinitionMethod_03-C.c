#include<stdio.h> //'stdio.h' contains declaration of 'printf()'

//Entry-Point Function => main() => valid return type and 3 paramters (int argc, char *argv[], char *envp[])
int main(int argc, char* argv[], char* envp[])
{
	//function prototype / declaration / signature 
	void MyAddition(int, int); 

	//variable declarations : local variables to main()
	int a, b;

	//code 
	printf("Harshal Lakare \n\n");
	printf("\n\n");
	printf("Enter Integer Value For 'A' : ");
	scanf("%d", &a);

	printf("Enter Integer Value For 'B' : ");
	scanf("%d", &b);

	MyAddition(a, b); //function call

	return(0);
}

//****** User Defined Functoin : Method of Defination 3 ******
//****** No Return Value , Valid Parameters (int , int ) ****** 

void MyAddition(int a, int b) // function defination 
{
	//variable declarations : local varibale to MyAddition()
	int sum;

	//code
	sum = a + b; 
	printf("\n\n");
	printf("Sum Of %d And %d \n\n", a,b,sum);
}