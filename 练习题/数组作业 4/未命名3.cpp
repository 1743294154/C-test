#include<stdio.h>
#include<stdlib.h>
int main()
{int a[5]={1,2,3,4,5},b[5]={0,2,1,3,0},i,s=0;
for(i=1;i<3;i++) s=s+a[b[i]];
printf("%d\n",s);
system("pause");
return 0;
}
