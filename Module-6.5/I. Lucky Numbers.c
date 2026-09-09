#include<stdio.h>
int main()
{
    int a,lucky,mod;
    scanf("%d",&a);
    lucky=a/10;
    mod=a%10;
    if(lucky%mod==0 || mod%lucky==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }


    return 0;

}




