
// Write a program to calculate the area and circumference of a circle given its radius.
# include <stdio.h>
int main ()
{
    float r, area, circumference;
    printf("Enter radius: ");
    scanf("%f", &r);
    area = 3.14159 * r * r;
    circumference = 2 * 3.14159 * r;
    printf("Area=%2f, Circumference=%2f\n", area, circumference);
    return 0;
}
