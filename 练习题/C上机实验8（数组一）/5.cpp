#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{  
    int a[10],i,k,t=0;
    for(i=0;i<9;i++)
    scanf("%d",&a[i]);
    for(i=0;i<9;i++)
    for(k=0;k<9-i;k++)
    if(a[k]>a[k+1])
    {
     t=a[k];
    a[k]=a[k+1];
    a[k+1]=t;
}
    for(i=0;i<9;i++)
    printf("%d ",a[i]);
    
    system("pause");
      return 0;
    
}
