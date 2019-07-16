#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int a,b,c,min;
    scanf("%d%d%d",&a,&b,&c);
    if(a<b) min=a;
    else min=b;
    if(min>c) min=c;
    printf("min=%d",min);
   // system("pause");
    getch();
    return 0;
}
