#include<stdio.h>
#include<conio.h>
int f(int n)
{
    int z=0;
    if(n==1)
    z=1;
    else if(n>1)
    z=n*n+f(n-1); 
    return(z);
}


int main()
{
    int n,a,b;
    scanf("%d",&n);
    a=f(n);
    printf("%d",a);
    getch();
    return 0;
}
