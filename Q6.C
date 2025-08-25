//Q6: Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main ()
{
    int a,b,s;
    printf ("please enter two integers:");
    scanf ("%d %d",&a,&b);

    s=b;
    printf ("integer after swapping %d %d",s,a);

return 0;

}