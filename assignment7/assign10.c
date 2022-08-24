#include <stdio.h>
int main()
{
    int n, r, sum = 0, x;
    printf("Armstrong no is:");

    for (n = 1; n <= 1000; n++)
    {
        x = n;
        while (x != 0)
            r = x % 10;
        sum = sum + r * r * r;
        x = x / 10;
    }
    if (sum == n)
        printf(" %d ", n);
}