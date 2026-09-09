#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",&s);
    int st=strlen(s);
    int cap=0,small=0;
    for(int i=0;i<st;i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            cap++;
        }
        else if(s[i]>='a' && s[i]<='z')
        {
          small++;
        }
    }
    printf("%d %d",cap,small);
    return 0;
}






