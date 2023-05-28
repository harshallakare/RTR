#include<stdio.h> //for printf()
#include<conio.h> //for getch()

//ASCII Value for 'A' to 'Z' => 65 to 90 
#define CHAR_ALPHABET_UPPER_CASE_BEGINNING 65
#define CHAR_ALPHABET_UPPER_CASE_ENDING 90

//ASCII Value for 'a' to 'z' => 97 to 112 
#define CHAR_ALPHABET_LOWER_CASE_BEGINNING 97
#define CHAR_ALPHABET_LOWER_CASE_ENDING 122

//ASCII Values FOr '0' to '9' ==> 48 to 57 
#define CHAR_DIGIT_BEGINNING 48 
#define CHAR_DIGIT_ENDING 57 

int main(void)
{
	//varibale declarations 
	char ch;
	int ch_value; 

	//code 
	printf("Harshal Lakare \n\n");
	printf("\n\n");

	printf("Enter Character : ");
	ch = getch();

	printf("\n\n");

	switch (ch)
	{
		//FALL Through condition...
	case 'A':
	case 'a':

	case 'E':
	case 'e':

	case 'I':
	case 'i':

	case 'O':
	case 'o':

	case 'U':
	case 'u':
		printf("Character \'%c\'  Entered By You, Is A Vowel Charachter from the English Alphabet !!!\n\n ", ch);
		break;
	default:
		ch_value = (int)ch;
	//If the character has ASCII value between 65 and 90 OR Between 97 and 122, Its still A Letter Of the Alphbet, But Its a 'Consonant' and Not a 'Vowel'...
		if ((ch_value >= CHAR_ALPHABET_UPPER_CASE_BEGINNING && ch_value <= CHAR_ALPHABET_UPPER_CASE_ENDING) || (ch_value >= CHAR_ALPHABET_LOWER_CASE_BEGINNING && ch_value <= CHAR_ALPHABET_LOWER_CASE_ENDING))
		{
			printf("Character \'%c\' Enterred By You, IS CONSONANT Character from The English Alphabet !!!\n\n", ch);
		}
		else if (ch_value >= CHAR_DIGIT_BEGINNING && ch_value <= CHAR_DIGIT_ENDING)
		{
			printf("Character \'%c\' Enterred By you, Is A  Digit Character !!!\n\n", ch);
		}
		else
		{
			printf("Character \'%c\' Entered by You, Is a Special Character !!!\n\n", ch);
		}
		break;

	}
	printf("Switch Case Block Completed !!!\n");

	return(0);


}
