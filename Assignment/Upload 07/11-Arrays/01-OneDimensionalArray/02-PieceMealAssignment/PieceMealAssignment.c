#include<stdio.h>
int main(void)
{
	//variable declaration 
	int iArrayOne[10]; 
	int iArrayTwo[10];

	//code 

	// ****** iArrayOne ******
	iArrayOne[0] = 3; 
	iArrayOne[1] = 6;
	iArrayOne[2] = 9;
	iArrayOne[3] = 12;
	iArrayOne[4] = 15;
	iArrayOne[5] = 18;
	iArrayOne[6] = 21;
	iArrayOne[7] = 24;
	iArrayOne[8] = 27;
	iArrayOne[9] = 30;

	printf("\n\n");
	printf("Peice-meal (Hard-coded) Assignment And Display Of Element to Array 'iArray[]' : \n\n");
	printf("1st Element of Array 'iArrayOne[]' Or Element At 0th Index of Array 'iArrayOne[]' = %d\n", iArrayOne[0]);
	printf("2st Element of Array 'iArrayOne[]' Or Element At 1th Index of Array 'iArrayOne[]' = %d\n", iArrayOne[1]);
	printf("3st Element of Array 'iArrayOne[]' Or Element At 2th Index of Array 'iArrayOne[]' = %d\n", iArrayOne[2]);
	printf("4st Element of Array 'iArrayOne[]' Or Element At 3th Index of Array 'iArrayOne[]' = %d\n", iArrayOne[3]);
	printf("5st Element of Array 'iArrayOne[]' Or Element At 4th Index of Array 'iArrayOne[]' = %d\n", iArrayOne[4]);
	printf("6st Element of Array 'iArrayOne[]' Or Element At 5th Index of Array 'iArrayOne[]' = %d\n", iArrayOne[5]);
	printf("7st Element of Array 'iArrayOne[]' Or Element At 6th Index of Array 'iArrayOne[]' = %d\n", iArrayOne[6]);
	printf("8st Element of Array 'iArrayOne[]' Or Element At 7th Index of Array 'iArrayOne[]' = %d\n", iArrayOne[7]);
	printf("9st Element of Array 'iArrayOne[]' Or Element At 8th Index of Array 'iArrayOne[]' = %d\n", iArrayOne[8]);
	printf("10st Element of Array 'iArrayOne[]' Or Element At 9th Index of Array 'iArrayOne[]' = %d\n", iArrayOne[9]);

	// ****** iArrayTwo ****** 
	printf("\n\n");
	printf("Enter 1st Element Of Array 'iArrayTwo[]' : ");
	scanf("%d", &iArrayTwo[0]);
	printf("Enter 2st Element Of Array 'iArrayTwo[]' : ");
	scanf("%d", &iArrayTwo[1]);
	printf("Enter 3st Element Of Array 'iArrayTwo[]' : ");
	scanf("%d", &iArrayTwo[2]);
	printf("Enter 4st Element Of Array 'iArrayTwo[]' : ");
	scanf("%d", &iArrayTwo[3]);
	printf("Enter 5st Element Of Array 'iArrayTwo[]' : ");
	scanf("%d", &iArrayTwo[4]);
	printf("Enter 6st Element Of Array 'iArrayTwo[]' : ");
	scanf("%d", &iArrayTwo[5]);
	printf("Enter 7st Element Of Array 'iArrayTwo[]' : ");
	scanf("%d", &iArrayTwo[6]);
	printf("Enter 8st Element Of Array 'iArrayTwo[]' : ");
	scanf("%d", &iArrayTwo[7]);
	printf("Enter 9st Element Of Array 'iArrayTwo[]' : ");
	scanf("%d", &iArrayTwo[8]);
	printf("Enter 10st Element Of Array 'iArrayTwo[]' : ");
	scanf("%d", &iArrayTwo[9]);


	printf("\n\n");
	printf("Peice-meal (User Input) Assignment And Display Of Element to Array 'iArrayTwo[]' : \n\n");
	printf("1st Element of Array 'iArrayTwo[]' Or Element At 0th Index of Array 'iArrayTwo[]' = %d\n", iArrayTwo[0]);
	printf("2st Element of Array 'iArrayTwo[]' Or Element At 1th Index of Array 'iArrayTwo[]' = %d\n", iArrayTwo[1]);
	printf("3st Element of Array 'iArrayTwo[]' Or Element At 2th Index of Array 'iArrayTwo[]' = %d\n", iArrayTwo[2]);
	printf("4st Element of Array 'iArrayTwo[]' Or Element At 3th Index of Array 'iArrayTwo[]' = %d\n", iArrayTwo[3]);
	printf("5st Element of Array 'iArrayTwo[]' Or Element At 4th Index of Array 'iArrayTwo[]' = %d\n", iArrayTwo[4]);
	printf("6st Element of Array 'iArrayTwo[]' Or Element At 5th Index of Array 'iArrayTwo[]' = %d\n", iArrayTwo[5]);
	printf("7st Element of Array 'iArrayTwo[]' Or Element At 6th Index of Array 'iArrayTwo[]' = %d\n", iArrayTwo[6]);
	printf("8st Element of Array 'iArrayTwo[]' Or Element At 7th Index of Array 'iArrayTwo[]' = %d\n", iArrayTwo[7]);
	printf("9st Element of Array 'iArrayTwo[]' Or Element At 8th Index of Array 'iArrayTwo[]' = %d\n", iArrayTwo[8]);
	printf("10st Element of Array 'iArrayTwo[]' Or Element At 9th Index of Array 'iArrayTwo[]' = %d\n", iArrayTwo[9]);

	return(0);



}