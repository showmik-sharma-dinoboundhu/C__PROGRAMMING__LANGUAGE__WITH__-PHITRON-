#include<stdio.h>
int main()
{
    int n,i;            ///n r i nilam int e
    scanf("%d",&n);     /// n k input inlam
    int ar[n];          /// array er modde n k input nilam
    for(i=0;i<n;i++)    ///loop i=0,i er man n theke 1 kom hobe n=0.1.2.3.4
    {
        scanf("%d",&ar[i]); /// arr[0.1.2.3.4]
    }
    for(i=n-1;i>=0;i--)      ///i=4.3.2.1.0 & i er man n theke boro hobe
    {
        printf("%d ",ar[i]);     /// tahole print korbo ar[4.3.2.1.0]
    }

    return 0;
}




