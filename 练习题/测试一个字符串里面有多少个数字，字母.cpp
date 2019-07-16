#include<stdio.h>
#include<stdlib.h>
int main()
{
	char x,m;
	int a=0,b=0,c=0,d=0,f=0;
	printf("请输入你想输入的字符进行统计(不能输入中文):\n");
	while(1)
{
	while((x=getchar())!='\n')

	
		if(x>=65&&x<=90)
		a++;
		else if(x>=97&&x<=122)
		b++;
		else if(x>='0'&&x<='9')
		c++;
		else if(x==' ')
		d++;
		else
		f++;
	printf("大写英文：%d\t 小写英文：%d\t 数字：%d\t 空格：%d\t 其他字符：%d\t",a,b,c,d,f);
	printf("\n");
	printf("是否继续？推出输入n\n");
	scanf("%c",&m);
	if(m=='n') 
	break;
}
	system("pause");
	return 0;
} 

