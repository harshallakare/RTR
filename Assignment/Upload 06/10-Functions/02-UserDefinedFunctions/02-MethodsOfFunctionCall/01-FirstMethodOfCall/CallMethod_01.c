#include<stdio.h> //'stdio.h' contains declaraton of 'printf()'

//****** user defined function : Method of Calling function 1 ******
//****** Calling all fuction in main() directly ******

//Entry-Point Function  => main() ==> Valid Return Type (int) and 3 Paramters (int argc, char *argv[], char * envp[])
int main(int argc, char* argv[], char* envp[])
{
	//function prototypes OR declarations 
	void MyAddition(void);
	int MySubtraction(void);
	void MyMultiplication(int , int );
	int MyDivision(int , int );


	//variable declaration 
	int result_substractoin; 
	int a_multiplocation, b_multiplication; 
	int a_division, b_division, result_division; 

	//code 
	// 
	//*** Addition ****
	MyAddition(); //function call 
		
	//*** Subtraction ****
	result_substractoin = MySubtraction(); //fucntion call
	printf("\n\n");
	printf("Subtraction Yields Result = %d\n", result_substractoin);

	//*** Multiplication ****
	printf("\n\n");
	printf("Enter Interger Value For 'A' for Multiplication :");
	scanf("%d", &a_multiplocation);

	printf("\n\n");
	printf("Enter Interger Value For 'B' for Multiplication :");
	scanf("%d", &b_multiplocation);

	MyMultiplication(a_multiplocation, b_multiplication); //function call
	
	//*** Division ****
	printf("\n\n");
	printf("Enter Interger Value for 'A' For Division : ");
	scanf("%d", &a_division);

	printf("\n\n");
	printf("Enter Interger Value For 'B' For Division : ");
	scanf("%d", &b_division);

	result_division = MyDivision(a_division, b_division); // function call
	printf("\n\n");

	printf("Division of %d and %d Gives = %d (Quotien) \n", a_division, b_division, result_division);

	printf("\n\n");

	return(0);

}

//****** Function definition of MyAddition() ******
void MyAddition(void) //function definition 
{
	//variable declation  : local variable to Myaddition ()
	int a, b, sum; 

	//code 
	printf("\n\n");
	printf("Eneter Integer Value For 'A' For Addition : ");
	scanf("%d" , &a);

	printf("\n\n");
	printf("Enter Interger Value For 'B' For Addition : ");
	scanf("%d", &b);

	sum = a + b; 

	printf("\n\n");
	printf("Sum Of %d And %d = %d\n\n", a,b,sum);
}

// ****** Function Defination Of MySubtraction ******
int Mysubstraction(void) // function defination 
{
	//variable declarations  : lcoal variable to Mysubtraction()
	int a, b, subtraction; 

	//code 
	printf("\n\n");
	printf("Enter Integer Value for 'A' for Subtraction : ");
	scanf("%d", &a);

	printf("\n\n");
	printf("Enter Integer Value for 'B' for Subtraction : ");
	scanf("%d", &b);

	subtraction = a - b; 
	return (subtraction); 
}

// ****** Function Defination Of MyMultiplication() ******
void MyMultiplication(int a, int b) //function definition 
{
	//variable declaration : local variable to MyMultiplication()
	int multiplication; 

	//code 
	multiplication = a * b; 
	printf("\n\n");
	printf("Multiplication of %d ANd %d = %d\n\n", a ,b ,multiplication);	

}

// ****** Function Defination Of MyDivision() ******
int MyDivision(int a, int b) //function definition 
{
	//variable declarations ; lcoal variable to MyDivision()
	int division_quotient; 

	//code 
	if (a > b)
		division_quotient = a / b;
	else
		division_quotient = b / a; 
	
	return(division_quotient);
}

