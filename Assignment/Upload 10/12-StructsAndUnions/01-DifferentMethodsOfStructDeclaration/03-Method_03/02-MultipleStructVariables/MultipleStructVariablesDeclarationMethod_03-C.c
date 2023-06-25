#include<stdio.h>

int main(void)
{
	//Defining Struct
	struct MyPoint
	{
		int hbl_x; 
		int hbl_y; 
	}point_A, point_B, point_C, point_D, point_E; //declaring 5 struct variable of type 'struct MyPoint' locally...

	//code 
	//Assiging Data Values to the data memebers of 'struct MyPoint' varibale  'point_A'
	point_A.hbl_x = 3;
	point_A.hbl_y = 0; 
	
	//Assiging Data Values to the data memebers of 'struct MyPoint' varibale  'point_B'
	point_B.hbl_x = 1;
	point_B.hbl_y = 2;

	//Assiging Data Values to the data memebers of 'struct MyPoint' varibale  'point_C'
	point_C.hbl_x = 9;
	point_C.hbl_y = 6;

	//Assiging Data Values to the data memebers of 'struct MyPoint' varibale  'point_D'
	point_D.hbl_x = 8;
	point_D.hbl_y = 2;

	//Assiging Data Values to the data memebers of 'struct MyPoint' varibale  'point_E'
	point_E.hbl_x = 11;
	point_E.hbl_y = 8;

	//Displaying Vlaues of the data members of 'struct MyPoint' (all varibales) 
	printf("Harshal Lakare\n\n");
	printf("\n\n");
	printf("Co-ordinates (x,y) of Point 'A' are : (%d, %d) \n\n",point_A.hbl_x,point_A.hbl_y);
	printf("Co-ordinates (x,y) of Point 'B' are : (%d, %d) \n\n", point_B.hbl_x, point_B.hbl_y);
	printf("Co-ordinates (x,y) of Point 'C' are : (%d, %d) \n\n", point_C.hbl_x, point_C.hbl_y);
	printf("Co-ordinates (x,y) of Point 'D' are : (%d, %d) \n\n", point_D.hbl_x, point_D.hbl_y);
	printf("Co-ordinates (x,y) of Point 'E' are : (%d, %d) \n\n", point_E.hbl_x, point_E.hbl_y);

	return(0);


}
