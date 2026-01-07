#include<stdio.h>
#include<string.h>
int main()
{
    char s[10000001];
    scanf("%s",&s);
    int cnt[26]={0};
    int st=strlen(s);
    for(int i=0;i<st;i++)
    {
        int val=s[i] - 'a';
        cnt[val]++;
    }
    for(int i=0;i<26;i++)
    {
        if(cnt[i]!=0)
        {
            printf("%c : %d\n",i+'a',cnt[i]);
        }
    }
    return 0;
}





