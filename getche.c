#include <stdio.h>
int main(void)
{
	char c,ch;
	c = getch();	//getch()不将读入的字符回显在显示屏幕上
	ch = getche();	//getche()将读入的字符回显到显示屏幕上
	putchar(c);
	putchar(ch);
	return 0;
	//Linux Ubuntu下不能执行
}
