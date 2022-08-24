#include <stdio.h>
int main()
{
    int n, i, a = -1, b = 1, c;
    printf("Enter a number:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    printf("%d", c);
    printf("\n");
}