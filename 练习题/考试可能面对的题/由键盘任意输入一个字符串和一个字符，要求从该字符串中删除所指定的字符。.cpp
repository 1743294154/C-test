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

	for(i=0;c1[i]!='\0';i++)
	if(c1[i]!=c2)
	{
	c1[j++]=c1[i];
}
	

	c1[j]='\0';
	puts(c1);
	system("pause");
	return 0;
}
