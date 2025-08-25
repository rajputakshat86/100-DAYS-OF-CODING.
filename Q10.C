//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include<stdio.h>
int main ()
{
    int h,m,s;
    printf ("enter time in seconds ");
    scanf ("%d",&s);
    
    h=s/3600;
    m=(s-h*3600)/60;
    s=s-h*3600-m*60;

    printf ("%d:%d:%d",h,m,s);

    return 0;
}