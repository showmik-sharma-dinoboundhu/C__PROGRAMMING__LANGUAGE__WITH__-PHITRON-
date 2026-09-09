#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }


    ///int zero=0,one=0,two=0;
    int count[7]={0};


    for(int i=0;i<n;i++)
    {
      ///  printf("%d ",a[i]);
      if(a[i]==0)
      {
          count[1]++;
      }
      if(a[i]==1)
        {
            count[2]++;
        }
     if(a[i]==2)
        {
            count[3]++;
        }
    }
    printf("0-%d\n",count[0]);
    printf("1-%d\n",count[1]);
    printf("2-%d\n",count[2]);
    return 0;
}
