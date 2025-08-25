//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>
int main ()
{
    float p,r,t,si,ci;
    printf ("enter principle amount ");
    scanf ("%f",&p);
    printf ("enter rate of intrest ");
    scanf ("%f",&r);
    printf ("enter time in years ");
    scanf ("%f",&t);

    si=p*r*t/100;
    printf ("your simple interst is %f\n",si);

    ci=p*pow(1+r/100,t)-p;
    printf ("your compound interst is %f",ci);
    
    return 0;
}