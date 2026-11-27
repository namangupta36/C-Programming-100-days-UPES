// Insert an element in a sorted array at the appropriate position.
#include <stdio.h>
int main ()
{
    int a[100], n, x, i;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    scanf("%d", &a[i]);

    scanf("%d", &x);

    i = n - 1;
    
    while (i >= 0 && a[i] > x)
    {
        a[i + 1] = a[i];
        i--;
    }
    a[i + 1] = x;
    n++;

    for (i = 0; i < n; i++)
    printf("%d ", a[i]);
    return 0;
}