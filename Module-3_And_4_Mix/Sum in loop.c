/// if you need the full calculation how it increment one after antoner then this way-
#include<stdio.h>
int main()
{
    int sum=0;
    int i;
    for(i=1;i<=5;i++)
    {
        sum=sum+i;
         printf("%d\n",sum);
    }


    return 0;
}

///Or else this way if you need what is the calculation answer-

#include<stdio.h>
int main()
{
    int sum=0;
    int i;
    for(i=1;i<=5;i++)
    {
        sum=sum+i;

    }
    printf("%d\n",sum);

    return 0;
}

///1+2+3+4....n sum in loop

#include<stdio.h>
int main()
{
    int i,sum=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
       // printf("%d\n",sum);
    }
    printf("%d\n",sum);


    return 0;
}


///if the num is too big then we should use Long Long Intiger;

#include<stdio.h>
int main()
{
   long long int i,sum=0,n;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
       // printf("%d\n",sum);
    }
    printf("%lld\n",sum);


    return 0;
}

///Multiply in Loop

#include<stdio.h>
int main()
{
   long long int i,mlt=1,n;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        mlt=mlt*i;
       // printf("%d\n",sum);
    }
    printf("%lld\n",mlt);


    return 0;
}

///Division in Loop:

#include<stdio.h>
int main()
{
    double i,div=1,n;
    scanf("%lf",&n);
    for(i=1;i<=n;i++)
    {
        div=i/div;
       // printf("%d\n",sum);
    }
    printf("%lf\n",div);


    return 0;
}

