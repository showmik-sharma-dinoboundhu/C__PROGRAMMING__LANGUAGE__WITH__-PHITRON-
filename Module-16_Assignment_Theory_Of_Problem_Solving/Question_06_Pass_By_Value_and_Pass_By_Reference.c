//CALL BY VALUE:
#include <stdio.h>
void pass(int a)
{
    a = 1000;
}
int main()
{
    int x = 100;
    pass(x);
    printf("%d", x);
    return 0;
}


//CALL BY REFERENCE: 
#include <stdio.h>
void pass(int *a)
{
    *a = 1000;
}
int main()
{
    int x = 100;
    pass(&x);
    printf("%d", x);
    return 0;
}
