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


//3.	���������ε����߳�a��b��c���������������������������Ĺ�ʽΪ area=sqrt(s*(s-a)*(s-b)*(s-c))
//���У�s=��a+b+c��/2��
//sqrt��������ѧ����������ƽ�����ĺ�����ͷ�ļ���"math.h"��

