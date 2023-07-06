#include<stdio.h>

//Defining Struct 
struct hbl_MyData
{
	int hbl_i;
	float hbl_f;
	double hbl_d;
	char hbl_c;

};

int main(void)
{
	//variable declarations 

	//35 will be assigned to 'hbl_i' of 'data_one'
	//3.9 will be assiged to 'hbl_f' of 'data_one'
	//1.23765 will be assiged to 'hbl_d' of 'data_one'
	// 'A' will be assigned to 'hbl_c' of 'data_one'
	struct hbl_MyData hbl_data_one = {35,3.9f, 1.23765,'A'}; //Inline Initialization 

	// 'P' will be assiged to 'i' of 'data_two' ... but 'P' is a character (char) and 'i' is an integer ....so 'P' is converted int o it decimal interger ASCII value (80) and 80 is asigned to 'i' of data_two
	//6.2 will be assiged to 'f' of data_two 
	//112.199523 will be assiged to 'd' of 'data_two'
	//68 will be assiged to 'c' of 'data_two'....but 68 is an interger (int) and 'c' is a 'char' .... soi 68 os considered as a decimal ASCII value and its corressponding character ('D') is assigned to 'c' of data_two 
	struct hbl_MyData hbl_data_two = { 'P', 6.2f, 12.199523,68 }; //Inline Initialization 

	//36 will be assiged to 'i' of 'data_three'
	//'G' is 'char', but 'f' of 'data_three' is 'float'..hence 'G' is converted to its decimal integer ASCII value (71) and thgis in turn is converted to 'float' (71.000000) and then it will be assiged to 'f' of data_three
	//0.00000000 will be assiged to 'd' of data_three 
	//No Character will be assiged to 'c' of 'data_three' 
	struct hbl_MyData hbl_data_three = {36, 'G'}; //Inline Initialization 

	//79 will be asisged to 'i' of 'data_four'
	//0.000000 will be assiged to 'f' of 'data_four'
	//0.000000 will be assiged to 'c' of 'data_four' 
	struct hbl_MyData hbl_data_four = { 79 }; //Inline Initialization 

	//code 
	//Displaying Values of the data member of 'struct MyData'
	printf("Harshal Lakare \n\n");
	printf("\n\n");
	printf("Data Members of 'struct hbl_MyData data_one' Are : \n\n");
	printf("hbl_i = %d\n", hbl_data_one.hbl_i);
	printf("hbl_f = %f\n", hbl_data_one.hbl_f);
	printf("hbl_d = %lf\n", hbl_data_one.hbl_d);
	printf("hbl_c = %c\n", hbl_data_one.hbl_c);

	printf("\n\n");
	printf("Data Members of 'struct hbl_MyData data_two' Are : \n\n");
	printf("hbl_i = %d\n", hbl_data_two.hbl_i);
	printf("hbl_f = %f\n", hbl_data_two.hbl_f);
	printf("hbl_d = %lf\n", hbl_data_two.hbl_d);
	printf("hbl_c = %c\n", hbl_data_two.hbl_c);

	printf("\n\n");
	printf("Data Members of 'struct hbl_MyData data_three' Are : \n\n");
	printf("hbl_i = %d\n", hbl_data_three.hbl_i);
	printf("hbl_f = %f\n", hbl_data_three.hbl_f);
	printf("hbl_d = %lf\n", hbl_data_three.hbl_d);
	printf("hbl_c = %c\n", hbl_data_three.hbl_c);

	printf("\n\n");
	printf("Data Members of 'struct hbl_MyData data_four' Are : \n\n");
	printf("hbl_i = %d\n", hbl_data_four.hbl_i);
	printf("hbl_f = %f\n", hbl_data_four.hbl_f);
	printf("hbl_d = %lf\n", hbl_data_four.hbl_d);
	printf("hbl_c = %c\n", hbl_data_four.hbl_c);


	return(0);
}
