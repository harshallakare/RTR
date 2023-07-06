#include<stdio.h>

//DEfining Struct 
struct hbl_MyData
{
	int hbl_i;
	float hbl_f;
	double hbl_d;
	char hbl_c;

} hbl_data = {30,4.5f,11.451995,'A'}; //Inline initializations of struct variable 'data' of type 'struct Mydata'

int main(void)
{
	//code 
	//Displaying Vlaue Of The Data Members of 'struct MyData'
	printf("Harshal Lakare \n\n");
	printf("\n\n");
	printf("Data Members Of 'struct hbl_MyData' Are :\n\n");
	printf("hbl_i = %d\n", hbl_data.hbl_i);
	printf("hbl_f = %f\n", hbl_data.hbl_f);
	printf("hbl_d = %lf\n", hbl_data.hbl_d);
	printf("hbl_c = %c\n", hbl_data.hbl_c);

	return(0);
}

