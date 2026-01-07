#include<stdio.h>
#include<string.h>
int main()
{
    char ar[100];
    //gets(ar);
    fgets(ar,16,stdin);
    ar[16]='\0';
    printf("%s",ar);


    return 0;
}




