#include <stdio.h>
#include <string.h>
#define STAR "Star.Cx"
int main(void)
{
	char first;
	char name[40];
	printf("Hi,what's your name?\n");
	scanf("%s",name);
	first = name[0];
	printf("Your name first letter is %c!\n",first);
	printf("Your name have %d letters!And %d memory cells!\n",strlen(name),sizeof(name));
	printf("Yourself define a const STAR is %s!\n",STAR);
	printf("The STAR length is %d,and have %d memory cells!\n",strlen(STAR),sizeof(STAR));
}