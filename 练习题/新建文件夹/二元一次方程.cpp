#include<stdio.h>
#include<conio.h>
#include<math.h>
double disc;
double g(double a,double b,double c)
{
double x1,x2;

x1=(-b+sqrt(disc))/(2.0*a);
x2=(-b-sqrt(disc))/(2.0*a);
printf("������������ȵĸ���\n%8.4f\n %8.4f\n",x1,x2);
}

double k(double a,double b,double c)
{
double x1;
x1=-b/(2*a);
printf("����һ������������%8.4f\n",x1);
}

int main()
{
	double a,b,c,disc;
	scanf("%lf%lf%lf",&a,&b,&c);
	disc=b*b-4*a*c;
	if(disc>0)
	g(a,b,c);
	else if(fabs(disc)<=1e-8)
	k(a,b,c);
	else
	printf("�޽�");
	getch();
	return 0;
	
} 
