#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10],i,b,j,t;
	printf("请输入你想要排序的数字：\n");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	printf("请确认你输入的数字：\n"); 
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
	printf("升序的结果是：\n");
	for(i=0;i<10;i++)
	printf("%d ",a[i]);
	
	system("pause");
	return 0;
	
	
} 
