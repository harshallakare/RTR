#include<stdio.h>

#define MAX_STRING_LENGTH 512

int main(void)
{
  //function protoyupe 
	int MyStrlen(char[]);
	void MyStrcpy(char [], char[]);

	//varaible declarations 
	char chArray[MAX_STRING_LENGTH]; //A character Array Is A string 
	int iStringLength;
	int i; 
	int word_count = 0, space_count = 0; 

	//code 

	// *** String Input ***
	printf("Harshal Lakare \n\n");
	printf("\n\n");
	printf("Enter A string : \n\n");
	gets_s(chArray, MAX_STRING_LENGTH); 

	iStringLength = MyStrlen(chArray);

	for (i = 0; i < iStringLength; i++)
	{
		switch (chArray[i])
		{
		case 32 : // 32 IS the ascii value for space (' ') character 
			space_count++;
			break;
		default:
			break;
		}
	}

	word_count = space_count + 1; 

	// *** String Output ***
	printf("\n\n");
	printf("String Enter By You Is : \n\n");
	printf("%s\n", chArray);

	printf("\n\n");
	printf("Number Of spaces in the Input String = %d\n\n", space_count);
	printf("NUmber Of Words In the Input String = %d\n\n", word_count);

	return(0);
}

int MyStrlen(char str[])
{
	//variable declarations 
	int j; 
	int string_length = 0; 

	//code 
	// *** Determing exact length of the string, by detecting the first occurence of null terminating character (\0) ***
	for (j = 0; j < MAX_STRING_LENGTH; j++)
	{
		if (str[i] == '\0')
			break;
		else
			string_length++;
	}
	return(string_length);

}