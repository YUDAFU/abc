#include"function1.h"
#include<stdio.h>

static uint8_t abc = 123;

static int func_internal_init()
{
	static int start = 0;

	if(0 == start){
		printf("func_internal init\n");
	}

	start++;
	abc++;
	printf("start code:%d, abc:%d\n", start, abc);
	printf("ptr_start:%p, ptr_abc:%p\n", &start, &abc);

	return 0;
}

int func_get()
{
	printf("func_get#####################\n");

	uint8_t *test_data = 0;
	printf("%p\n", test_data++);
	printf("%p\n", test_data++);
	printf("%p\n", test_data++);
	
	int *test_data1 = 0;
	printf("%p\n", test_data1++);
	printf("%p\n", test_data1++);
	printf("%p\n", test_data1++);
	
	int test_data2 = 30;
	int *ptr_data = &test_data2;
	printf("%p %u %d\n", ptr_data++, ptr_data, *ptr_data);
	printf("%p %u %d\n", ptr_data++, ptr_data, *ptr_data);
	printf("%p %u %d\n", ptr_data++, ptr_data, *ptr_data);
	printf("%p %u %d\n", ptr_data++, ptr_data, *ptr_data);
	
	uint8_t test_data3 = 40;
	uint8_t *ptr_data1 = &test_data3;
	printf("%p %u %d\n", ptr_data1++, ptr_data1, *ptr_data1);
	printf("%p %u %d\n", ptr_data1++, ptr_data1, *ptr_data1);
	printf("%p %u %d\n", ptr_data1++, ptr_data1, *ptr_data1);
	printf("%p %u %d\n", ptr_data1++, ptr_data1, *ptr_data1);

      return 0;	
}



int func_pop()
{
	printf("func_pop#####################\n");
	
	uint8_t func_data = 66;

      return 0;	
}


int func_configure()
{
	func_internal_init();
	printf("func_configure done!\n");
	
      return 0;	
}
