#include <stdio.h>
#include <limits.h>
int main()
{
    int n, a, max = INT_MIN, min = INT_MAX;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if (a < min)
        {
            min = a;
        }
        else if (a > max)
        {
            max = a;
        }
    }
    printf("%d %d", min, max);
    return 0;
}
