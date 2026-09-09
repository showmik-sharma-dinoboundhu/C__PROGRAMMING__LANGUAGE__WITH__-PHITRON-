#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};

    // a[0,1,2,3,4]
    printf("0th index er add - %p\n", &a[0]);
    printf("0th index er value - %d\n", a[0]);
    printf("0th array ar pointer same - %d\n", *a);

    printf("1th index er add - %p\n", &a[1]);
    printf("1th index er value - %d\n", a[1]);
    printf("1th array ar pointer same - %d\n", *a+1);

    printf("2th index er add - %p\n", &a[2]);
    printf("2th index er value - %d\n", a[2]);
    printf("2th array ar pointer same - %d\n", *a+2);

    printf("3rd index er add - %p\n", &a[3]);
    printf("3rd index er value - %d\n", a[3]);
    printf("3rd array ar pointer same - %d\n", *a+3);

    printf("4th index er add - %p\n", &a[4]);
    printf("4th index er value - %d\n", a[4]);
    printf("4th array ar pointer same - %d\n", *a+4);

    return 0;
}
