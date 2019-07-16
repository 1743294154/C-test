#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
int main()
{
    float a,b,c,s,area;
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area=%f",area);
   // system("pause");
    getch();
    return 0;
}


//3.	输入三角形的三边长a、b、c，求三角形面积。求三角形面积的公式为 area=sqrt(s*(s-a)*(s-b)*(s-c))
//其中：s=（a+b+c）/2，
//sqrt（）是数学函数库中求平方根的函数，头文件是"math.h"。

