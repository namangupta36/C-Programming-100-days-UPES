
// Write a program to swap the first and last digit of a number.
#include <stdio.h>
int main ()
{
    int n, first, last, digits = 1, temp, result;
    scanf("%d", &n);
    temp = n;
    while (temp >= 10)
    {
        temp = temp / 10;
        digits = digits * 10;
    }
    first = n / digits;
    last = n % 10;
    result = n - first * digits - last;
    result = result + last * digits + first;
    printf("%d", result);
    return 0;
}