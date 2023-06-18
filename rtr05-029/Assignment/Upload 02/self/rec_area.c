//This program is to find area from given input of Length and Breadth 

#include<stdio.h>

int main(void)
{
	printf("Harshal Lakare \n\n");

	//variable Declaration 
	int len;
	int bre;
	int area;

	//code 
	printf("Please provide Length of the rectangle \n");
	scanf("%d",&len);
	
	printf("Please provide Breadth of the rectangle\n");
	scanf("%d", &bre);

	area = len * bre; 
	printf("Area of rectangle is %d\n", area);
	
	return(0);
}
