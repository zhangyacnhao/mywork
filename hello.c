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
	int d=0;int i;
	printf("please intput a unsigned number:");
	scanf("%d",&d);
	printf("d=%d\n",d);
	//sleep(10);
	int e=d;
		for(i=0;i<e;i++){
		//d=d+i;
		d=d+i;
		//printf("xunhuannei:%d\n",d);		
	}
	printf("%d de jc sult is %d\n",e,d);
	return 0;
	
}
void not7()
{
	int a;
	for(a=0;a<10;a++)
	{
	if (a%10==7) continue;
	if (a/10==7) continue;
	if (a%7==0) continue;
	printf("%d\n",a);
	}
}
int main()
{
	printf("hello world\n");
	mydef(9,10);
	jc();
	not7();
	return 0;

}

