#include <stdio.h>
int main()
{
    int n, sum = 0, r, temp;
    printf("Enter a number:");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + r * r * r;
        n = n / 10;
    }
    if (temp == sum)
        printf("No is armstrong:");
    else
        printf("No is not armstrong:");
    printf("\n");
}