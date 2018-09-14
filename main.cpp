
#include<stdio.h>
#include<stdint.h>
#include"function1.h"

static uint8_t abc = 123;

int main()
{
	uint8_t *test_data = 0;
	printf("%p\n", test_data++);
	printf("%p\n", test_data++);
	printf("%p\n", test_data++);
	
	int *test_data1 = 0;
	printf("%p\n", test_data1++);
	printf("%p\n", test_data1++);
	printf("%p\n", test_data1++);

	func_get();
	func_pop();
	
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

