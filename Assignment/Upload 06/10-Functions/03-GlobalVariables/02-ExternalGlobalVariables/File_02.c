//****** Global Scope  ******
//global_count is global variable declared in source code file ExternalGlobalVariablesInMultipleFiles-C 
// To access it in this file , it must first be re-declared as an external variable i nthe global scope of this file along with the 'extern' keyword and its proper data type 
//Then, it can be used as any ordinary global variable throught this file as well
//Here Re-declaring 'global_count' as a local varibale using 'extern' keyword within change_count_two()

#include<stdio.h>

void change_count_two(void)
{
	//code 
	extern int global_count;
	global_count = global_count + 1;
	printf("change_count_two() : Value Of global_count in File_02 = %d\n", global_count);
}