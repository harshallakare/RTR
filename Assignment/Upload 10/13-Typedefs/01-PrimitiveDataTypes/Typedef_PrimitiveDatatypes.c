#include<stdio.h>

//Global typedef
typedef int hbl_MY_INT; // 'type' int has been redefined as MY_INT...now "MY_INT" can be treated just like 'int'

int main(void)
{
	//Function prototype 
	hbl_MY_INT Add(hbl_MY_INT, hbl_MY_INT);

	//Typedefs 
	typedef int hbl_MY_INT; // 'type' int has been redefined as MY_INT... Now "MY_INT" can be treated just like "int" 
	typedef float hbl_float; // 'type' float has beem redefined as hbl_float...Now "hbl_float" can be treated just like "float"
	typedef char character; // 'type' float has beem redefined as character...Now "character" can be treated just like "char"
	typedef double MY_DOUBLE; // 'type' float has beem redefined as character...Now "MY_DOUBLE" can be treated just like "double"

	// ****** Just Like in Win32SDK ******
	typedef unsigned int UINT; 
	typedef UINT HANDLE;
	typedef HANDLE HWND;
	typedef HANDLE HINSTANCE; 


	//variable declarations 
	hbl_MY_INT  a = 10, i; 
	hbl_MY_INT iArray[] = { 9,18,27,36,45,54,63,72,81,90, }; 

	hbl_float f_hbl = 30.9f; 
	const hbl_float f_hbl_pi = 3.14; 

	character ch = '*';
	character chArray_01[] = "Hello";
	character chArray_02[][10] = { "RTR","Batch","2023-2024" };

	MY_DOUBLE d = 8.041997;

	// ****** Just Random Number - They have Nothing to do with Any Window's Handle Or instatce Handle !!! This is just for understanbding ******
	UINT uint = 3456;
	HANDLE handle = 987; 
	HWND hwnd = 9876; 
	HINSTANCE hInstance = 14466; 

	//code 
	printf("Harshal Lakare \n\n");
	printf("\n\n");
	printf("Type MY_INT variable a = %d\n", a);

	printf("\n\n");

	for (i = 0; i < (sizeof(iArray) / sizeof(int)); i++)
	{
		printf("Type MY_INT array varaible iArray[%d] = %d\n", i , iArray[i]);
	}
	printf("\n\n");

	printf("\n\n");
	printf("Type hbl_float variable f = %f\n", f_hbl);
	printf("Type hbl_float constanct f_hbl_pi = %f\n", f_hbl_pi);

	printf("\n\n");
	printf("Type My_double variable d = %lf\n",d);

	printf("\n\n");
	printf("Type character variable ch = %c\n",ch);

	printf("\n\n");
	printf("Type character array variable chArray_01 = %s\n", chArray_01);

	printf("\n\n");
	for (i = 0; i < (sizeof(chArray_02) / sizeof(chArray_02[0])); i++)
	{
		printf("%s\t", chArray_02[i]);
	}
	printf("\n\n");

	printf("\n\n");
	printf("Type UNIT variable uint = %u\n\n", uint);
	printf("Type Handle variable handle = %u\n\n", handle);
	printf("Type HWND Variable hwnd = %u\n\n", hwnd);
	printf("Type HINSTANCE varaible hInstace = %u\n\n", hInstance);
	printf("\n\n");

	hbl_MY_INT x = 90; 
	hbl_MY_INT y = 30;
	hbl_MY_INT ret;

	ret = Add(x , y );
	printf("ret = %d\n\n", ret);

	return(0);
}

hbl_MY_INT Add(hbl_MY_INT a, hbl_MY_INT b)
{
	//code 
	hbl_MY_INT c;
	c = a + b;
	return(c);
}
