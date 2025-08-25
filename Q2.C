//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main ()
{
    float a,b,c,d,e,f;
    printf("num1=");
    scanf ("%f",&a);
    printf ("num2=");
    scanf ("%f",&b);
    c=a+b;
    printf ("sum of two number is %f\n",c);
    d=a-b;
    printf ("difference of two number is %f\n",d);
    e=a*b;
    printf ("product of two number is %f\n",e);
    f=a/b;
    printf ("division of two number is %f",f);

    return 0;

}