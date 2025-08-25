//Q5: Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
int main ()
{
    float F,C;
    printf ("temperature in celcius=");
    scanf ("%f",&C);

    F=(C*1.8)+32;
    printf ("temperature in fahrenheit is %f",F);

    return 0;
}
