#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10][10];
	int i,b;
	for(i=0;i<10;i++)
	{
	a[i][0]=1;
	a[i][i]=1;
}
	for(i=2;i<10;i++)
	for(b=0;b<i;b++)
	{
	a[i][b]=a[i-1][b-1]+a[i-1][b];
}
	for(i=0;i<10;i++)
	{
	for(b=0;b<=i;b++)
	
	
	printf("%10d",a[i][b]);
	printf("\n");
	} 
	
	system("pause");
	return 0;
} 
