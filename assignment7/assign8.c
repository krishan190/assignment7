#include <stdio.h>
int main()
{
    int n, i, j, flag = 0;
    printf("Enter a number:");
    scanf("%d", &n);
    for (i = n; 1; i++)
    {
        flag = 0;
        for (j = 2; j <= n / 2; j++)
        {
            if (i % j == 0)
                flag = 1;
        }
        if (flag == 0)
        {
            printf(" %d ", i);
            break;
        }
    }
        printf("\n");
}