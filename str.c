#include <stdio.h>
#include <string.h>
#define STAR "chen xin"
int main(void)
{
	char name[40];
	printf("What's your name?\n");
	scanf("%s",name);
	printf("Hello,%s!Your name has %d letters!And occupies %d memory cells.\n",name,strlen(name),sizeof name);
	printf("Hello,%s!Your name has %d letters!And occupies %d memory cells.\n",STAR,strlen(STAR),sizeof STAR);
	return 0;
}
