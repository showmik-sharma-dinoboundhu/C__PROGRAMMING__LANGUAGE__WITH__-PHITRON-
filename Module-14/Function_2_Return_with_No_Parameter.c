#include <stdio.h>
int sum(void) // if i use extra value it will not show .. its safe.
{
    int a, b;
    scanf("%d %d", &a, &b);
    int s = a + b;
    return s;
}
int main()
{
    // int s = sum(100); // It will Ignore
    int s = sum();
    printf("%d ", s);
    return 0;
}
