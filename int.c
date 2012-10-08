#include <stdio.h>
int main(void)
{
	int test2 = 2147483647;
	printf("The max int:%d,size:%d\n",test2,sizeof(test2));	//最大int
	printf("The max+1 int:%d,size:%d\n",test2+1,sizeof(test2+1));	//最大int数加1后，从头开始再循环
	return 0;
}
