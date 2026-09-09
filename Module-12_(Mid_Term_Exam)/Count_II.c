#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",&s);
    int st=strlen(s);
    int vowel[26]={0};
    for(int i=0;i<st;i++)
    {
        if(s[i]=='a')
        {
            vowel[s[i] - 'a']++;
        }
        else if (s[i]=='e')
        {
            vowel[s[i] - 'a']++;
        }
        else if (s[i]=='i')
        {
            vowel[s[i] - 'a']++;
        }
        else if (s[i]=='o')
        {
            vowel[s[i] - 'a']++;
        }
        else if (s[i]=='u')
        {
            vowel[s[i] - 'a']++;
        }
    }
    int total=vowel['a' - 'a']+ vowel['e' - 'a']+vowel['i' - 'a']+vowel['o' - 'a']+vowel['u' - 'a'];
    printf("%d ",vowel);
    return 0;
}
