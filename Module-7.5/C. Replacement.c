#include<stdio.h>
int main()
{
    int n,i;                    ///loop er jonno i,n
    scanf("%d",&n);             /// n e input nichi
    int ar[n];                  ///array te n er man input korbo
    for(i=0;i<n;i++)               ///n=1.2.3
    {
        scanf("%d",&ar[i]);         ///ar[0.1.2] dependent on i
    }
    //int value=1;                    ///imagine value=1 for positive
   // scanf("%d",&value);             ///value te man input korchi
    for(i=0;i<n;i++)                ///n=1.2.3...
    {
        if(ar[i]>0)                   ///ar[1.2.] as less than 0 not needed
        {
            printf("1 ");       ///value 1 print korbe
        }
        else if(ar[i]<0)
        {
           // value=value+1;              ///1+1=2
            printf("2 ");        ///2 print korbe
        }
        else
        {
            printf("0 ");
        }

    }


    return 0;
}




