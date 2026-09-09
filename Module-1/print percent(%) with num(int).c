//FIRST WAY:
#include<stdio.h>
int main()
{
    int a,b;

    scanf("%d %d",&a,&b);
    printf("%d%% %d%%",a,b);

    return 0;
}


//SECOND WAY:


#include<stdio.h>
int main()
{
    int a,b;
    char p;
    scanf("%d%c %d%c",&a,&p,&b,&p);
    printf("%d%% %d%% %c",a,b,p);

    return 0;
}



//THIRD WAY:

#include<stdio.h>
int main()
{
    int a,b;
    scanf("%ds %dt",&a,&b);
    printf("%ds %dt",a,b);
    return 0;
}





