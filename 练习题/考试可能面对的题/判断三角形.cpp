#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float area=0,s=0;
	printf("请输入三边的长:\n"); 
	scanf("%d%d%d",&a,&b,&c);
	s=(a+b+c)/2;
	if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b)
	printf("该三角形是直角三角形\n");
	else if(a==b||b==c||c==a) 
	printf("该三角形是等腰三角形\n");
	else if(a==b&&b==c) 
	printf("该三角形是等边三角形\n");
	else if(a+b>c&&a+c>b&&b+c>a) 
	printf("该三角形是任意三角形\n");
	else
	printf("不能构成三角形");
	printf("面积是：\n");
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%lf",area);
	getch();
	return 0; 
} 
