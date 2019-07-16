#include<stdio.h>
#include<conio.h>
int main()
{
   int fac(int n);
   int i,a,b,c,k;
   scanf("%d%d%d",&a,&b,&c);
   k=fac(a)+fac(b)+fac(c);
    printf("%d",k);   
    getch();
    return 0;
}

int fac( int n)
{
    int a;
    if(n>1)
a=fac(n-1)*n;
else if(n==1||n==0)
a=1;
else 
a=-1;
return a;
}


