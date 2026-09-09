#include<stdio.h>
int main()
{
    int i,n;                ///i loop,n koto sonkha
    scanf("%d",&n);      /// input nitechi
    int ar[n];              /// array koita ex=3
    for(i=0;i<n;i++)       ///i<n=0.1.2
    {
        scanf("%d",&ar[i]); ///input nibo array ex- ar[10.20.30]
    }
    int x;
    scanf("%d",&x);
    int ans=-1;
    for(i=0;i<n;i++)       ///i<n e n=0.1.2
    {
        if(ar[i]==x)
        {
            ans=i;      ///array er vitorer man
            break;
        }
    }
    printf("%d\n",ans);
    return 0;
}




