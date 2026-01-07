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
   int m;
   scanf("%d",&m);
   int b[m];
   for(int i=0;i<n;i++)
   {
       scanf("%d",&b[i]);
   }
   int ab[n+m];
   for(int i=0;i<n;i++)
   {
       ab[i]=a[i];
   }
   int i=n;
   for(int j=0;j<m;j++)
   {
       ab[i]=b[j];
       i++;
   }
   for(i=0;i<n+m;i++)
   {
   printf("%d ",ab[i]);
   }
    return 0;
}




