#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10],i,b,j,t;
	printf("����������Ҫ��������֣�\n");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	printf("��ȷ������������֣�\n"); 
	for(i=0;i<10;i++)
	
	printf("%d ",a[i]);
	printf("\n");
	for(j=0;j<10;j++)
	for(i=0;i<10-j;i++)
	if(a[i]<a[i-1])
	{
		t=a[i];
		a[i]=a[i-1];
		a[i-1]=t;
	}
	printf("����Ľ���ǣ�\n");
	for(i=0;i<10;i++)
	printf("%d ",a[i]);
	
	system("pause");
	return 0;
	
	
} 
