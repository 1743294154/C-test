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
    printf("Բ�ܳ�=%.2f\nԲ���=%2.2f\nԲ������=%.2f\nԲ�����=%.2f\nԲ�����=%.2f",a,b,c,d,e);
   // system("pause");
    getch();
    return 0;
}
