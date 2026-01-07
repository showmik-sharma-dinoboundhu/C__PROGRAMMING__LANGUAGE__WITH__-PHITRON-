#include<stdio.h>
int main()
{
  int a,n,i;
  int even=0,odd=0,positive=0,negative=0;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      scanf("%d",&a);
      ///kaj

    if (a%2==0)
    {
        ///even
      even++;
      //printf("even: %d\n",a);
     }
      else
    {
        ///odd
      odd++;
    }
    if(a>0)
    {
        ///positive
      positive++;
    }

    else if (a<0)
    {
        ///negative
      negative++;
    }
  }
  printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",even,odd,positive,negative);
  return 0;
}
