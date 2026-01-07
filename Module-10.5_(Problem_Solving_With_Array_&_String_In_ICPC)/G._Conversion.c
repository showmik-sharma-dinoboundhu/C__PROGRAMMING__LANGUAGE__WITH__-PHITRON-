#include<stdio.h>
#include<string.h>
int main()
{
    char s[100001];
    fgets(s,100001,stdin);
    int st=strlen(s);
    for(int i=0;s[i]!='\0';i++)
    {
        if (s[i]==',')
        {
            s[i]=' ';
        }
        else if (s[i]>='a' && s[i]<='z')
        {
            s[i]= s[i] - 'a' + 'A';
        }
        else if (s[i]>= 'A' && s[i]<= 'Z')
        {
            s[i]= s[i] - 'A' + 'a';
        }
    }
    printf("%s",s);
    return 0;
}



