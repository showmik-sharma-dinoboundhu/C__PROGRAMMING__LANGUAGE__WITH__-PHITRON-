///FIRST WAY:

#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001],t[1001];
    scanf("%s %s",&s,&t);
    int count=0;
    for(int i=0;s[i]!='\0';i++)
    {
        count++;
    }
    int total=0;
    for(int i=0;t[i]!=0;i++)
    {
        total++;
    }
    printf("%d %d\n",count,total);
    printf("%s %s",s,t);


    return 0;
}

///SECOND WAY:

#include<stdio.h>
#include<string.h>
int main()
{
   char s[1001],t[1001];
   scanf("%s %s",&s,&t);
   int S= strlen(s);
   int T= strlen(t);
   printf("%d %d\n",S,T);
   printf("%s %s",s,t);


    return 0;
}








