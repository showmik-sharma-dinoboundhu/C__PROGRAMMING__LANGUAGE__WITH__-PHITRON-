///MY WAY:

#include<stdio.h>
int main()
{
    char x;
    int ans;
    scanf("%c",&x);
    if(x>='a' && x<='z')
    //if(x>= 65 && x<=90)
    {
        printf("ALPHA IS SMALL");
    }
    else if(x>='A' && x<='z')
    //else if(x>=97 && x<=122)
    {
        ans=x+32;
        printf("ALPHA IS CAPITAL");
    }
    else
    {
        printf("IS DIGIT");
    }
    return 0;
}

///SUBMITED WAY:

#include<stdio.h>
int main()
{
    char x;
    int ans;
    scanf("%c",&x);
    if(x>='0' && x<='9')
    {
        printf("IS DIGIT");
    }
    else
    {
        printf("ALPHA\n");
        if(x>='a' && x<='z')
        {
          printf("IS SMALL");
        }
        else
        {
          printf("IS CAPITAL");
        }
    }
    return 0;
}








