#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{  
    int a[3][3],i,b,d,s;
    for(i=0;i<3;i++)
    for(b=0;b<3;b++)
    scanf("%d",&a[i][b]);
     for(i=0;i<3;i++)
    {
                     for(b=0;b<3;b++)
    
                    printf("%d ",a[i][b]);
                     if(i=b)
                     s=s+a[i][b]+a[0][2]+a[2][0];
                    
                    }
                    printf("%d",s);
                     system("pause");
      return 0;
    
}
