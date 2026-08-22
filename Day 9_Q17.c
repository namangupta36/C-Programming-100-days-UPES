
// Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>
int main ()
{
    float a, b, c, D, root1, root2;
    scanf("%f %f %f", &a, &b, &c);
    D = b * b - 4 *a * c;
    if (D > 0)
    {
        root1 = (-b + sqrt(D)) / ( 2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        printf("Roots are real and differential: %.2f %.2f\n", root1, root2);
    }
    else if (D == 0)
    printf("Roots are real and same: %.2f\n", -b / (2 * a));
    else
    printf("Roots are complex\n");
    return 0;
}