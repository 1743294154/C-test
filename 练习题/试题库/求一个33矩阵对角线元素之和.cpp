#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{  
    int a[3][3],i,b,d,s,k;
    k=0;
    s=0;
    for(i=0;i<3;i++)
    for(b=0;b<3;b++)
    scanf("%d",&a[i][b]);
     for(i=0;i<3;i++)
    {
    for(b=0;b<3;b++)
   
   printf("%d ",a[i][b]); 
    printf("\n");
}
    
     for(i=0;i<3;i++)
    {
                     for(b=0;b<3;b++)
    
                   // printf("%d ",a[i][b]);
                     if(i=b)
                     s=s+a[i][b];
                     
                    
                    }
                    k=s+a[0][0]+a[0][2]+a[2][0];
                    printf("%d",k);
                    
                     system("pause");
      return 0;
    
}
