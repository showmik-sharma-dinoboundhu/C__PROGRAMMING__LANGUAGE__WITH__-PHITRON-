// Return & Parameter:
#include <stdio.h>
int sum(int x, int y)
{
    int sum = x + y;
    return sum;
}
int main()
{
    printf("%d", sum(10, 20));
    return 0;
}

// Return & No Parameter:
#include <stdio.h>
int mult(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int m = a * b;
    return m;
}
int main()
{
    int m = mult();
    printf("%d", m);
    return 0;
}

// No Return & Parameter:
#include <stdio.h>
void min(int r, int t)
{
    int m = r - t;
    printf("%d", m);
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    min(a, b);
    return 0;
}

// No Return & No Parameter:
#include <stdio.h>
void div(void)
{
    int s, t;
    scanf("%d %d", &s, &t);
    int div = s / t;
    printf("%d", div);
}
int main()
{
    div();
    return 0;
}
