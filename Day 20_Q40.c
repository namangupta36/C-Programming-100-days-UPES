// Write a program to find the 1's complement of a binary number and print it.
#include <stdio.h>
int main ()
{
    char binary[100];
    int i;
    scanf("%s", binary);
    for (i = 0; binary[i] != '\0'; i++)
    {
        if (binary[i] == '0')
        binary[i] = '1';
        else
        binary[i] = '0';
    }
    printf("%s", binary);
    return 0;
}