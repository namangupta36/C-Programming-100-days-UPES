#include <stdio.h>
int main ()
{
    int choice;
    int a,b;
    float x, y;
    while (1)
    {
    printf("===== CALCULATOR =====\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Power\n");
    printf("7. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    if (choice == 7)
    {
        printf("Exiting...");
        break;
    }
    if (choice < 1 || choice > 7)
    {
        printf("Invalid choice\n");
        continue;
    }
    if (choice == 5)
    {
        printf("Enter two integers: ");
        scanf("%d %d", &a, &b);
        if (b == 0)
        printf("Cannot divide by zero\n");
        else
        printf("Result = %d\n", a % b);
    }
    else if (choice == 6)
    {
        printf("Enter base and exponent: ");
        scanf("%f %f", &x, &y);
        float result = 1;
        int i;
        for (i = 1; i <= y; i++)
        result = result * x;
        printf("Result = %.2f\n", result);
    }
    else
    {
        printf("Enter two numbers: ");
    scanf("%f %f", &x, &y);
    switch (choice)
    {
        case 1:
        printf("Result = %.2f", x + y);
        break;
        case 2:
        printf("Result = %.2f", x - y);
        break;
        case 3:
        printf("Result = %.2f", x * y);
        break;
        case 4:
        if (y == 0)
        printf("Cannot divide by zero");
        else
        printf("Result = %.2f", x / y);
        break;
        default:
    }
    }
}
return 0;
}