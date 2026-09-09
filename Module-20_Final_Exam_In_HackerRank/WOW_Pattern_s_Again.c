#include <stdio.h>
int main()
{
    int n, s, k = 1;
    scanf("%d", &n);
    s = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }

        if (i % 2 == 0)
        {
            for (int j = 1; j <= k; j++)
            {
                printf("^");
            }
        }
        else
        {
            for (int j = 1; j <= k; j++)
            {
                printf("*");
            }
        }
        s--;
        k = k + 2;
        printf("\n");
    }
    return 0;
}