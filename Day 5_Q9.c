
// Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>
int main ()
{
    float p, r, t, si, ci, amount;
    printf("Enter principal, rate and time: ");
    scanf("%f %f %f", &p, &r, &t);
    si = (p * r * t) / 100;
    amount = p * pow(1 + r / 100, t);
    ci = amount - p;
    printf("Simple Interest=%.2f, Compound interest=%.2f\n", si, ci);
    return 0;
}