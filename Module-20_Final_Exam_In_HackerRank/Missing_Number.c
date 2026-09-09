#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        int sum = a - (b + c + d);
        printf("%d", sum);
        printf("\n");
    }
    return 0;
}
