#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n=0,x,s=0;
	double ave;
	ave=0;
	for(i=1;i<=10;i++)
	{
		scanf("%d",&x);
		if(x>0)
		{n++;
		s=s+x;
	
		}
	}
	ave=(double)s/n;
	printf("%d %d %lf",s,n,ave);
	getch();
	return 0;
} 
