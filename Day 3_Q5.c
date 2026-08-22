
// Write a program to convert temperature from Celcius to Fahrenheit.
# include <stdio.h>
int main ()
{
    float celcius, fahrenheit;
    printf("Enter temperature in celcius: ");
    scanf("%f", &celcius);
    fahrenheit = (celcius * 9 /5) + 32;
    printf("Fahrenheit=%.0f\n", fahrenheit);
    return 0;
}