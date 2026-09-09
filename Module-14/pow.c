#include <stdio.h>
#include <math.h>
int main()
{
    long long int a, b;
    scanf("%lld %lld", &a, &b);
    long long int ans = (long long int) pow(a, b);
    printf("%lld", ans);
    return 0;
}
