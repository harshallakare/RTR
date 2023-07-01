#include<stdio.h>

//Defining Struct 
struct MyData
{
	int i; 
	float f; 
	double d; 
	char c;

};

int main(void)
{
	//variable declarations 

	//35 will be assigned to 'i' of 'data_one'
	//3.9 will be assiged to 'f' of 'data_one'
	//1.23765 will be assiged to 'd' of 'data_one'
	// 'A' will be assigned to 'c' of 'data_one'
	struct MyData data_one = {35,3.9f, 1.23765,'A'}; //Inline Initialization 

	// 'P' will be assiged to 'i' of 'data_two' ... but 'P' is a character (char) and 'i' is an integer ....so 'P' is converted int o it decimal interger ASCII value (80) and 80 is asigned to 'i' of data_two
	//6.2 will be assiged to 'f' of data_two 
	//112.199523 will be assiged to 'd' of 'data_two'
	//68 will be assiged to 'c' of 'data_two'....but 68 is an interger (int) and 'c' is a 'char' .... soi 68 os considered as a decimal ASCII value and its corressponding character ('D') is assigned to 'c' of data_two 
	struct MyData data_two = { 'P', 6.2f, 12.199523,68 }; //Inline Initialization 

	//36 will be assiged to 'i' of 'data_three'
	//'G' is 'char', but 'f' of 'data_three' is 'float'..hence 'G' is converted to its decimal integer ASCII value (71) and thgis in turn is converted to 'float' (71.000000) and then it will be assiged to 'f' of data_three
	//0.00000000 will be assiged to 'd' of data_three 
	//No Character will be assiged to 'c' of 'data_three' 
	struct MyData data_three = {36, 'G'}; //Inline Initialization 

	//79 will be asisged to 'i' of 'data_four'
	//0.000000 will be assiged to 'f' of 'data_four'
	//0.000000 will be assiged to 'c' of 'data_four' 
	struct MyData data_four = { 79 }; //Inline Initialization 

	//code 
	//Displaying Values of the data member of 'struct MyData'
	printf("Harshal Lakare \n\n");
	printf("\n\n");
	printf("Data Members of 'struct MyData data_one' Are : \n\n");
	printf("i = %d\n", data_one.i);
	printf("f = %f\n", data_one.f);
	printf("d = %lf\n", data_one.d);
	printf("c = %c\n", data_one.c);

	printf("\n\n");
	printf("Data Members of 'struct MyData data_two' Are : \n\n");
	printf("i = %d\n", data_two.i);
	printf("f = %f\n", data_two.f);
	printf("d = %lf\n", data_two.d);
	printf("c = %c\n", data_two.c);

	printf("\n\n");
	printf("Data Members of 'struct MyData data_three' Are : \n\n");
	printf("i = %d\n", data_three.i);
	printf("f = %f\n", data_three.f);
	printf("d = %lf\n", data_three.d);
	printf("c = %c\n", data_three.c);

	printf("\n\n");
	printf("Data Members of 'struct MyData data_four' Are : \n\n");
	printf("i = %d\n", data_four.i);
	printf("f = %f\n", data_four.f);
	printf("d = %lf\n", data_four.d);
	printf("c = %c\n", data_four.c);


	return(0);
}
