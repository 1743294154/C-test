#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,c,t=0;
	printf("qingshurushuzi:\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
	t=a;
	a=b;
	b=t;
}
 if(a>c) 
{
	t=a;
	a=c;
	c=t;
}
 if(b>c)
{
	t=b;
	b=c;
	c=t;	
}
printf("%5d%5d%5d",a,b,c);
getch();
return 0;	
}
