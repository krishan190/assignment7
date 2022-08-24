#include <stdio.h>
int main()
{
    int n, a = -1, b = 1, c = 0, i;
    printf("Enter a number:");
    scanf("%d", &n);
    for (i = 1; 1; i++)
    {
        c = a + b;
        a = b;
        b = c;
        if (c == n)
        {
            printf("Number found:");
            break;
        }
        if (c > n)
        {
            printf("Number not found:");
            break;
        }
    }
    printf("\n");
}