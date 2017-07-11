/*
 *Copyright none
 *version v1.0
 *Author:charles
 *Email:**********
 *This is a test git code
 */
/*
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

struct stuff{
	char name[10];
	int age;
	float score;
};

int main()
{
	printf("hello world\n");
	//mydef(9,10);
	//jc();
	//not7();
	struct stuff students={"xiao",28,99};
	printf("%s%d%f\n",students.name,students.age,students.score);
	return 0;

}
*/



#include <stdio.h> 
 
struct student  //结构体类型的说明与定义分开。 声明
{
int age;   /*年龄*/
float score;  /*分数*/
char sex;     /*性别*/
};
int main ()
 
{
 struct student a={ 20,79,'f'}; //定义
printf("年龄：%d 分数：%.2f 性别：%c\n", a.age, a.score, a.sex  );
 
return 0;
}
printf("helloworld");
