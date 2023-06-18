#include <stdio.h> //'stdio.h' contains declaration of 'printf()'

//Entry-Point Function ==> main() => valid return type (int) and 3 Parameters (int argc, char * argv[], char *envp[] )

int main(int argc, char* argv[], char* envp[])
{
	//function prototype / declaration /signature 
	void MyAddition(void);

	//code 
	MyAddition(); //function call
	return(0);

}

//****** User defined Fuction : MEthod Of Definiation 1 ******
//****** No Return Value , No Parameters ******

void MyAddition(void) //function definition 
{
	//varibale declarations : lcoal variable to MyAddition()
	int a, b, sum;

	//code 
	printf("Harshal Lakare \n\n");
	printf("\n\n");
	printf("Enter Interger Valuye for 'A' :\n\n");
	scanf("%d", &a);

	printf("\n\n");
	printf("Enter Interger Valuye for 'B' :\n\n");
	scanf("%d", &b);

	sum = a + b; 

	printf("\n\n");
	printf("Sum of %d And %d = %d\n\n", a,b,sum);

}