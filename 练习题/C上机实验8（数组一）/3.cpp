#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{  
    int a[10],i,b,c,min,d;
    d=0;
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
     min=a[0];b=0;
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
                    
                   
             
    for(c=0;c<=9;c++)
    if(min>a[c])
        {   min=a[c];
             b=c;
            }
        
  printf("min=%d\n",min,b);
   if(a[b]!=a[0])
   {
   d=a[b];
  a[b]=a[0];
   a[0]=d;
}

  for(i=0;i<10;i++)
printf("%d",a[i]);
system("pause");
      return 0;
    
}
