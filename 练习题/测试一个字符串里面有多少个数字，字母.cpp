#include<stdio.h>
#include<stdlib.h>
int main()
{
	char x,m;
	int a=0,b=0,c=0,d=0,f=0;
	printf("����������������ַ�����ͳ��(������������):\n");
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
	printf("��дӢ�ģ�%d\t СдӢ�ģ�%d\t ���֣�%d\t �ո�%d\t �����ַ���%d\t",a,b,c,d,f);
	printf("\n");
	printf("�Ƿ�������Ƴ�����n\n");
	scanf("%c",&m);
	if(m=='n') 
	break;
}
	system("pause");
	return 0;
} 

