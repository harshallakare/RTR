#include<stdio.h>

#define MAX_STRING_LENGTH 512

#define SPACE ' ' 

#define FULLSTOP '.'
#define COMMA ','
#define EXCLAMATION '!'
#define QUESTION_MARK '?'

int main(void)
{
	//function prototype 
	int MyStrlen(char[]); 
	char MyToUpper(char);

	//variable declarations 
	char chArray[MAX_STRING_LENGTH], chArray_CapitalizaedFirstLetterOfEveryWord[MAX_STRING_LENGTH]; //A character Array Is A String
	int iStringLength; 
	int i, j; 

	//code 

	//*** String Input***
	printf("Harshal Lakare \n\n");
	printf("\n\n");
	gets_s(chArray, MAX_STRING_LENGTH);

	iStringLength = MyStrlen(chArray); 
	j = 0; 
	for (i = 0; i < iStringLength; i++)
	{
		if (i == 0)//First Letter Of Any Sentence Must Be A Capital Letter
			chArray_CapitalizaedFirstLetterOfEveryWord[j] = MyToUpper(chArray[i]);
		
		else if (chArray[i] == SPACE) //First Letter Of Every Word In The Sentence Must Be A capital Letter. Word Are Separated By Spaces 
		{
			chArray_CapitalizaedFirstLetterOfEveryWord[j] = chArray[i];
			chArray_CapitalizaedFirstLetterOfEveryWord[j + 1] = MyToUpper(chArray[i + 1]); 
			//Since, ALready two character (At Indices 'i' AND i + 1 Have been considered in this else-if block...we are extra-incrementing 'i' And 'j' By 1  )
			j++;
			i++;
		}
		else if ((chArray[i] == FULLSTOP || chArray[i] == COMMA || chArray[i] == EXCLAMATION || chArray[i] == QUESTION_MARK) && (chArray[i] != SPACE)) //First Letter of Every Word After Punctuation Mark, In the Sentence Must Be A capital Letter. Word Are Seprated By Punctuations. 
		{
			chArray_CapitalizaedFirstLetterOfEveryWord[j] = chArray[i];
			chArray_CapitalizaedFirstLetterOfEveryWord[j + 1] = SPACE; 
			chArray_CapitalizaedFirstLetterOfEveryWord[j + 2] = MyToUpper(chArray[i + 1]); 
			//Since, already two character (at indices 'i' ANd i + 1 Have been considered in this else-if block...we are extra-incrementing 'i' by 1 )
			//Since, ALready three character (At indices 'j' And (j + 1) ANd (j + 2 ) Have been considered in this else-if block...we are extra-incrementing 'j' by 2 )
			j = j + 2; 
			i++; 
		}
		else
			chArray_CapitalizaedFirstLetterOfEveryWord[j] = chArray[i];

		j++;
	}
	chArray_CapitalizaedFirstLetterOfEveryWord[j] = '\0'; 

	//*** String Output ***
	printf("\n\n");
	printf("String Enter by You Is : \n\n");
	printf("%s\n", chArray);
	
	printf("\n\n");
	printf("String After Capitaliing FirsLetter Off Every Word : \n\n");
	printf("%s\n", chArray_CapitalizaedFirstLetterOfEveryWord);

	return(0);


}

int Mystrlen(char str[])
{
	//variable declarations 
	int j; 
	int string_length = 0; 

	//code 
	// *** Determing exact length of the string, by detecting the first occurence of null-terminating character (\0) ***
	for (j = 0; j < MAX_STRING_LENGTH; j++)
	{
		if (str[j] == '\0')
			break;
		else
			string_length++;
	}
	return(string_length);
}

char  MyToUpper(char ch)
{
	//variable declaration 
	int num;
	int c; 

	//code 
	//ASCII vlaue of 'a' (97) - ASCII value 'A' (65) = 32 
	//This Subtraction will give the exact diffrence between the upper and lower case counterpart of each letter of the alphabet 
	//If This dirrence is subtraced from the ASCII value of a lower case letter , the reultant ASCII value will be that of its upper case counterpart , hence Helping us to find its upper case letter !!! 
	//ASCII Value of 'a' to 'z' ==> 97 to 122
	//ASCII value of 'A' to 'Z' ==> 65 to 90 

	if ((int)ch >= 97 && (int)ch <= 122)
	{
		c = (int)ch - num;
		return((char)c);
	}
	else
		return(0);
}