#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float area=0,s=0;
	printf("���������ߵĳ�:\n"); 
	scanf("%d%d%d",&a,&b,&c);
	s=(a+b+c)/2;
	if(a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b)
	printf("����������ֱ��������\n");
	else if(a==b||b==c||c==a) 
	printf("���������ǵ���������\n");
	else if(a==b&&b==c) 
	printf("���������ǵȱ�������\n");
	else if(a+b>c&&a+c>b&&b+c>a) 
	printf("��������������������\n");
	else
	printf("���ܹ���������");
	printf("����ǣ�\n");
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%lf",area);
	getch();
	return 0; 
} 
