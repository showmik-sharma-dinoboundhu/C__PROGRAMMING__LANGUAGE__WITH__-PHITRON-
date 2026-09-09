#include <stdio.h>
void fun(int a[], int n, long long *sum)
{
    if (n == 0)
    {
        return;
    }
    *sum = *sum + a[n - 1];
    fun(a, n - 1, sum);
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    long long sum = 0;
    fun(a, n, &sum); //&sum → sum এর address pass করছি
    printf("%lld\n", sum);
    return 0;
}
