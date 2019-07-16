#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
      int a[10],t,s,i;
      t=0;
      s=0;
      for(i=0;i<9;i++)
     {
      scanf("%d",&a[i]);
      if(a[i]>0)
      t=t+a[i];
      else if(a[i]<0)
      s=s+a[i];
      }
      printf("%d %d",t,s);
      system("pause");
      return 0;
}
