//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main ()
{
    float r,a,c;
    float pi=3.1415;
    printf ("radius of circle is ");
    scanf ("%f",&r);
    
    a=pi*r*r;
    printf ("area of circle is %f]\n",a);

    c=2*pi*r;
    printf ("circumference of circle is %f",c);

    return 0;
}