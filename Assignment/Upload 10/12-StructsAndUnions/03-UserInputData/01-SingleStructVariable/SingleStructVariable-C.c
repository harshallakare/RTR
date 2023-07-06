#include<stdio.h>
#include<conio.h>

struct hbl_MyData
{
	int hbl_i;
	float hbl_f;
	double hbl_d;
	char hbl_ch;

};

int main(void)
{
	//varaible declarations 
	struct hbl_MyData hbl_data; // Declarating a single struct variable 

	//code 
	//User Input For Vlaue of data members of 'struct MyData'
	printf("Harshal Lakare\n\n");
	printf("\n\n");

	printf("Enter Interger Value for data member 'hbl_i' of 'struct hbl_Mydata' : \n");
	scanf("%d", &hbl_data.hbl_i);

	printf("Enter Floating-Point Value For data Meber 'hbl_f' of 'struct hbl_MyData' : \n");
	scanf("%f", &hbl_data.hbl_f);

	printf("Enter 'Double' Value for Data Member 'hbl_d' of 'struct hbl_MyData' : \n");
	scanf("%lf", &hbl_data.hbl_d);

	printf("Enter character value for data member 'c' of 'struct hbl_MyData' : \n");
	hbl_data.hbl_ch = getch();

	//Display Value of data Members of 'struct MyData'
	printf("\n\n");
	printf("Data Members of 'struct MyData' Are :\n\n");
	printf("hbl_i = %d\n", hbl_data.hbl_i);
	printf("hbl_f = %f\n", hbl_data.hbl_f);
	printf("hbl_d = %lf\n", hbl_data.hbl_d);
	printf("hbl_c = %c\n\n", hbl_data.hbl_ch);

	return(0);
}