#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{  
   //二维数组
   //按行存放 
   int a[][4]={1,2,5,6,7,9,23,45,78},i,j;
  for(i=0;i<3;i++)
      for(j=0;j<4;j++)
        scanf("%d",&a[i][j]);
       
   for(i=0;i<3;i++)
     {for(j=0;j<4;j++)
         printf("%5d",a[i][j]); 
      printf("\n");
      }   
    system("pause");
    return 0;
    }
