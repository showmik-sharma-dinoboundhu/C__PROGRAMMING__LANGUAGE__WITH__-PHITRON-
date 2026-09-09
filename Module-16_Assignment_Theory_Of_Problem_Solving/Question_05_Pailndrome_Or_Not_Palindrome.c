#include <stdio.h>
#include <string.h>
void fun(void)
{
    char a[1001];
    scanf("%s", &a);
    int st = strlen(a);
    int i = 0, j = st - 1;
    while (i < j)
    {
        if (a[i] != a[j])
        {
            printf("Not Palendrome\n");
            return 0;
        }
        i++;
        j--;
    }
    printf("Palendrome\n");
}
int main()
{
    fun();
    return 0;
}
