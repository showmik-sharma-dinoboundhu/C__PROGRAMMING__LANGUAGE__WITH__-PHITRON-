#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    //char s[101];
    //scanf("%s",&s);

    //int st = strlen(s);

   // for(int i=0;s[i]!='\0';i++)
   while(t--)
   {
    char s[101];
    scanf("%s",&s);

    int st = strlen(s);
       if(st > 10)
       {
           printf("%c%d%c\n", s[0], st-2, s[st-1]);
       }
       else
       {
            printf("%s\n",s);
       }
    }

    return 0;
}




