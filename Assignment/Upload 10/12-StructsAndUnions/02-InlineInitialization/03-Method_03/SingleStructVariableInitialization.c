#include<stdio.h>


int main(void)
{
	//Defining Struct 
	struct hbl_MyData
	{
		int hbl_i;
		float  hbl_f;
		double hbl_d;
		char hbl_c;

	} hbl_data = {5,9.1f,3.78623, 'N'};

	//Displaying Values Of the Data Members of 'struct MyData'
	printf("Harshal Lakare\n\n");
	printf("\n\n");
	printf("Data Members of 'struct MyData' Are : \n\n");
	printf("hbl_i = %d\n", hbl_data.hbl_i);
	printf("hbl_f = %f\n", hbl_data.hbl_f);
	printf("hbl_d = %lf\n", hbl_data.hbl_d);
	printf("hbl_c = %c\n\n", hbl_data.hbl_c);
	
	return(0);

}