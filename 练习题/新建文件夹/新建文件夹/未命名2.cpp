#include<stdio.h>
#include<conio.h>
int zheng( int n)
{
    int i,j;
    
     for(i=n;i!=0;i--)
    {
    for(j=0;j<i;j++)
    printf("*");
     printf("\n");
     }
    for(i=1;i<=n;i++)
    {
    for(j=1;j<=i;j++)
    printf("*");
     printf("\n");
     }
    
    

}

int main()
{
   
    int zheng( int n);
    int n;
    scanf("%d",&n);
    zheng(n);
    getch();
    return 0;
}
