#include<stdio.h> //'stdio.h' contains declaration of 'printf()'

//Entry-Point Function => main() => valid return type and 3 paramters (int argc, char *argv[], char *envp[])
int main(int argc, char* argv[], char* envp)
{
	//function prototype / declaration /signature 
	int MyAddition(void);

	//variable declarations ; local variable to main()
	int result; 

	//code 
	result = MyAddition(); //function call

	printf("\n\n");
	printf("Sum = %d\n\n", result);
	return(0);
}

//***** User defined function : Method OF Definiation 2 *******
//***** Valid (int) return value, No parameters 

int MyAddition(void)
{
	//variable declarations ; local variable to  MyAddition()
	int a, b, sum; 

	//code
	printf("\n\n");
	printf("Enter Interger Value for 'A':");
	scanf("%d", &a);

	printf("\n\n");
	printf("Enter Interger Value for 'B':");
	scanf("%d", &b);

	sum = a + b; 
	return(sum);
}