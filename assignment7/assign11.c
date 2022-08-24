#include <stdio.h>
int main()
{
    int x = 10, count = 0;
    int res = 0;
    while (x != 0)
    {
        res = x & 1;
        count++;
        if (res == 1)
        {
            printf("%d", count);
            break;
        }
    }
    x = x >> 1;
    printf("\n");
}