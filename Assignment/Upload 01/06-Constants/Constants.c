#include<stdio.h>

#define MY_PI 3.1415926535897932

#define AMC_STRING "AstroMediComp RTR" 

// If First Constant Is not Assigened A value , It is assumed to be 0 ie. 'Sunday' Will be 0 
// And The Rest Of the constant Are assiged consecutive integer value from 0 onward ie 'Monday' Will be 1 , 'Tuesday' will be 2 and so on 

printf("Harshal Lakare \n\n");

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