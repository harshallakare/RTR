#include<stdio.h>

struct hbl_MyPoint
{
	int hbl_x;
	int hbl_y;
};

int main(void)
{
	//variable declarations 
	struct hbl_MyPoint hbl_point_A, hbl_point_B, hbl_point_C, hbl_point_D, hbl_point_E; //declaraing a 5 struct varaible 

	//code 
	//User Input for the data members of 'struct MyPoint' varaible 'point_A'
	printf("Harshal Lakare \n\n");
	printf("\n\n");
	printf("Enter X-COordinaters for point 'hbl_A' : ");
	scanf("%d", &hbl_point_A.hbl_x);
	printf("Enter Y-COordinaters for point 'hbl_A' : ");
	scanf("%d", &hbl_point_A.hbl_y);

	//User Input for the data members of 'struct MyPoint' varaible 'point_B'
	printf("\n\n");
	printf("Enter X-COordinaters for point 'hbl_B' : ");
	scanf("%d", &hbl_point_B.hbl_x);
	printf("Enter Y-COordinaters for point 'hbl_B' : ");
	scanf("%d", &hbl_point_B.hbl_y);

	//User Input for the data members of 'struct MyPoint' varaible 'point_C'
	printf("\n\n");
	printf("Enter X-COordinaters for point 'hbl_C' : ");
	scanf("%d", &hbl_point_C.hbl_x);
	printf("Enter Y-COordinaters for point 'hbl_C' : ");
	scanf("%d", &hbl_point_C.hbl_y);

	//User Input for the data members of 'struct MyPoint' varaible 'point_D'
	printf("\n\n");
	printf("Enter X-COordinaters for point 'hbl_D' : ");
	scanf("%d", &hbl_point_D.hbl_x);
	printf("Enter Y-COordinaters for point 'hbl_D' : ");
	scanf("%d", &hbl_point_D.hbl_y);

	//User Input for the data members of 'struct MyPoint' varaible 'point_E'
	printf("\n\n");
	printf("Enter X-COordinaters for point 'hbl_E' : ");
	scanf("%d", &hbl_point_E.hbl_x);
	printf("Enter Y-COordinaters for point 'hbl_E' : ");
	scanf("%d", &hbl_point_E.hbl_y);

	//Displaying Values Of the memeber of 'struct MyPoint' (all varaibles )
	printf("\n\n");
	printf("Co-ordinates (x,y) Of Point 'A' are : (%d, %d) \n\n", hbl_point_A.hbl_x, hbl_point_A.hbl_y);
	printf("Co-ordinates (x,y) Of Point 'B' are : (%d, %d) \n\n", hbl_point_B.hbl_x, hbl_point_B.hbl_y);
	printf("Co-ordinates (x,y) Of Point 'C' are : (%d, %d) \n\n", hbl_point_C.hbl_x, hbl_point_C.hbl_y);
	printf("Co-ordinates (x,y) Of Point 'D' are : (%d, %d) \n\n", hbl_point_D.hbl_x, hbl_point_D.hbl_y);
	printf("Co-ordinates (x,y) Of Point 'E' are : (%d, %d) \n\n", hbl_point_E.hbl_x, hbl_point_E.hbl_y);

	return(0);


}