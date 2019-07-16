#include<stdio.h>
#include<conio.h>
#include<stdlib.h> 
struct student
{
	int num;
	char name[21];
	char sex;
	float score[3];
	
}; 
int main()
{
	int i;
	struct student a={1001,"zhengli",'m',89,56,78};
	a.score[3]=0;
	for(i=0;i<3;i++)
	a.score[3]=a.score[3]+a.score[i];
	a.score[3]=a.score[3]/3;
	printf("学号：%d\n 姓名：%s\n 性别：%c\n 语文：%lf\n 数学：%lf\n 英语：%lf\n 平均分：%lf\n",a.num,a.name,a.sex,a.score[0],a.score[1],a.score[2],a.score[3]);
	system("pause");
	return 0;
	 
	
}
