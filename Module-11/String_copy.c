#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",&a,&b);

    strcpy(a,b);


   // int s=strlen(a),t=strlen(b);
    //printf("%s %s",a,b);
   // for(int i=0;i<=t;i++)
    //{
   //     a[i]=b[i];
   // }


   // for(int i=0;i<=s;i++)
   // {
   //     b[i]=a[i];
   // }
    printf("%s %s",a,b);

    return 0;
}




