//Q8: Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>
int main ()
{ 
    int n,s;
    printf ("enter the nth naturn number you want sum of ");
    scanf ("%d",&n);

    s=n*(n+1)/2;
    printf ("sum of first %d",n);
    printf (" natural number is %d",s);

    return 0;
}
