#include<stdio.h>
#include<conio.h>
#include<math.h>
int n;
int li(int n)
{
int i=0;
if(n==1)
return 0;
for(i=2;i<sqrt(n);i++)
{
if(n%i==0)
{
return 0;
}
}
return 1;
}


int main()
{

    int li(int b);
    int n,b,f;
  scanf("%d",&n);
  
   if( li(b)==1)
   
   printf("%d不是素数",n); 
   
    else
    printf("%d是素数",n); 

    getch();
    return 0;
}
