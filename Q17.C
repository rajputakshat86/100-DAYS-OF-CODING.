//Q17: Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2;
        printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);   
    discriminant = (b * b) - (4 * a * c);
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are Real and Distinct.\n");
        printf("Root1 = %.2f, Root2 = %.2f\n", root1, root2);
    }
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are Real and Equal.\n");
        printf("Root1 = Root2 = %.2f\n", root1);
    }
    else {
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are Imaginary (Complex Conjugates).\n");
        printf("Root1 = %.2f + %.2fi, Root2 = %.2f - %.2fi\n",
               realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}



