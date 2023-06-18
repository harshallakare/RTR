#include<stdio.h>

#define MAX_STRING_LENGTH 512 

int main(void)
{
	//variable declarations 
	char chArray_One[MAX_STRING_LENGTH], chArray_Two[MAX_STRING_LENGTH]; //A character Array is A string

	//code 

	// *** String Input ***
	printf("Harshal Lakare \n\n");
	printf("\n\n");
	printf("Enter First String : \n\n");
	gets_s(chArray_One, MAX_STRING_LENGTH);

	printf("\n\n");
	printf("Enter Seconf String : \n\n");
	gets_s(chArray_Two, MAX_STRING_LENGTH);

	// *** String Concat ***
	printf("\n\n");
	printf("****** Before concatenation ******");
	printf("\n\n");
	printf("THe original First string entered by you (ie . 'chArray_One[]') Is \n\n");
	printf("%s\n",chArray_One);

	printf("\n\n");
	printf("The original second string entered by you (ie. : 'chArray_Two[]') Is : \n\n");
	printf("%s\n", chArray_Two);

	strcat(chArray_One, chArray_Two);

	printf("\n\n");
	printf("****** After Concatenaton ******");
	printf("\n\n");
	printf("'chArray_One[]' Is \n\n");
	printf("%s\n", chArray_One);

	printf("\n\n");
	printf("'chArray_Two[]' Is : \n\n");
	printf("%s\n", chArray_Two);

	return(0);
}