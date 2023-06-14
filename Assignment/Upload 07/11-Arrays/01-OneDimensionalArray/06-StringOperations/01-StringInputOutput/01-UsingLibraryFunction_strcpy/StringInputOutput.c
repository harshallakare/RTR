#include<stdio.h>

#define MAX_STRING_LENGTH 512 

int main(void)
{
	//variable declarations 
	char chARRAY[MAX_STRING_LENGTH]; 

	//code 
	printf("\n\n");
	printf("Harshal Lakare \n\n");
	gets_s(chARRAY,MAX_STRING_LENGTH);

	printf("\n\n");
	printf("String Enterred by you is : \n\n");
	printf("%s\n", chARRAY);
	return(0);

}