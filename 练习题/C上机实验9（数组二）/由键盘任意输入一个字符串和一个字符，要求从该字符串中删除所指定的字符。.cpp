#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char c1[10],c2;
	int i,j;
	j=0;
	gets(c1);
	scanf("%c",&c2);
	while(c1[i]!='\0')
	{if(c1[i]!=c2)
	i++;
	else
	{
	j=c1[i];
	c1[i]=c1[i+1];
	c1[i+1]=j;
}
	}
	c1[i]='\0';
	puts(c1);
	system("pause");
	return 0;
}
