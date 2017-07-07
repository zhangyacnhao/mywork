#include<stdio.h>
int a=0,b=0;
void mydef(a,b)
{
	int c=0;
	c=a+b;
	printf("add result is %d\n",c);
}

int main()
{
	printf("hello world\n");
	mydef(9,10);
	return 0;

}

