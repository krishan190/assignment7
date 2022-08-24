#include <stdio.h>
int main()
{
    int a, b, H;
    printf("Enter two numbers:");
    scanf("%d%d", &a, &b);
    for (H = a > b ? b : a; H >= 1; H--)
    {
        if (a % H == 0 && b % H == 0)
            break;
    }
    printf("%d", H);
    printf("\n");
}