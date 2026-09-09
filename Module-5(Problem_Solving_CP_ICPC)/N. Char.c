#include<stdio.h>
int main()
{
    char X;
    int ans;
    scanf("%c",&X);
    if(X>=97 && X<=122)
    {
        ans=X-32;
        printf("%c",ans);
    }
    else
    {
        ans=X=32;
        printf("isupper");
    }
    return 0;
}

///2nd way to do:

#include<stdio.h>
int main()
{
    int ans;
    char x;
    scanf("%c",&x);
    if(x>='a' && x<='z')
    {
        ans=x-32;
        printf("%c",ans);
    }
    else
    {
        ans=x+32;
        printf("%c",ans);
    }
    return 0;
}







