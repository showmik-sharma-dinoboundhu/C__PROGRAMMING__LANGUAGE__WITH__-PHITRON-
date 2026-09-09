#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);     ///input n k nilam n=5
    if(n>0)         ///eikhane n ta pos na neg
        {
            for(i=1;i<=n;i++)   ///i er man 1 theke suru n mane koto bar ghurbe i er man barbe 1.2.3.4...
            {
                printf("%d ",i);
            }
        }
        else
        {
            for(i=n;i<=1;i++)
            {
                printf("%d ",i);
            }
        }



    return 0;
}




