#include<stdio.h> //'stdio.h' contains declaraton of 'printf()'

//Entry-Point Function  => main() ==> Valid Return Type (int) and 3 Paramters (int argc, char *argv[], char * envp[])
int main(int argc, char* argv[], char* envp[])
{
	//function prototype / declaration / signature 
	int MyAddition(int, int);

	//variable declarations : lcoal variables to main()
	int a, b, result; 

	//code 
	printf("Harshal Lakare \n\n");
	printf("\n\n");
	printf(" Enter Integer Valaue for 'A' :\n\n");
	scanf("%d", &a);

	printf("\n\n");
	printf(" Enter Integer Valaue for 'B' :\n\n");
	scanf("%d", &b);

	result = MyAddition(a, b); //function call 
	printf("\n\n");
	printf("Sum of %d and %d = %d\n\n", a,b,result); 

	return(0);
}
// ****** User defined function : MEthod of defination 4 ******
// ****** Valid (int) return value, valid parameters (int,int) ******

int MyAddition(int a, int b) // function definination 
{
	//variable declaration : local variable to MyAddition()
	int sum;

	//code
	sum = a + b; 
	return(sum);

}
