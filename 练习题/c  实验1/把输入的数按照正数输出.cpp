#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a<0)a=-a;
     else a=a;
    printf("%d",a);
    //system("pause");
    getch();
    return 0;
}
