#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	void swap(int x, int y);
	int a,b;
	scanf("%d%d",&a,&b);
	swap(a,b);
	getch();
	return 0;
}
void swap(int x, int y)
{
	int t;
	t=x;
	x=y;
	y=t;
	printf("%d %d",x,y);
}
