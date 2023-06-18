#include<stdio.h>

//Macro Constant used as array size in subscript and array length 
//Hence, This Program's Array's size can be simpley changed by changing these follwoing 3 global macro constant vlaue, before compling, link and executing the program!!!

#define INT_ARRAY_NUM_ELEMENTS 5 
#define FLOAT_ARRAY_NUM_ELEMENTS 3 
#define CHAR_ARRAY_NUM_ELEMTNTS 15

int main(void)
{
	//variable declarations 
	int iArray[INT_ARRAY_NUM_ELEMENTS];
	float fArray[FLOAT_ARRAY_NUM_ELEMENTS];
	char cArray[CHAR_ARRAY_NUM_ELEMTNTS];
	int i, num;

	//code 
	// 
	//****** ARRAY ELEMENT INPUT******
	printf("\n\n");
	printf("Enter Element For 'Interger array' :\n");
	for (i = 0; i < INT_ARRAY_NUM_ELEMENTS; i++)
		scanf("%d", &iArray[i]);

	
	printf("\n\n");
	printf("Enter Elements for 'Floating-Poin' Array : \n");
	for (i = 0; i < FLOAT_ARRAY_NUM_ELEMENTS; i++)
		scanf("%f", &fArray[i]);

	printf("\n\n");
	printf("Enter Elements For 'Character' Array : \n");
	for (i = 0; i < CHAR_ARRAY_NUM_ELEMTNTS; i++)
	{
		cArray[i] = getch();
		printf("%c\n", cArray[i]);
	}

	// ****** Array Element Output ******
	printf("\n\n");
	printf("Interger Array Entered By You : \n\n");
	for (i = 0; i < INT_ARRAY_NUM_ELEMENTS; i++)
		printf("%d\n", iArray[i]);

	printf("\n\n");
	printf("Floating-Point Array Enterred By You : \n\n");
	for (i = 0; i < FLOAT_ARRAY_NUM_ELEMENTS; i++)
		printf("%f\n", fArray[i]);

	printf("\n\n");
	printf("Character Array Entered By You : \n\n");
	for (i = 0; i < CHAR_ARRAY_NUM_ELEMTNTS; i++)
		printf("%c\n", cArray[i]);

	return(0);

}