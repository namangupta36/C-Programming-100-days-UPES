
// Write a program to find Kaprekar's constant (6174).
#include <stdio.h>
int main ()
{
    int n, choice;
    int d1, d2, d3, d4;
    int temp;
    int ascending, descending;
    int result;
    int steps = 0;
    printf("Enter a 4-digit number: ");
    scanf("%d", &n);
    /* Check 4-digit number */
    if (n < 1000 || n > 9999)
    {
        printf("Invalid input! Enter a 4-digit number.");
        return 0;
    }
    /* Check repdigit */
    d1 = n / 1000;
    d2 = (n / 100) % 10;
    d3 = (n / 10) % 10;
    d4 = n % 10;
    if (d1 == d2 && d2 == d3 && d3 == d4)
    {
        printf("Invalid input! All digits cannot be same.");
        return 0;
    }
    result = n;
    while (result != 6174)
    {
        /* Extract digits */
        d1 = result / 1000;
        d2 = (result / 100) % 10;
        d3 = (result / 10) % 10;
        d4 = result % 10;
        /* Sort digits in ascending order */
        if (d1 > d2)
        {
            temp = d1;
            d1 = d2;
            d2 = temp;
        }
        if (d2 > d3)
        {
            temp = d2;
            d2 = d3;
            d3 = temp;
        }
        if (d3 > d4)
        {
            temp = d3;
            d3 = d4;
            d4 = temp;
        }
        if (d1 > d2)
        {
            temp = d1;
            d1 = d2;
            d2 = temp;
        }
        if (d2 > d3)
        {
            temp = d2;
            d2 = d3;
            d3 = temp;
        }
        /* Ascending number */
        ascending = d1 * 1000 + d2 * 100 + d3 * 10 + d4;
        /* Descending number */
        descending = d4 * 1000 + d3 * 100 + d2 * 10 + d1;
        /* Calculate difference */
        result = descending - ascending;
        steps++;
        printf("Step %d: %04d - %04d = %04d\n", steps, descending, ascending, result);
    }
    printf("Reached Kaprekar's constant in %d steps!\n", steps);
    /* Menu */
printf("\n1. Try another number\n");
printf("2. Show total steps taken\n");
printf("3. Exit\n");
printf("Enter choice: ");
scanf("%d", &choice);
switch (choice)
{
    case 1:
    printf("Run the program again with another number.");
    break;
    case 2:
    printf("Total steps taken: %d", steps);
    break;
    case 3:
    printf("Exiting...");
    break;
    default:
    printf("Invalid choice.");
}
return 0;
}