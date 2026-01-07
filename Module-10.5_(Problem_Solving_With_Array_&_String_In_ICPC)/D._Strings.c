#include<stdio.h>
int main()
{
    char a[11],b[11];
    scanf("%s %s",&a,&b);
    int s=strlen(a),t=strlen(b);
    printf("%d %d\n",s,t);
    printf("%s%s\n",a,b);

    char temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    printf("%s %s\n",a,b);
    return 0;
}
