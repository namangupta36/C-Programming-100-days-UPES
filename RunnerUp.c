#include <stdio.h>
int main ()
{
    int n, i;
    int arr[100];
    int largest, second;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    if (arr[0] > arr[1])
    {
        largest = arr[0];
        second = arr[1];
    }
    else
    {
        largest = arr[1];
        second = arr[0];
    }
    for (i = 2; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second)
        {
            second = arr[i];
        }
    }
    printf("Second Largest Element = %d", second);
    return 0;
} 