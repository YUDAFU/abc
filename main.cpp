
#include<stdio.h>
#include<stdint.h>
#include"function1.h"


int main()
{
	int i;
	for(i = 0; i <= 9; i++){
		func_configure();
	}
	func_get();
	func_pop();
	
	return 0;
}

