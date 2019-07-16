#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
  float r,h,pi=3.14,a,b,c,d,e;
  scanf("%f%f",&r,&h);
  a=2*pi*r;
  b=pi*r*r;
  c=4*pi*r*r;
  d=4.0/3*pi*r*r*r;
  e=pi*r*r*h;
    printf("圆周长=%.2f\n圆面积=%2.2f\n圆球表面积=%.2f\n圆球体积=%.2f\n圆柱体积=%.2f",a,b,c,d,e);
   // system("pause");
    getch();
    return 0;
}
