#include<stdio.h>

#define MY_PI 3.1415926535897932

#define AMC_STRING "AstroMediComp RTR" 

// If First Constant Is not Assigened A value , It is assumed to be 0 ie. 'Sunday' Will be 0 
// And The Rest Of the constant Are assiged consecutive integer value from 0 onward ie 'Monday' Will be 1 , 'Tuesday' will be 2 and so on 

//Un-named enums 
enum
{
	SUNDAY,
	MONDAY,
	TUESDAY,
	WEDNESDAY,
	THURSDAY,
	FRIDAY,
	SATURDAY
};

enum
{
	JANUARY = 1,
	FEBRUARY,
	MARCH,
	APRIL,
	MAY,
	JUNE,
	JULY,
	AUGUST,
	SEPTEMBER,
	OCTOBER,
	NOVEMBER,
	DECEMBER
};

//nAMED ENUMS
enum Numbers
{
	ONE,
	TWO,
	THREE,
	FOUR,
	FIVE = 5,
	SIX,
	SEVEN,
	EIGHT,
	NINE,
	TEN
};

enum boolean
{
TRUE = 1,
FALSE = 0 
};

int main(void)
{
	//local constant declarations 
	const double hbl_epsilon = 0.000001;

	//code 
	printf("Harshal Lakare \n\n");
	printf("\n\n");
	printf("Local Constant Epsilon = %lf\n\n", hbl_epsilon);

	printf("Sunday Is Day Number = %d\n", SUNDAY);
	printf("Monday Is Day Number = %d\n", MONDAY);
	printf("Tuesday Is Day Number = %d\n", TUESDAY);
	printf("Wednesday Is Day Number = %d\n", WEDNESDAY);
	printf("Thursday  Is Day Number = %d\n", THURSDAY);
	printf("Friday Is Day Number = %d\n", FRIDAY);
	printf("Saturday  Is Day Number = %d\n", SATURDAY);

	printf("One Is Enum Number = %d\n", ONE);
	printf("Two Is Enum Number = %d\n", TWO);
	printf("Three Is Enum Number = %d\n", THREE);
	printf("Four Is Enum Number = %d\n", FOUR);
	printf("Five Is Enum Number = %d\n", FIVE);
	printf("Six Is Enum Number = %d\n", SIX);
	printf("Seven Is Enum Number = %d\n", SEVEN);
	printf("Eight Is Enum Number = %d\n", EIGHT);
	printf("Nine Is Enum Number = %d\n", NINE);
	printf("Ten Is Enum Number = %d\n", TEN);

	printf("January Is Month Number = %d\n", JANUARY);
	printf("February Is Month Number = %d\n", JANUARY);
	printf("March Is Month Number = %d\n", JANUARY);
	printf("April Is Month Number = %d\n", JANUARY);
	printf("May Is Month Number = %d\n", JANUARY);
	printf("June Is Month Number = %d\n", JANUARY);
	printf("July Is Month Number = %d\n", JANUARY);
	printf("August Is Month Number = %d\n", JANUARY);
	printf("September Is Month Number = %d\n", JANUARY);
	printf("October Is Month Number = %d\n", JANUARY);
	printf("November  Is Month Number = %d\n", JANUARY);
	printf("December Is Month Number = %d\n", JANUARY);

	printf("Value of TRUE is =%d\n", TRUE);
	printf("Value of False is = %d\n\n", FALSE);

	printf("MY_PI Macro value = %.10lf\n\n", MY_PI);
	printf("Area Of Circle Of Radius 2 Unit = %f \n\n", (MY_PI * 2.0f * 2.0f)); //pi * r * r = area of circle of radius 'r'

	printf("\n\n");

	printf(AMC_STRING);
	printf("\n\n");
	printf("AMC_STRING is : %s\n", AMC_STRING);
	printf("\n\n");

	return(0);

}
