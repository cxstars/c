#include <stdio.h>
#include <string.h>	//提供strlen()函数的原型
#define DENSITY 62.4;	//人的密度（单位是：英镑/每立方英尺）
int main(void)
{
	float weight,volume;
	int size,letters;
	char name[30];

	printf("Hi!What's your first name?\n");
	scanf("%s",name);
	printf("%s,what's your weight in pounds?\n",name);
	scanf("%f",&weight);
	size = sizeof name;
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("Well, %s,your volume is %2.2f cubic feet.\n",name,volume);
	printf("Also,your first name has %d letters.\n",letters);
	printf("and we have %d bytes to store it in.\n",size);
	return 0;
}
