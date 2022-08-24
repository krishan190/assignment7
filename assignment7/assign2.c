#include <stdio.h>
int main()
{
    int n, a = 0, b = 1, c = 0, i;
    printf("Enter a number:");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    printf(" %d ", c);
    printf("\n");
}