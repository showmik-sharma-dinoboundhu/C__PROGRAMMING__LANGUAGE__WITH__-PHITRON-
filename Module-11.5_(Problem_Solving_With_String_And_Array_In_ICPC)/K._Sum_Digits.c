#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    //int a[n];
   // for(int i=0;i<n;i++)
    //{
    //    scanf("%d",&a[i]);
    //}

    char a[n+1];
    scanf("%s",&a);
    int sum=0;///,s=strlen(a);
    for(int i=0;i < n;i++)
    {
        sum=sum+(a[i] - '0');
    }
    printf("%d\n",sum);
    return 0;
}
