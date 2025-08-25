//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main ()
{
    float l,b,a,p;
    printf ("lenght=");
    scanf ("%f",&l);
    printf ("breath=");
    scanf ("%f",&b);
    a=l*b;
    printf ("area of rectangle is %f\n",a);

    p=2*(l+b);
    printf ("perimeter of rectance is %f",p);

    return 0;
}