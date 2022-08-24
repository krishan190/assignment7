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
    if (H == 1)
        printf("No is co-prime:");
    else
        printf("No is not co-prime:");
    printf("\n");
}