#include<stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
        if(x>='a' && x<'z')
        {
            x++;
        printf("%c",x);
        }
        else if(x=='z')
        {
            x='a';
            printf("%c",x);
        }
    return 0;
}




