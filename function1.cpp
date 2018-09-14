#include"function1.h"
#include<stdio.h>

static int func_internal_init()
{
	static int start = 0;

	if(0 == start){
		printf("func_internal init\n");
	}

	start++;
	printf("start code:%d\n",start);

	return 0;
}

int func_get()
{
	printf("func_get\n");

      return 0;	
}



int func_pop()
{
	printf("func_pop\n");
	
	uint8_t func_data = 66;

      return 0;	
}


int func_configure()
{
	func_internal_init();
	printf("func_configure done!\n");
	
      return 0;	
}
