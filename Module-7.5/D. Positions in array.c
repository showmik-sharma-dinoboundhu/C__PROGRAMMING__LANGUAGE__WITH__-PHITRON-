#include<stdio.h>
int main()
{
    int n,i;                            ///n,i loop er jonno.n=1.2.3...
    scanf("%d",&n);                     ///n k input hisebe nilam
    int ar[n];                          ///array er modde input a[0.1.2]
    for(i=0;i<n;i++)                    ///n=1.2.3.4.5
    {
        scanf("%d",&ar[i]);             ///array k i er modde input nilam ar[.1.2.100.]
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]<=10)
        {
            printf("A[%d] = %d\n",i,ar[i]);

            ///A[%d] holo ar[i=1.2.100..] eigula print korbe ar %d of i hoiche :
            ///ar[0] = 1 ✅ (10 এর কম)

            ///ar[1] = 2 ✅ (10 এর কম)

            ///ar[2] = 100 ❌ (10 এর বেশি)

            ///ar[3] = 0 ✅ (10 এর কম)

            ///ar[4] = 30 ❌ (10 এর বেশি)
        }

    }
    return 0;
}
