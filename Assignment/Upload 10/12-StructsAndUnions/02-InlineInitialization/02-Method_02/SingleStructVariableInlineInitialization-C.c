#include<stdio.h>

//Defining Struct 
struct hbl_MyData
{
	int hbl_i;
	float hbl_f;
	double hbl_d;
	char hbl_c;
};


struct hbl_MyData hbl_data = {9,8.2f, 9.61998,'P'};

int main(void)
{
	//code 
	//Displaying Values of the Data Memeber of 'Struct MyData'
	printf("Harshal Lakare\n\n");
	printf("\n\n");
	printf("hbl_i = %d\n", hbl_data.hbl_i);
	printf("hbl_f = %f\n", hbl_data.hbl_f);
	printf("hbl_d = %lf\n", hbl_data.hbl_d);
	printf("hbl_c = %c\n", hbl_data.hbl_c);

	return(0);
}