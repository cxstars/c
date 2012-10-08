#include <stdio.h>
#include <math.h>
int main(void)
{
	char name[10];
	double f_1 = 10.12345789;
	printf("Hello c world!\n");
	printf("What's your name?\n");
	scanf("%s",name);
	printf("Hi,%s!\n",name);
	printf("Testing float %.2f\n",f_1);
	printf("Testing float %1.2f\n",f_1);
	printf("Testing float %2.2f\n",f_1);
	printf("Testing float %5.2f\n",f_1);
	printf("Testing float %f\n",f_1);
	return 0;
}
