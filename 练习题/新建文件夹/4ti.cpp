#include<stdio.h>
#include<stdlib.h>


int li(int a[3][3])
{
    int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%5d",a[i][j]);
		a[j][i]=a[i][j];
		
		printf("\n");
	} 
	printf("转换过后的数组"); 
	printf("\n");
	for(i=0;i<3;i++)
		{
		for(j=0;j<3;j++)
		printf("%5d",a[j][i]);
		printf("\n");
}
}

int main()
{
	
	int a[3][3];
	int i,j,z,c,d;
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	scanf("%d",&a[i][j]);
	printf("是这些数吗"); 
	printf("\n");
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		printf("%5d",a[i][j]);
		printf("\n");
	}
	li(a);
		

	system("pause");
	return 0;
} 



