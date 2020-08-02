#include<stdio.h>
#define SYSTEM 20
int main()
{
	int a = 20;

#if SYSTEM == a
	printf("Hello");
#endif

#if SYSTEM == 20
	printf("Wrold\n");
#endif

	printf("in function_1 for first commit \r\n ");
	return 0;
}
