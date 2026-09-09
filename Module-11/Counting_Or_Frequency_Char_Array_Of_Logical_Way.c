#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",&s);
    int count[26]={0};
    for(int i=0;i<strlen(s);i++)
    {
        //printf("%c ",s[i]);

        //char val = s[i];
       // printf("%c ",val);

        int val = s[i]-'a';
        //printf("%d - %d\n",i,val);
        count[val]++;
    }
   // for(int i=0;i<26;i++)
    //{
       // printf("%d - %d\n",i,count[i]);
        //printf("%d - %d\n",i+'a',count[i]);
       // printf("%c - %d\n",i+'a',count[i]);
       // if(count[i]!=0)
        //{
           // printf("%c - %d\n",i+'a',count[i]);
       // }
    //}


    //for(int i=0;i<strlen(s);i++)
    //{
      //  int val=s[i]-'a';
        //printf("%c - %d\n",val+'a',count[val]);
    //}


    for(int i=0;i<strlen(s);i++)
    {
        int val=s[i]-'a';
        if(count[val]!=0)
        {
            printf("%c - %d\n",val+'a',count[val]);
        }
        count[val]=0;
    }
    return 0;
}




