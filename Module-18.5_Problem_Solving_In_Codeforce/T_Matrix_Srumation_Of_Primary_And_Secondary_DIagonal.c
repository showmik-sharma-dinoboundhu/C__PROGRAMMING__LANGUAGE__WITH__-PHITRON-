#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int primarysum = 0, secondarysum = 0;

    for (int i = 0; i < n; i++)
    {
        primarysum = primarysum + a[i][i];
        secondarysum = secondarysum + a[i][n - 1 - i];//i=0 n=4 sum=4-1-0;
    }
    int dif = primarysum - secondarysum;
    if (dif < 0)
    {
        dif = -dif;
    }
    printf("%d", dif);
    return 0;
}