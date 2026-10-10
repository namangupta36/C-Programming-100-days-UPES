// Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main () {
    long long n;
    int freq[10] = {0};
    int digit, max = 0, result = 0;

    scanf("%lld", &n);

    if (n < 0)
    n = -n;

    if (n == 0)
    freq[0]++;

    while (n > 0) {
        digit = n % 10;
        freq[digit]++;
        n = n / 10;
    }

    for (int i = 0; i < 10; i++) {
        if (freq[i] > max) {
            max = freq[i];
            result = i;
        }
    }

    printf("%d", result);

    return 0;
}