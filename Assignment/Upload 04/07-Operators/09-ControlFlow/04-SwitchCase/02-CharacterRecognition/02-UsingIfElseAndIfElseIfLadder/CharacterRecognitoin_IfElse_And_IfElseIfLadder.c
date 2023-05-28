#include <stdio.h> //for printf()
#include <conio.h> //for getch()

//ASCII Value for 'A' to 'Z' => 65 to 90 
#define CHAR_ALPHABET_UPPER_CASE_BEGINNING 65 
#define CHAR_ALPHABET_UPPER_CASE_ENDING 90

//ASCII Value for 'a' to 'z' => 97 to 122
#define CHAR_ALPHABET_LOWER_CASE_BEGINNING 97 
#define CHAR_ALPHABET_LOWER_CASE_ENDING 122

//ASCII Value For '0' to '9' => 48 to 57 
#define CHAR_DIGIT_BEGINNING 48
#define CHAR_DIGIT_ENDING 57

int main(void)
{
	//variable declarations 
	char ch;
	int ch_value; 

	//code 
	printf("Harshal Lakare \n\n");
	printf("\n\n");

	printf("Enter Cahracter : ");
	ch = getch();

	printf("\n\n");

	if ((ch == 'A' || ch == 'a') || (ch == 'E' || ch == 'e') || (ch == 'I' || ch == 'i') || (ch == 'O' || ch == 'o') || (ch == 'U' || ch == 'u'))
	{
		printf("Character \'%c\' Enterred By you, IS Vowel Character From the English Alphabet \n\n", ch );
	}
	else
	{
		if ((ch_value >= CHAR_ALPHABET_UPPER_CASE_BEGINNING && ch_value <= CHAR_ALPHABET_UPPER_CASE_ENDING) || (ch_value >= CHAR_ALPHABET_LOWER_CASE_BEGINNING && ch_value <= CHAR_ALPHABET_LOWER_CASE_ENDING))
		{
			printf("Character \'%c\' Entered by you, IS A Consonat Character from the English Alphabet !!!\n\n", ch);
		}
		else if (ch_value >= CHAR_DIGIT_BEGINNING && ch_value <= CHAR_DIGIT_ENDING)
		{
			printf("Character \'%c\' Entered By you, Is A digit character !!!\n\n", ch);
		}

		else
		{
			printf("Character \'%c\' Entered by You, Is A special Character !!!\n\n", ch);
		}

	}
	return(0);
}
