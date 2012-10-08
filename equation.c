#include <stdio.h>
#include <math.h>
int main(void)
{
	double a,b,c;
	double x1,x2,p;
	printf("Please input a,b,c:");
	scanf("%lf%lf%lf",&a,&b,&c);	//输入系数
	printf("\n");
	p = b*b-4*a*c;					//送别式
	x1 = (-b+sqrt(p))/(2*a);		//求出方程式的根
	x2 = (-b-sqrt(p))/(2*a);
	printf(“x1 = %f,x2 = %f\n”,x1,x2);	//输出结果
	return 0;
}
