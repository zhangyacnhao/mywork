/*
 *Copyright none
 *version v1.0
 *Author:charles
 *Email:**********
 *This is a test git code
 */

#include <unistd.h>
#include<stdio.h>
int a=0,b=0;
void mydef(a,b)
{
	int c=0;
	c=a+b;
	printf("add result is %d\n",c);
}
int jc(){
	int d=0;int i=0;
	printf("please intput a unsigned number:\n");
	scanf("%d",&d);
	printf("d=%d\n",d);
	//sleep(10);
		for(i=0;i<d;i++){
		//d=d+i;
		d=d+(d-i);
		printf("xunhuannei:%d\n",d);		
	}
	printf("xuanhuanwan\n");
	return 0;
	
}
int main()
{
	printf("hello world\n");
	mydef(9,10);
	jc();
	return 0;

}

