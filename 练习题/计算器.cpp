#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,d;
	char c,m;
	while(1)
{
	scanf("%d%c%d=",&a,&c,&b);
	if(c=='+')
	d=a+b;
	else if(c=='-')
	d=a-b;
	else if(c=='*')
	d=a*b;
	else
	d=a/b;
	printf("%d",d);
	printf("ÊÇ·ñ¼ÌÐø£¿\n");
	scanf("%c",&m);
	if(m=='n')
	break; 
}
system("pause");
 return 0;
}
