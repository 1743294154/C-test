#include<stdio.h>
#include<conio.h>
int main()
{
    int nian,yue,tian;
    int date[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},{31,28,31,30,31,30,31,31,30,31,30,31}} 
    scanf("%d%d%d",&nian,&yue,&tian);
    ab(a,b,c);
    getch();
    return 0;
    
}  
int ab(int a,int b,int c)
{
    int g,sum=0,i;
    g=(nian%4==0)||(nian%400==0&&nian%100!=0);
    for(i=0;i<yue-1;i++)
    sum=sum+date[g][i];
    sum=sum+tian;
    
}  
    
    
    
    
